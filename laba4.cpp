#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int num;
    cout << "Введите число: ";
    cin >> num;
    if (num == 0) {
        cout << "это нулевое число";
    }
    else if (num < 0) {
        cout << "это минусовое число";
    }
    else if (num > 0) {
        cout << "это плюсовое число";
    }
    return 0;
}
