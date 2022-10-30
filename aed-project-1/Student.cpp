//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#include "Student.h"
#include "UC.h"
#include <string>
#include <list>
#include <vector>


using namespace std;

Student::Student() = default;

Student::Student(string up) {
    this->up = up;
}

Student::Student(string up, string name){
    this->up=up;
    this->name=name;
}
string Student::get_Student_up() {
    return this -> up;
}

string Student::get_Student_name(){
    return this -> name;
}
void Student::set_Student_up(string up){
    this->up = up;
}
void Student::set_Student_name(std::string name) {
    this->name = name;
}
void Student::add_uc_class(std::string uc_code, std::string class_code) {
    uc.emplace_back(uc_code,class_code);

}
bool Student::operator==(Student student) {
    return this -> up ==student.get_Student_up();
}