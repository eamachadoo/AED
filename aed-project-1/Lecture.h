//
// Created by Eduardo Afonso Soares Ferreira Machado on 01/11/2022.
//

#ifndef AED_LECTURE_H
#define AED_LECTURE_H
#include <string>
#include <vector>

using namespace std;

class Lecture {

private:
    string uc_code_;
    string weekday_;
    float start_hour_;
    float duration_;
    string type_;

public:
    Lecture();
    Lecture(string uc_code, string weekday, float start_hour, float duration, string type);
    string getUcCode();
    string getWeekday();
    float getStartHour();
    float getDuration();
    string getType();
    Lecture(Lecture const &l); //copy constructor

};


#endif //AED_LECTURE_H
