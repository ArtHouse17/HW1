//
// Created by Артём Демидов on 27.04.2022.
//

#ifndef HW1_COMPLEX_H
#define HW1_COMPLEX_H
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
struct  Complex
{
    double im = 0;
    double re = 0;

};
void sum(Complex n1, Complex n2);
void vich(Complex n1, Complex n2);
void modul(Complex n1);
void ym(Complex n1, Complex n2);
void del(Complex n1, Complex n2);

#endif //HW1_COMPLEX_H
