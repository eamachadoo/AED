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
     * This function builds the vector horarios_leic by using a for-loop,
     * it builds the 47 classes distributed through the 3 years, and it
     * separates them by year.
     * @brief Complexidade: O(1)
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
     * @brief Complexidade: O(1)
     * @return Vector horarios_leic
     */
    vector<Timetable*> getClassLectures();
    /**
     * This function, the same as the buildClasses, builds the timetable
     * for each class - it uses a while loop [O(n)] and two for-loops
     * [O(n^2)].
     * @brief Complexidade: O(n^3)
     */
    void buildTimetable();
    /**
     * This function loops through the classes_per_uc.csv file and
     * reads the classes per UC, while also creating empty lists
     * for its classes.
     * @brief Complexidade: O(n^2)
     */
    void readClassesPerUC();
    /**
     * This function loops through the students_classes.csv file and
     * reads the students name, while creating empty student lists.
     * @brief Complexidade: O(n^2)
     */
    void readStudents();
    /**
     * The Menu function serves the purpose of a menu. It allows the user to
     * input the credentials he desires to use between the available options to
     * choose from.
     * @brief Complexidade: O(n)
     */
    void Menu();

};


#endif //AED_PROJECT_1_GESTORHORARIOS_H
