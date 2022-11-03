//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#ifndef AED_STUDENT_H
#define AED_STUDENT_H

#include"Timetable.h"
#include <string>

using namespace std;


class Student {
private:
    int upCode_;
    string name_;
    Timetable *horarioEstudante_;

public:
    Student();

    Student(int upCode, string name);

    Student(int upCode, string name, Timetable* horario);

    int getStudentCode() const;

    string getStudentName() const;

    Timetable* getStudentTimetable();
};

#endif //AED_STUDENT_H
