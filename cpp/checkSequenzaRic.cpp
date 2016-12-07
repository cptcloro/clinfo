#include <iostream>

using namespace std;

int check(int n, int x){
  if( n < 10 ){
    if( n == x ){
      return 1;
    }else{
      return 0;
    }
  }
  if( n%10 == x ){
    return 1;
  }else{
    return check(n/10, x);
  }
}

int main(){
  int n,x;
  
  cout << "Inserire numero in cui cercare: ";
  cin >> n;
  cout << "Inserire numero da cercare: ";
  cin >> x;
  
  cout << "Ritorno della funzione: " << check(n, x) << endl;
  return 0;
}
