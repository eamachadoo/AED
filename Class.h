//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#ifndef UNTITLED_CLASS_H
#define UNTITLED_CLASS_H
#include <string>
using namespace std;


class Class {
private:
    int week_day;
    int starting_time;
    int room;
    int duration;
    string uni_c;

public:
    Class(string uc, int day, int StartTime, int r, int dur);
};

#endif //UNTITLED_CLASS_H
