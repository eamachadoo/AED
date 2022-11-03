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
    * Constructor.
    * @brief Complexidade : O(1)
    */
    Lecture();
    /**
    * @brief Complexidade : O(n)
    * @param 1. uc_code
    * @param 2. weekday
    * @param 3. start_hour
    * @param 4. duration
    * @param 5. type
    */
    Lecture(string uc_code, string weekday, float start_hour, float duration, string type);
    /**
     * @brief Complexidade : O(n)
     * @return
     */
    string getUcCode();
    /**
     * @brief Complexidade : O(n)
     * @return
     */
    string getWeekday();
    /**
    * @brief Complexidade : O(n)
    * @return
    */
    float getStartHour();
    /**
     * @brief Complexidade : O(n)
     * @return
     */
    float getDuration();
    /**
     * @brief Complexidade : O(n)
     * @return
     */
    string getType();
    /**
     * @brief Complexidade : O(n)
     * @param 1. l
     */
    Lecture(Lecture const &l); //copy constructor

};


#endif //AED_LECTURE_H
