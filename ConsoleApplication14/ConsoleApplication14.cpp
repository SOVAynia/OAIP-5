#include <iostream> // используемые библиотеки
#include <cmath>    // Использовал библиотеку cmath

using namespace std;

int main() {
    double x, y;  // Числа с плавующей запятой x и y
    cout << "Введите x:";  // Ввод числа
    cin >> x;              // Чтение числа
    cout << "Введите y:";  // ввод числа
    cin >> y;              // Чтение числа 

    bool inside_circle = (x * x + y * y) < 100;    // Подсчёт по формуле (Логическое действие)
    bool on_circle = (x * x + y * y) == 100;       // Подсчёт по формуле (Логическое действие)
                                                
    bool above_graph = (y > abs(x));               // Подсчёт по формуле (Логическое действие)
    bool on_graph = (y == abs(x));                 // Подсчёт по формуле (Логическое действие)

    if (inside_circle && above_graph)              // Проверка условий
    {
        cout << "Ответ: да";                       // Вывод ответа
    }
    else if ((on_circle && y >= abs(x)) || (on_graph && (x * x + y * y) <= 100)) // Вывод ответа 
    {
        cout << "Ответ; на границе";                // Вывод ответа
    }
    else
    {
        cout << "Ответ: нет";                       //  Ввывод ответа
    }

    return 0;
}
