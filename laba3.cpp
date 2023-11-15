#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    
    int arr[5]{ 1,4,6,23,67 };
    int a = 1;
    for (int i = 0; i < 5; i++)  
    {
        a *= arr[i];
    }
    cout << a << endl;
    return 0;
}
