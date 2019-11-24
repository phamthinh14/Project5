//
// Created by phamt on 11/16/2019.
//

#include "Scheduler.h"

Scheduler::Scheduler() {}

Scheduler::Scheduler(string fileName) {
    m_fileName = fileName;
}

Scheduler::~Scheduler() {
    for (int i = 0; i < (int) m_classes.size(); ++i) {
        delete m_classes[i];
        m_classes[i] = nullptr;
    }
}

//Name: MainMenu
//Desc: Displays the main menu of the program
//      Has options for 1. Display All Courses, 2. Display Specific Course
//      3. Search for Specific Student, 4. Sort Roster, and 5. Quit
//Precondition: Has roster loaded
//Postcondition: Keeps running until user chooses 5 (quit)
void Scheduler::MainMenu() {
    int menuOption = 0;

    while (menuOption != 5) {
        cout << "1. Display All Courses" << endl;
        cout << "2. Display a Specific Course" << endl;
        cout << "3. Search for Specific Student" << endl;
        cout << "4. Sort Roster" << endl;
        cout << "5. Quit" << endl;
        cin >> menuOption;

        switch (menuOption) {
            case 1:
                DisplayCourses();
                break;
            case 2:
                DisplaySpecific();
                break;
            case 3:
                SearchStudent();
                break;
            case 4:
                SortRoster();
                break;
            default:
                cout << "Invalid Option" << endl;
                break;
        }
    }
}

void Scheduler::DisplayCourses() {
    for (unsigned int i = 0; i < m_classes.size(); i++) {
        cout << "Course: " << m_classes[i]->GetName() << " Section: " << m_classes[i]->GetSection() << endl;
    }
}

void Scheduler::DisplaySpecific() {
    int courseNumber;
    bool invalidCourseNumber;

    if (m_classes.size() > 0) {

        do {
            cout << "Which course would you like to display?" << endl;
            for (int i = 0; i < m_classes.size(); i++) {
                cout << i + 1 << ". Course: " << m_classes[i]->GetName() << " Section: " << m_classes[i]->GetSection()
                     << endl;
            }

            cin >> courseNumber;
            invalidCourseNumber = (courseNumber < 1 || courseNumber > m_classes.size());
            if (invalidCourseNumber) {
                cout << "Invalid course number. Reenter please." << endl;
            }
        } while (invalidCourseNumber);

        cout << "Displaying Student" << endl;
        cout << "Course: " << m_classes[courseNumber - 1]->GetName() << " Section: "
             << m_classes[courseNumber - 1]->GetSection() << endl;
        m_classes[courseNumber - 1]->DisplayStudents();
    }
}

void Scheduler::SearchStudent() {
    string name;

    cout << "What name do you want to search for?" << endl;
    cin >> name;
    cout << "Items with " << name << " in them:" << endl;
    for (int i = 0; i < m_classes.size(); i++) {
        if (m_classes[i]->SearchClass(name)) {
            cout << (*m_classes[i]) << endl;
        }
    }
}

void Scheduler::SortRoster() {
    for (unsigned int i = 0; i < m_classes.size(); i++) {
        m_classes[i]->SortStudents();
    }
}

void Scheduler::Start() {
    cout << "Welcome to the UMBC Scheduler" << endl;
    LoadFile();
    MainMenu();
}

int Scheduler::FindClass(string name) {
    int index = -1;
    for (int i = m_classes.size() - 1; i >= 0 && index == -1; i--) {
        if (m_classes[i]->GetName() == name) {
            index = i;
        }
    }
    return index;
}

void Scheduler::LoadFile() {
    char comma = ',';
    string line;
    string fName;
    string lName;
    int id;
    string tempID;
    string course;

    ifstream theFile(m_fileName);
    if (!theFile.is_open()) {
        cout << "Failed to open " << m_fileName << endl;
        return;
    }

    while (getline(theFile, fName, comma) && !theFile.eof()) {
        getline(theFile, lName, comma);
        getline(theFile, tempID, comma);
        id = stoi(tempID);
        getline(theFile, course, '\n');

        Student *tempStudentHolder = new Student(fName, lName, id);

        AddStudent(tempStudentHolder, course);
    }

    theFile.close();
}

void Scheduler::AddStudent(Student *student, string course) {

    int index = FindClass(course);

    if (index == -1) {
        Class *tempClassHolder = new Class(course, 1);
        tempClassHolder->AddStudent(student);
        m_classes.push_back(tempClassHolder);
    } else {
        if (m_classes[index]->IsRosterFull() && m_classes[index]->IsWaitlistFull()) {
            Class *tempClassHolder = new Class(course, m_classes[index]->GetSection() + 1);
            m_classes[index]->TransferWaitToRoster(*tempClassHolder);
            tempClassHolder->AddStudent(student);
            m_classes.push_back(tempClassHolder);
        } else {
            m_classes[index]->AddStudent(student);
        }
    }
}
