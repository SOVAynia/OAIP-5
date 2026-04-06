#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Введите x:";
    cin >> x;
    cout << "Введите y:";
    cin >> y;

    bool inside_circle = (x * x + y * y) < 100;
    bool on_circle = (x * x + y * y) == 100;

    bool above_graph = (y > abs(x));
    bool on_graph = (y == abs(x));

    if (inside_circle && above_graph) {
        cout << "Ответ: да";
    }
    else if ((on_circle && y >= abs(x)) || (on_graph && (x * x + y * y) <= 100)) {
        cout << "Ответ; на границе";
    }
    else {
        cout << "Ответ: нет";
    }

    return 0;
}