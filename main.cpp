#include "complex.h"
#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    cout << "1-сумма"<<endl<<"2-вычесть"<<endl<<"3-умножение"<<endl<<"4-Деление"<<endl<<"5-модуль"<<endl;
    cout << endl;
    int q;
    cin >> q;
    Complex a{ 5,3 };
    Complex b{ -7,9 };
    switch (q)
    {
        case 1: {

            sum(a, b);
            break; }
        case 2: {
            vich(a, b);
            break; }
        case 3: {

            ym(a, b);
            break; }
        case 4: {

            del(a, b);
            break; }
        case 5: {

            modul(a);
            break; }
    }



    return 0;
}

