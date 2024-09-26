// Вариант 13
// Переделать. Задание???
#include <iostream>
#include <cmath>

using namespace std;

void f(double x, double y){
    if((pow(x-3,2)+pow(y-0,2)>9) || (pow((x-3),2)+pow((y-3),2)>9)){
        cout << "- точка графику не пренадлежит" << endl;
    }
    else{
        cout << "+ точка графику пренадлежит" << endl;
    }
}

int main(){
    double x, y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    f(x,y);

    return 0;
}