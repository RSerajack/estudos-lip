#include <iostream>

using namespace std;

int contDig(int x, int cont);

int main()
{
    int num;
    cin >> num;

    cout << contDig(num, 0);
    return 0;
}

int contDig(int x, int cont) {
    if(x > 0) {
        cont++;
        contDig(x/10, cont);
    } else {
        return cont;
    }
}
