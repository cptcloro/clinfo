#include <iostream>

using namespace std;

int somma(int n){
  if(n == 1){
    return 1;
  }
  return n + somma(n-1);
}

int main(){
  int n;
  int sum;
  cout << "Inserire numero: ";
  cin >> n;
  sum = somma(n);
  cout << "La somma e': " << sum << endl;
  return 0;
}
