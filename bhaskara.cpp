#include <iostream>
using namespace std;

int main() {
  //ax² + bx + c = 0
  int a, b, c;
  int delta, raiz;
  int x1, x2;
  cin >> a >> b >> c;

  delta = b*b - 4*a*c;
  
  for(int i = 0; i <= delta; i++) {
    if(i*i==delta){
      raiz = i;
    }
  }
  cout << raiz << endl;
  x1 = ((-b) + raiz)/(2*a);
  x2 = ((-b) - raiz)/(2*a);
  
  cout << x1 << " " << x2;

  return 0;
}
