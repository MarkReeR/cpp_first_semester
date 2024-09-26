// Вариант 13
// Даны K наборов целых чисел по N элементов в каждом наборе. Определить, есть ли среди наборов данных знакочередующиеся последовательности.
#include <iostream>
#include <vector>

using namespace std;


int main(){
    int K, N, kgr, i, j, max, kon_max;
    bool is_negative = false;

    cout << "Введите количество наборов данных K: ";
    cin >> K;
    cout << "Введите количество элементов в каждом наборе N: ";
    cin >> N;


    // vector<vector<int>> set(K, vector<int>(N));

    if(K <= 0 || N <= 0){
        cerr << "Количество наборов и количество элементов должны быть положительными числами." << endl;
        return 1;
        }

    for (i = 0; i < K; i++){
        vector<int> set(N);
        cout << "Введите элемент " << i + 1 << ":\n";
        
        for(int j = 0; j < N; j++){
            cin >> set[j];
        }
        
        bool is_alternating = true;
        for (int j = 1; j < N; ++j) {
            if (set[j-1]*set[j]>=0) {
                is_alternating = false;
                break;
            }
        }
        if (is_alternating) {
                cout << "Набор " << i + 1 << " содержит знакочередующуюся последовательность." << endl;
            } else {
                cout << "Набор " << i + 1 << " не содержит знакочередующуюся последовательность." << endl;
            }
        }

    return 0;
}