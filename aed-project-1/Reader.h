//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#ifndef AED_READER_H
#define AED_READER_H


#include "Student.h"
#include "Timetable.h"
#include "Turma.h"
#include "Class.h"
#include "UC.h"
#include <vector>
#include <algorithm>

class Reader {
private:
    vector<Student> students;
    vector<Class> classes;
    vector<UC> uc;

public:
    void read_info_students();
    void read_info_classes();
    void read_info_uc();
};


#endif //AED_READER_H
