#include <iostream>
#include <cmath>
using namespace std;
double Perimeter(double a, double b) {
    return 2 * (a + b);
}
double Area(double a, double b) {
    return a * b;
}
double Diagonal(double a, double b) {
    return sqrt(a * a + b * b);
}
int main() {
    double a, b;
    cout << "Введите длину и ширину прямоугольника: ";
    cin >> a >> b;
    cout << "Периметр: " << Perimeter(a, b) << endl;
    cout << "Площадь: " << Area(a, b) << endl;
    cout << "Диагональ: " << Diagonal(a, b) << endl;
    return 0;
}
