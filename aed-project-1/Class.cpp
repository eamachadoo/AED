//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#include "Class.h"
#include "Timetable.h"
#include "Student.h"
#include <string>
#include <list>
#include <utility>

using namespace std;


Class::Class() = default;

Class::Class(string class_code) {
    this -> class_code_ = std::move(class_code);
}
Class::Class(string class_code, Timetable *horario) : class_code_(std::move(class_code)), horario_(horario){}

Class::Class(std::string class_code, Timetable *horario, const int &students) :
class_code_(std::move(class_code)),horario_(horario),students_(students) {}

string Class::getClassCode() const {return class_code_;}

Timetable *Class::getTimetable() {return horario_;}

list<Student *> Class::getStudentList() {return students_;}

void Class::addStudent(Student *s) {
    students_.push_back(s);
}

