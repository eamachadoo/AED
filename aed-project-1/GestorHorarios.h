//
// Created by Eduardo Afonso Soares Ferreira Machado on 05/11/2022.
//

#ifndef AED_PROJECT_1_GESTORHORARIOS_H
#define AED_PROJECT_1_GESTORHORARIOS_H


#include "UC.h"
#include "Lecture.h"
#include "Student.h"

class GestorHorarios {
private:
    vector<Student*> student;
    vector<Lecture*> lecture;
    vector<Timetable*> horario_estudante_;
    vector<UC*> UCs; //criar timetable (pointers necessários)

    vector<Class*> classes_leic;

    vector<Timetable*> horarios_leic;

public:
    GestorHorarios();
    void setUCs();
    void buildClasses();
    vector<Class*> getClasses();
    vector<Timetable*> getClassLectures();
    vector<Timetable> horario_estudante(int upCode);
    void getStudents();
    void sortClassTimetables();
    void buildTimetable();

    void readClassesPerUC();
    void readStudents();

    void Menu();

};


#endif //AED_PROJECT_1_GESTORHORARIOS_H
