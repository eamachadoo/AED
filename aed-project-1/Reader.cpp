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

void Reader::buildClasses{

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
                        c->getSchedule() -> addLecture(Lecture(column[1], column[2], stof(column[3]),stof(column[4]), column[5]));
                    }
                }
            }
        }

    }
}



void Reader::read_info_uc() {

}
