#include <iostream>

using namespace std;

int divisione(int x, int y){
  if( y > x ){
    return x;
  }
  return divisione(x-y, y);
}

int main(){
  int x,y;

  cout << "Inserisci dividendo: ";
  cin >> x;
  cout << "Inserisci divisore: ";
  cin >> y;
  
  cout << "Il resto della divisione e': " << divisione(x, y) << endl;
  return 0;
}
