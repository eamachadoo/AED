//
// Created by Eduardo Afonso Soares Ferreira Machado on 18/10/2022.
//

#include "Class.h"
#include <string>


Class::Class(std::string uc,int day,int StartTime,int r,int dur) {
    week_day = day;
    starting_time = StartTime;
    room = r;
    uni_c = uc;
    duration = dur;


}