//
// Created by Eduardo Afonso Soares Ferreira Machado on 05/11/2022.
//

#include <fstream>
#include <sstream>
#include <iostream>
#include "GestorHorarios.h"
#include "Student.h"

GestorHorarios::GestorHorarios() = default;

void GestorHorarios::buildClasses() {
    string class_code;
    for(int i = 0; i <= 47; i++){
        horarios_leic.emplace_back(new Timetable());
    }
    horarios_leic.pop_back();

    int k = 0;

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 16; j++){
            if(j<10){
                class_code = to_string(i)+ "LEIC0" + to_string(j);
                classes_leic.emplace_back(new Class(class_code,horarios_leic[k]));
            }
            else{
                class_code = to_string(i) + "LEIC1" + to_string(j);
                classes_leic.emplace_back(new Class(class_code,horarios_leic[k]));
            }
            k++;
        }
    }
    classes_leic.pop_back();
}

//Gestor de Horario Getters

vector<Timetable *> GestorHorarios::getClassLectures() {
    return horarios_leic;
}

vector<Class *> GestorHorarios::getClasses() {
    return classes_leic;
}


void GestorHorarios::buildTimetable() {
    fstream in("classes.csv");
    if (!in) { cout << "Could not open file." << endl; }
    in.ignore(100, '\n');
    string line, word;
    vector<string> column;
    while (in.peek() != EOF) {
        column.clear();
        getline(in, line);
        stringstream s(line);
        while (getline(s, word, ',')) {
            column.push_back(word);
        }
        for (auto uc: UCs) {
            if (column[1] == uc->getCode()) {
                for (auto c: uc->getUcClasses()) {
                    if (column[0] == c->getClassCode()) {
                        c->getTimetable()->addLecture(
                                Lecture(column[1], column[2], stof(column[3]), stof(column[4]), column[5]));
                    }
                }
            }
        }
    }
    in.close();
}

void GestorHorarios::readClassesPerUC(){
    ifstream in("classes_per_uc.csv");
    string line,uc_code,class_code;
    if(in.is_open()){
        getline(in,line);
        while(getline(in,line)){
            stringstream str(line);
            getline(str,uc_code,',');
            getline(str,class_code,'\r');

            UC uc = UC(uc_code,class_code);

            ucs.push_back(uc);
        }
    }
}

void GestorHorarios::readStudents() {
    string line;
    ifstream in("students_classes.csv");
    getline(in, line);

    while (getline(in, line)) {
        string StudentCode, StudentName, UcCode, Class;
        stringstream input(line);
        int StudentID;

        getline(input, StudentCode);
        getline(input, StudentName);
        getline(input, UcCode);
        getline(input, Class);

        StudentID = stoi(StudentCode);
        UC currentUC = UC(UcCode, Class);


    }
}

vector<Timetable> GestorHorarios::horario_estudante(int upCode) {
    Student estudante;
    vector<Timetable> horario_estudante;

    for(const Student& student : students){
        if(student.getStudentCode() == upCode)
    }
}

void GestorHorarios::Menu(){
    cout << "-------------------------" << endl;
    cout << " GESTOR DE HORARIOS LEIC" << endl;
    cout << "-------------------------" << endl;
    cout << endl;
    cout << "\tMenu Principal\n";
    cout << "(1) Ocupação de turmas/UC/ano" << endl;
    cout << "(2) Horário de aluno" << endl;
    cout << "(3) Estudantes em determinada turma/UC/ano" << endl;
    cout << "(0) Sair";
    cout << "->";

    vector<int> inputs = {0, 1, 2, 3};
    int input;
    cin >> input;

    switch (input) {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 0:
            exit(0);
        default:
            break;
    }
}