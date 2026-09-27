#include <iostream> //Валеев Данияр 26ВИ2 4вар
using namespace std;

int main() {
    int ms[3] = {1, 2, 3};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += ms[i];
    }
    cout << "Сумма элементов массива: " << sum << endl;
    return 0;
}