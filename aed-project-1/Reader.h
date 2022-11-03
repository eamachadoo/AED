//
// Created by Eduardo Afonso Soares Ferreira Machado on 29/10/2022.
//

#ifndef AED_READER_H
#define AED_READER_H

#include "Node.h"
#include "Student.h"
#include "Timetable.h"
#include "Class.h"
#include "UC.h"
#include <vector>
#include <algorithm>
#include <set>
#include <map>

extern vector<Class> horario_estudante(string up);

extern vector<UC*> UCs;

extern vector<Class*> classes_leic;

extern vector<Timetable*> horarios_leic;

extern set<pair<int,string>> student_pairs;

extern vector<Timetable*> student_timetables;

extern Node node, *root;

extern void buildTimetable();
extern void buildClasses();
extern vector


#endif //AED_READER_H
