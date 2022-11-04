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
     * Overloaded Constructor.
     * @brief Complexidade : O(n)
     * @param 1. class_code
     */
    explicit Class(string class_code);
    /**
     * Overloaded Constructor.
     * @brief Complexidade : O(n)
     * @param 1. class_code
     * @param 2. horario
     */
    explicit Class(string class_code,Timetable* horario);
    /**
     * Overloaded Constructor.
     * @brief Complexidade: O(1)
     * @param 1. class_code
     * @param 2. horario
     * @param 3. students
     */
    explicit Class(string class_code,Timetable* horario, const int &students);
    /**
      * Getter function: retrieves the value of the class_code
      * which is private. Allowing the program to access it.
      * @brief Complexidade : O(n)
      * @return Class Code
      */
    string getClassCode() const;
    /**
    * Getter function: retrieves the value of the the pointer horario,
     * to obtain it's value (time of class).
    * @brief Complexidade : O(n)
    * @return Horario da Turma
    */
    Timetable* getTimetable();
    /**
     * Getter function: retrieves the value of the list student, obtaining
     * the element indicating the student's name/number.
     * @brief Complexidade : O(n)
     * @return Student Name/Code
     */
    list<Student*> getStudentList();
    /**
     * Adds student element (name/code) to students_ (list) by inserting the new element
     * at the end of the list using the push_back() function and increases
     * size of list by one.
     * @brief Complexidade : O(n)
     * @param 1. s
     * @return Student list object.
     */
    void addStudent(Student* s);
};

#endif //UNTITLED_CLASS_H
