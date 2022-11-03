//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#ifndef UNTITLED_CLASS_H
#define UNTITLED_CLASS_H

#include "UC.h"
#include "Timetable.h"
#include "Student.h"
#include <string>
#include <list>

using namespace std;

class Class {
private:

    string class_code_;
    Timetable* horario_;
    list<Student*> students_;

public:
    Class();
    explicit Class(string class_code);
    explicit Class(string class_code,Timetable* horario);
    string getClassCode() const;
    Timetable* getTimetable();
    list<Student*> getStudentList();
    void addStudent(Student* s);
};

#endif //UNTITLED_CLASS_H
