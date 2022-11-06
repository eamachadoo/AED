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
    /**
     * Default Constructor.
     */
    Lecture();
    /**
     * Overloaded Constructor.
     * @param 1. uc_code
     * @param 2. weekday
     * @param 3. start_hour
     * @param 4. duration
     * @param 5. type
     */
    Lecture(string uc_code, string weekday, float start_hour, float duration, string type);
    /**
     * Getter function: retrieves/reads the private string uc_code_,
     * making it available to the program outside of the class.
     * @brief Complexidade : O(1)
     * @return String uc_code_
     */
    string getUcCode();
    /**
     * Getter function: retrieves/reads the private string weekday_,
     * making it available to the program outside of the class.
     * @brief Complexidade : O(1)
     * @return String weekday_
     */
    string getWeekday();
    /**
     * Getter function: retrieves/reads the private float value of start_hour_,
     * making it available to the program outside of the class.
     * @brief Complexidade : O(1)
     * @return Float start_hour
     */
    float getStartHour();
    /**
     * Getter function: retrieves/reads the private float value of duration_,
     * making it available to the program outside of the class.
     * @brief Complexidade : O(1)
     * @return Float duration_
     */
    float getDuration();
    /**
     * Getter function: retrieves/reads the private string type_,
     * making it available to the program outside of the class.
     * @brief Complexidade : O(1)
     * @return String type_
     */
    string getType();
    /**
     * Copy constructor: function that initializes an object using
     * another object of the same class.
     * @brief Complexidade : O(1)
     * @param 1. l
     */
    Lecture(Lecture const &l); //copy constructor

};


#endif //AED_LECTURE_H
