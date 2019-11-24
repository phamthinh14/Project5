//
// Created by phamt on 11/15/2019.
//

#include "Class.h"

Class::Class() {}

Class::Class(string name, int section) {
    m_name = name;
    m_section = section;
}

Class::~Class() {
    // delete all allocated records from the roster
    for (int i = 0; i < m_roster.Size(); i++) {
        delete m_roster[i];
    }

    // delete all allocated records from the waitlist
    for (int i = 0; i < m_waitlist.Size(); i++) {
        delete m_waitlist[i];
    }
}

void Class::DisplayStudents() {

    if (m_roster.Size() == 0) {
        cout << "There is no Students in the Roster to display" << endl;
    } else {
        cout << "Enrolled (" << m_roster.Size() << " enrolled)" << endl;
        for (int i = 0; i < m_roster.Size(); ++i) {
            cout << m_roster[i]->GetLName() << ", " << m_roster[i]->GetFName() << endl;
            // cout << "First Name: " << m_roster[i]->GetFName() << endl;
            // cout << "Last Name: " << m_roster[i]->GetLName() << endl;
            // cout << "ID: " << m_roster[i]->GetID() << endl;
        }
    }

    if (m_waitlist.Size() > 0) {
        cout << "Waitlisted (" << m_waitlist.Size() << " waitlisted)" << endl;
        for (int i = 0; i < m_waitlist.Size(); ++i) {
            cout << m_waitlist[i]->GetLName() << ", " << m_waitlist[i]->GetFName() << endl;
        }
    }
}

bool Class::AddStudent(Student *studentObj) {
    bool isStudentAdded;

    if (m_roster.IsFull() == 0) {
        m_roster.Enqueue(studentObj);
        isStudentAdded = true;
        // cout << "Student added to the Roaster successfully" << endl;
    }
    else {
        // cout << "The roster is full" << endl;
        if (m_waitlist.IsFull() == 0) {
            m_waitlist.Enqueue(studentObj);
            isStudentAdded = true;
            // cout << "Student is added to the wait list successfully" << endl;
        } else {
            // cout << "Wait List full" << endl;
            isStudentAdded = false;
        }
    }
    return isStudentAdded;
}

void Class::SortStudents() {
    m_roster.Sort();
    m_waitlist.Sort();
}

string Class::GetName() {
    return m_name;
}

void Class::SetName(string name) {
    m_name = name;
}

int Class::GetSection() {
    return m_section;
}

void Class::SetSection(int section) {
    m_section = section;
}

void Class::TransferWaitToRoster(Class &destination) {
    if (m_waitlist.IsFull()) {
        for (int i = 0; i < m_waitlist.Size(); ++i) {
            destination.AddStudent(m_waitlist[i]);
        }
        //Forgot about this, it will mess up the order and the access of memory address
        m_waitlist.ClearData();
    } else {
        cout << "The wait list is not full yet" << endl;
    }
}

bool Class::IsRosterFull() {
    bool isFull = false;

    if (m_roster.IsFull() == 1) {
        isFull = true;
    }
    return isFull;
}

bool Class::IsWaitlistFull() {
    bool isFull = false;

    if (m_waitlist.IsFull() == 1) {
        isFull = true;
    }
    return isFull;
}

bool Class::SearchClass(string item) {
    bool isFound = false;
    for (int i = 0; i < m_roster.Size() && !isFound; ++i) {
        if (m_roster[i]->GetLName() == item) {
             cout << *m_roster[i] << endl;
            isFound = true;
        }
    }
    for (int j = 0; j < m_waitlist.Size() && !isFound; ++j) {
        if (m_waitlist[j]->GetLName() == item) {
             cout << *m_waitlist[j] << endl;
            isFound = true;
        }
    }
    return isFound;
}

ostream &operator<<(ostream &os, Class &aClass) {
    cout << "Course: " << aClass.GetName() << " Section: " << aClass.GetSection();

//    os << "Number of student in the roster" << aClass.m_roster.Size() << endl;
//    os << "Student in the roster: " << endl;
//    for (int i = 0; i < aClass.m_roster.Size(); ++i) {
//        os << aClass.m_roster[i] << endl;
//    }
//    os << "Student in the wait list: " << endl;
//    for (int j = 0; j < aClass.m_waitlist.Size(); ++j) {
//        os << aClass.m_waitlist[j] << endl;
//    }

    return os;
}
