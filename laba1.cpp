#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    long num;
    cout << "Введите число: ";
    cin >> num;
    long i = 0;
    while (num > 0) {
        num = num / 10;
        i++;
    }
    cout << "в этом числе столько цифр: " << i;
    return 0;
}
