    // Вариант 13

    #include <iostream>
    #include <cmath>
    #define PI M_PI

    using namespace std;

    double f(double x){
        double exp_x, log_part, part_1, part_2, part_3, sqrt_part;
        exp_x = exp(x);

        // Берем логарифм от exp(x) + 27
        log_part = log(exp_x + 27);
        
        // Часть под квадратным корнем
        part_1 = pow(x, 3);
        part_2 = pow(x, 7.0/5.0) + 14;
        part_3 = sin(5 * x) + 5.1 * PI;

        if (part_3 == 0) {
            cerr << "[ERROR] Ошибка: деление на ноль" << endl;
            return NAN;
        }
        
        sqrt_part = sqrt(part_1 + part_2 / part_3);

        return log_part - sqrt_part;
    }

    int main() {
        double x;
        cout << "Введите x: ";
        cin >> x;

        double result = f(x);
        if (!isnan(result)) {
            cout << "Результат: " << result << endl;
        }
        else{cout << "[ERROR] Ответа нет!";}

        return 0;
    }