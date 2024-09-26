// Вариант 13
// Дано трехзначное число. Вывести число, полученное при перестановке цифр десятков и единиц исходного числа.
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int number, hundreds, tens, units;
    cout << "Введите число: ";
    cin >> number;

    if (number < 100 || number > 999){
        cout << "[ERROR] Ошибка: Введите именно трехзначное число." << endl;
        return 1;
    }

    hundreds =  number / 100;
    tens = (number / 10) % 10 * 10;
    units = number % 10 * 100;

    number = hundreds + tens + units;
    
    cout << "Результат: " << number << endl;
    return 0;
}