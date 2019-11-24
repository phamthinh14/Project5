#include "Student.h"

//
// Created by phamt on 11/15/2019.
//
Student::Student() { }

Student::Student(string fName, string lName, int id) {
    m_fName = fName;
    m_lName = lName;
    m_id = id;
}

void Student::SetFName(string fName) {
    m_fName = fName;
}

string Student::GetFName() {
    return m_fName;
}

void Student::SetLName(string lName) {
    m_lName = lName;
}

string Student::GetLName() {
    return m_lName;
}

void Student::SetID(int id) {
    m_id = id;
}

int Student::GetID() {
    return m_id;
}

ostream &operator<<(ostream &os, Student &student) {
    os << "First Name: " << student.GetFName() << endl;
    os << "Last Name: " << student.GetLName() << endl;
    os << "ID: " << student.GetID() << endl;
    return os;
}

// Name: Overloaded <
// Description: Overloaded comparison operator (used for sorting)
// Preconditions: Two students being compared
// Postconditions: Returns m_lName first and then m_fName if m_lName same
bool operator<(const Student &s1, const Student &s2) {
    bool result;
    if (s1.m_lName < s2.m_lName) {
        //s1 order will be before s2
        result = true;
    }
    else if (s1.m_lName > s2.m_lName) {
        //s1 order will be before s2
        result = false;
    }
    else {
        result = s1.m_fName < s2.m_fName;
    }

    return result;
}
