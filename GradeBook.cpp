//
// Created by Alex on 07/02/2017.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "GradeBook.h"

GradeBook::GradeBook( string name ) {
    setCourseName( name );
}

void GradeBook::setCourseName( string name ) {

    if(name.length() <= 25)
        courseName = name;

    if(name.length() > 25){
        courseName = name.substr(0, 25);

        cout << "Name \"" << name << "\" excedeu o tamanho de 25 caracteres.\n"
             << "O nome do curso foi limitado para 25 caracteres.\n" << endl;
    }
}

string GradeBook::getCourseName() {
    return courseName;
}

void GradeBook::displayMessage() {
    cout << "Seja bem vindo a GradeBook para\n" << getCourseName() << "!" <<endl;
}

void GradeBook::determineClassAverage() {
    int total;
    int materias;
    int nota;
    int media;

    total = 0;
    materias = 1;

    while (materias <= 10){
        cout << "Digite a nota: ";
        cin >> nota;
        total += nota;
        materias ++;
    }

    media = total / 10;

    cout << "O total das notas e: " << total << endl;
    cout << "A Media das notas e: " << media << endl;
}