//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#ifndef AED_STUDENT_H
#define AED_STUDENT_H

#include"UC.h"
#include <list>
#include <string>
#include <vector>

using namespace std;


class Student {
private:
    string up;
    string name;
    vector<UC> uc;

public:
    Student();
    Student(string up);
    Student(string up, string name);

    string get_Student_up();
    string get_Student_name();

    void set_Student_up(string up);
    void set_Student_name(string name);
    void add_uc_class(string uc_code, string class_code);

    bool operator == (Student student);
};


#endif //AED_STUDENT_H
