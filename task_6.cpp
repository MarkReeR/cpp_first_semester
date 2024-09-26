// Вариант 13
// Вывести на экран таблицу значений функции y = e^(2x) в диапазоне от −a до a с шагом h. Значения a и h вводятся с клавиатуры.
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    float x, y, a, h;
    cout << "a = "; cin >> a;
    cout << "h = "; cin >> h;

    // printf("a = "); scanf("%f", &a);
    // printf("h = "); scanf("%f", &h);

    for (x=-a; x<=a; x+=h){
        y = exp(2*x);
        // cout << "\t x = " << x << "\t y = " << y << endl; 
        printf("x = %5.2f \t y = %5.4f \n", x, y);
    }
    return 0;
}