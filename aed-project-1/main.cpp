#include <iostream>
#include "GestorHorarios.h"

using namespace std;

int main() {
    GestorHorarios gh;
    gh.setUCs();
    gh.buildClasses();
    gh.buildTimetable();
    gh.readClassesPerUC();
    gh.readStudents();
    gh.Menu();
    return 0;
}