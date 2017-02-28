#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main() {

    /*GradeBook gradeBook1("CS101 Introdução a programação em c++");
    GradeBook gradeBook2("CS102 C++ Estrutura de dados");


    gradeBook1.displayMessage();
    cout << "gradeBook1 e o curso: " << gradeBook1.getCourseName()
         << "\ngradeBook2 e o curso: " << gradeBook2.getCourseName() << endl;

    gradeBook1.setCourseName("CS101 Programação em c++");

    cout << "gradeBook1 e o curso: " << gradeBook1.getCourseName()
         << "\ngradeBook2 e o curso: " << gradeBook2.getCourseName() << endl; */
    GradeBook gradeBook("CS101 Programação em c++");
    gradeBook.displayMessage();
    gradeBook.determineClassAverage();
    return 0;
}