#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct schedaFilm{
  string titolo;
  string regista;
  float incasso;
};

int main(){
  const int DIM = 10;
  schedaFilm films[DIM];
  
//popolamento vettore
  for(int i=0;i<DIM;i++){
    cout << "Inserire titolo del film: ";
    cin >> films[i].titolo;
    cout << "Inserire regista del film: ";
    cin >> films[i].regista;
    do{
      cout << "Inserire incasso del film: ";
      cin >> films[i].incasso;
    }while(films[i].incasso < 0);
  }
  
//stampa titolo primo in classifica
  cout << "-- Il miglior film! --"<<endl;
  cout << "Titolo: " << films[0].titolo << endl;
  cout << "Regista: " << films[0].regista << endl;
  cout << "Incasso: " << films[0].incasso << endl;

//ricerca dato titolo nella classifica
  cout << "-- Posizione Inferno --" << endl;
  for(int i=0;i<10;i++){
    if(films[i].titolo == "inferno"){
      cout << "Inferno è in posizione: " << i << endl;
    }
  }

//stampa titolo con incasso superiore a un certo dato
  cout << "-- Incassi --" << endl;
  for(int i=0;i<10;i++){
    if(films[i].incasso > 10000000){
      cout << "Titolo: " << films[i].titolo << endl;
    }
  }
  return 0;
}
