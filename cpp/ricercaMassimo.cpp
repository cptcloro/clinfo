#include <iostream>

using namespace std;

int main(){
  const int dim = 5;
  int v[dim];
  int massimo;
//popolamento dell'array con numeri inseriti dall'utente
  for(int i=0; i<dim; i++){
    cout << "Inserisci un numero: ";
    cin >> v[i];
  }
/* Il valore di indice 0 viene letto all'esterno del for per avere un valore
   coerente per il massimo. Questo perchè sicuramente il valore in posizione
   0 sarà il massimo in una sequenza di dimensione 1.
   Per vedere ciò prova a modificare dim con 1.
   In questo modo il programma troverà il massimo della sequenza qualsiasi 
   siano i valori in essa inseriti.
*/
  massimo = v[0];
  for(int i=1; i<dim; i++){
    if(v[i] > massimo){
      massimo = v[i];
    }
  }
  
  cout << "Il massimo e': " << massimo << endl;
  return 0;
}
