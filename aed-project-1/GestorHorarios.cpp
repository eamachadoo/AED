//
// Created by Eduardo Afonso Soares Ferreira Machado on 05/11/2022.
//

#include <fstream>
#include <sstream>
#include <iostream>
#include "GestorHorarios.h"
#include "Student.h"

GestorHorarios::GestorHorarios() = default;

void GestorHorarios::setUCs() {
    UCs.emplace_back(new UC("L.EIC001","ALGA",4.5));
    UCs.emplace_back(new UC("L.EIC002","AM1",6));
    UCs.emplace_back(new UC("L.EIC003","FP",6));
    UCs.emplace_back(new UC("L.EIC004","FSC",6));
    UCs.emplace_back(new UC("L.EIC005","MD",6));
    UCs.emplace_back(new UC("L.EIC011","AED",6));
    UCs.emplace_back(new UC("L.EIC012","BD",6));
    UCs.emplace_back(new UC("L.EIC013","F2",4.5));
    UCs.emplace_back(new UC("L.EIC014","SO",6));
    UCs.emplace_back(new UC("L.EIC015","LDTS",6));
    UCs.emplace_back(new UC("L.EIC021","FSI",6));
    UCs.emplace_back(new UC("L.EIC022","IPC",4.5));
    UCs.emplace_back(new UC("L.EIC023","LBAW",6));
    UCs.emplace_back(new UC("L.EIC024","PFL",6));
    UCs.emplace_back(new UC("L.EIC0025","RC",6));

}

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

            for(auto uc : UCs){
                if(uc->getCode() == uc_code){
                    uc->addUcClass(new Class(class_code, new Timetable(), {}));
                }
            }
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

        getline(input, StudentCode);
        getline(input, StudentName);
        getline(input, UcCode);
        getline(input, Class);

        Student* estudante = new Student(stof(StudentCode),StudentName);

    for (auto uc : UCs){
        if(uc->getCode() == UcCode){
            for (auto c : uc->getUcClasses()){
                if(c->getClassCode() == Class){
                    c->getStudentList().emplace_back(estudante);
                }
            }
        }
    }
    }
}

void

void GestorHorarios::Menu() {
    bool loop = true;
    while (loop) {
        cout << "-------------------------" << endl;
        cout << " GESTOR DE HORARIOS LEIC" << endl;
        cout << "-------------------------" << endl;
        cout << "\tMenu Principal\n";
        cout << "(1) Ocupação de turmas/UC/ano" << endl;
        cout << "(2) Horário de aluno" << endl;
        cout << "(3) Estudantes em determinada turma/UC/ano" << endl;
        cout << "(0) Sair";
        cout << endl;
        cout << "->";

        vector<int> inputs = {0, 1, 2, 3};
        int input;
        cin >> input;

        switch (input) {
            case 1:
                cout << "(1) Turma" << endl;
                cout << "(2) UC" << endl;
                cout << "(3) Ano" << endl;
                int input2;
                cin >> input2;
                if (input2==1){

                }
                if (input2==2){

                }
                if(input2 == 3)
                    loop = false;
                break;
            case 2:
                cout << "coco" << endl;
                break;
            case 3:
                cout << "pp" << endl;
                break;
            case 0:
                loop = false;
                break;
            default:
                break;
        }
    }
}