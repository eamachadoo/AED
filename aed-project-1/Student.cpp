//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#include "Student.h"
#include <list>

using namespace std;

Student::Student() = default;

Student::Student(int upCode, std::string name) : upCode_(upCode), name_(name) {}

Student::Student(int upCode, std::string name, Timetable *horario) : upCode_(upCode), name_(name),horarioEstudante_(horario){}

int Student::getStudentCode() const {return upCode_;}

string Student::getStudentName(const string& name) const {return name_;}

Timetable *Student::getStudentTimetable() {return horarioEstudante_;}

Student::Student(int upCode) : upCode_(upCode){}

Student::Student(string name) : name_(std::move(name)) {}
