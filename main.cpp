#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

    // Метод таблицы while
    int TableWhile() {
        std::cout << std::fixed << std::setprecision(3);
        std::cout << "\nЦикл while:\n";
        std::cout << "n   | p (мм рт. ст.)\n";
        std::cout << "--------------------------\n";
        return 0;
    }

    // Метод таблицы do-while
    int TableDo() {
        std::cout << "\nЦикл do-while:\n";
        std::cout << "n   | p (мм рт. ст.)\n";
        std::cout << "--------------------------\n";
        return 0;
    }

int main() {

    setlocale(LC_ALL,"rus");

    double V = 15.0; // Объем камеры, л
    double VZero = 0.6; // Рабочий объем поршня, л
    double pZero = 760.0; // Начальное давление, мм рт. ст.

    const int n_values[] = {10, 20, 30, 40, 50, 100, 150, 200, 250}; // Массив со значениями
    const int size = std::size(n_values); // Размер массива

    double factor = V / (V + VZero); // Коэффициент

    int index = 0; // Индекс

    TableWhile();

    while (index < size) {
        int n = n_values[index];
        double p = pZero * pow(factor, n); // Вычисление давления
        std::cout << std::setw(3) << n << " | " << std::setw(3) << p << "\n";
        ++index;
    }

    index = 0; // Обнуление индекса

    TableDo();

    do {
        int n = n_values[index];
        double p = pZero * pow(factor, n); // Вычисление давления
        std::cout << std::setw(3) << n << " | " << std::setw(3) << p << "\n";
        ++index;
    } while (index < size);

    return 0;
}
