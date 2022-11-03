//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#include "Reader.h"
#include "Class.h"
#include "Student.h"
#include "Timetable.h"
#include "UC.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void buildClasses(){
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
};

void buildTimetable() {
    fstream in("classes.csv");
    if(!in) {cout << "Could not open file." << endl;}
    in.ignore(100, '\n');
    string line, word;
    vector<string> column;
    while(in.peek() != EOF){
        column.clear();
        getline(line,line);
        stringstream s(line);
        while(getline(s,word,',')){
            column.push_back(word);
        }
        for (auto uc : UCs){
            if(column[1] == uc -> getCode()){
                for (auto c: uc->getUcClasses()){
                    if (column[0] == c->getClassCode()){
                        c->getTimetable() -> addLecture(Lecture(column[1], column[2], stof(column[3]),stof(column[4]), column[5]));
                    }
                }
            }
        }

    }
}


