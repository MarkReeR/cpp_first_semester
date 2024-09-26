// Вариант 13
// Известна диагональ ромба d. Вычислить площадь S и периметр P .
#include <iostream> 
#include <cmath>

using namespace std;
int main(){
    double d;
    cout << "d = ";
    cin >> d;
    if (d <= 0) {
        cout << "[ERROR] Ошибка: Диагональ должна быть положительным числом." << endl;
        return 1;
    }

    float S = (pow(d, 2)/2);
    float a = d / sqrt(2);
    float P = 4 * a;

    cout << "Площадь ромба: " << S << endl;
    cout << "Периметр ромба: " << P << endl;
 

    return 0;
}