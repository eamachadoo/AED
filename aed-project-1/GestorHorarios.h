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
    /**
     * Default Constructor.
     */
    GestorHorarios();
    /**
     * Setter Function: sets the value of the vector UCs by using the
     * function emplace_back, which inserts a new element at the end
     * of the vector, right after its current last element.
     * @brief Complexidade: O(1)
     */
    void setUCs();
    /**
     * This function builds the vector horarios_leic by using a for-loop
     * and the emplace_back, which inserts
     * @brief Complexidade: O(...)
     */
    void buildClasses();
    /**
     * Getter Function: retrieves the private vector and makes it available outside
     * the class.
     * @brief Comlpexidade: O(1)
     * @return Vector classes_leic
     */
    vector<Class*> getClasses();
    /**
     * Getter Function: retrieves the private vector horarios_leic making it
     * available outside the class.
     * @return Vector horarios_leic
     */
    vector<Timetable*> getClassLectures();
    /**
     *
     */
    void buildTimetable();
    /**
     *
     */
    void readClassesPerUC();
    /**
     *
     */
    void readStudents();
    /**
     *
     */
    void Menu();

};


#endif //AED_PROJECT_1_GESTORHORARIOS_H
