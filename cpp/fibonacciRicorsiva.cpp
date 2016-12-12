
#include <iostream>

using namespace std;

void fibonacci(int penultimo, int ultimo, int limite) {
  int nuovo;
  if( penultimo != 0 && ultimo != 0){
    nuovo = penultimo + ultimo;
  }else{
    nuovo = 1;
  }
  if(nuovo < limite) {
    cout << "- " << nuovo << endl;
    fibonacci(ultimo, nuovo, limite);
  }
}

int main(void)
{
  int limite;
  cout << "Inserire numero massimo: ";
  cin >> limite;
  cout << endl;
  fibonacci(0, 0, limite);
  return 0;
}
