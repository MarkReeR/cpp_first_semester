// Вариант 13
// адано целое положительное число n. Определить значение выражения: P = n∑ i=2 i2 − i.
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, P;
    cout << "n = "; cin >> n;
    
    P = 0;

    for (size_t i = 2; i <= n; i++){
        P += i * i - i;
        cout << "i = "<< i << "\tP = " << P << endl;
    }
    return 0;
}