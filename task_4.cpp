// Вариант 13

#include <iostream>

using namespace std;

double y(double a){
    if(a<0) return 3.5;
    return (-0.25*a+3.5);
}

int main(){
    double a;
    cout << "x = ";
    cin >> a;

    double result_y = y(a);
    cout << "y = " << result_y << endl;


    return 0;
}