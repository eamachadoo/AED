//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#ifndef UNTITLED_CLASS_H
#define UNTITLED_CLASS_H

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
    /**
     * Default Constructor.
     * @brief Complexidade : O(1)
     */
    Class();
    /**
     * Constructor.
     * @brief Complexidade : O(n)
     * @param 1. class_code
     */
    explicit Class(string class_code);
    /**
     * Constructor.
     * @brief Complexidade : O(n)
     * @param 1. class_code
     * @param 2. horario
     */
    explicit Class(string class_code,Timetable* horario);
    /**
    * Getter function: gets class code.
    * @brief Complexidade : O(n)
    * @return Class Code
    */
    string getClassCode() const;
    /**
    * Getter function: gets class timetable.
    * @brief Complexidade : O(n)
    * @return Time
    */
    Timetable* getTimetable();
    /**
     * Getter function: gets students.
     * @brief Complexidade : O(n)
     * @return Student
     */
    list<Student*> getStudentList();
    /**
     * Adds student while building class.
     * @brief Complexidade : O(n)
     * @param 1. s
     * @return Student object.
     */
    void addStudent(Student* s);
};

#endif //UNTITLED_CLASS_H
