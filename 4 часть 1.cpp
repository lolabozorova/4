
#include <iostream>
#include <cmath>
using namespace std;


int func(int n, int k) {
    return n / pow(10, k);
}

int main()
{
    setlocale(0, "");
    int n, k;
    cout << "Введите число:";
    cin >> n;
    cout << endl << "Сколько разрядов показать?";
    cin >> k;
    cout << endl << func(n, k);
    return 0;
}
