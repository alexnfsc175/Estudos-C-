//
// Created by Alex on 07/02/2017.
//

#ifndef CAPITULO_3_GRADEBOOK_H
#define CAPITULO_3_GRADEBOOK_H

#include <string>
using std::string;


class GradeBook {
public:
    GradeBook( string );
    void setCourseName( string );
    string getCourseName();
    void displayMessage();
    void determineClassAverage();

private:
    string courseName;

};


#endif //CAPITULO_3_GRADEBOOK_H
