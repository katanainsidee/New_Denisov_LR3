#include <iostream> 
#include <string> 
using namespace std;
/**
    @file               New_Denisov_Step_2.cpp
    @brief              Файл реализации задания лаб. работы номер 1
    @copyright          ВоГУ
    @author             Денисов М.С.
    @date               26-12-2023
    @version            1.0.0

*/


/// Функция умножения цифр числа X до опред. числа N
/** Умножает 1 на каждую цифру числа
    \param res Результат
    \param x_str Число (типа данных String)
    \i Счетчик итераций
*/
int product(int x, int n) {
    int res = 1;                        
    string x_str = to_string(x);        
    for (int i = 0; i < n; ++i) {       
        res *= x_str[i] - '0';         
    }
    return res;
}

/// Функция ввода числа N
/** Ввод числа N
    \param n Число N
*/
int enter_number_n() {
    std::cout << "Введите N: ";
    int n;
    std::cin >> n;
    return n;
}

/// Функция ввода числа X
/** Ввод числа X
    \param x Число X
*/
int enter_number_x() {
    std::cout << "Введите X: ";
    int x;
    std::cin >> x;
    return x;
}

/// Функция подсчета цифр в числе X
/** Подсчет цифр в числе X, путем вычисления остатка от деления на 10, прибавление результата к переменной zxc, деления на 10
    \param zxc Переменная для хранения суммы
    \param x Число X
    \param new_num Строковая запись числа X
*/
int sum_digits(int x) {
    std::string new_num = std::to_string(x);
    int zxc = 0;
    while (x != 0) {
        zxc += x % 10;
        x /= 10;
    }
    return zxc;
}

int main() {
    int en = 0, ix = 0, prod = 0, suma = 0;
    while (true) {
        std::cout << "1. ввести натуральное число X\n2. ввести цифру N (которая меньше числа разрядов числа X)\n3. определить произведение первых N цифр натурального числа X\n4. определить сумму цифр введенного числа X\n\nВведите номер желаемой функции или 0, если хотите закрыть приложение.";
        int key;
        std::cin >> key;
        if (key == 0) {
            break;
        }
        if (key == 1) {
            ix = enter_number_x();
        }
        else if (key == 2) {
            en = enter_number_n();
        }
        else if (key == 3) {
            prod = product(ix, en);
            std::cout << "Произведение: " << prod << std::endl;
        }
        else if (key == 4) {
            suma = sum_digits(ix);
            std::cout << "Сумма: " << suma << std::endl;
        }
    }
    return 0;
}