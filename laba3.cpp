#include <iostream> 
using namespace std;
int main() { const int n = 5; int massiv[n] = {5, 3, 1, 4, 2};
cout << "Исходный массив: ";
for (int i = 0; i < n; i++) {
    cout << massiv[i] << " ";
}
cout << endl << endl;

// 1
int summa = 0;
for (int i = 0; i < n; i++) {
    summa += massiv[i];
}
cout << "Сумма элементов массива: " << summa << endl;

cout << endl;

// 2
int proizvedenie = 1;
for (int i = 0; i < n; i++) {
    proizvedenie *= massiv[i];
}
cout << "Произведение элементов массива: " << proizvedenie << endl;

cout << endl;

// 3
int minimum = massiv[0], indeksMin = 0;
for (int i = 1; i < n; i++) {
    if (massiv[i] < minimum) {
        minimum = massiv[i];
        indeksMin = i;
    }
}
cout << "Индекс минимального элемента: " << indeksMin << ", минимум: " << minimum << endl;

cout << endl;

// 4
int maksimum = massiv[0], indeksMax = 0;
for (int i = 1; i < n; i++) {
    if (massiv[i] > maksimum) {
        maksimum = massiv[i];
        indeksMax = i;
    }
}
cout << "Наибольший элемент массива: " << maksimum << endl;
cout << "Индекс наибольшего элемента: " << indeksMax << endl;

cout << endl;

// 5
bool flag5 = false;
for (int i = 0; i < n; i++) {
    if (massiv[i] > 0) {
        flag5 = true;
        break;
    }
}
cout << "Есть положительный элемент: " << flag5 << endl;

cout << endl;

// 6
bool flag6 = true;
for (int i = 0; i < n; i++) {
    if (massiv[i] < 0) {
        flag6 = false;
    }
}
cout << "Все элементы неотрицательные: " << flag6 << endl;

return 0;
}
