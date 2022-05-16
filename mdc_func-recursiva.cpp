#include <iostream>

using namespace std;

int mdc(int x, int y);

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << mdc(num1, num2);
    return 0;
}
//Essa função implementa o algoritmo do mdc de forma recursiva:
int mdc(int x, int y) { 
    if(y > 0) {
        mdc(y, x%y); 
    } else {
        return x;
    }
}
