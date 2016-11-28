#include <iostream>
#include <string>

using namespace std;

struct info{
  string nome;
  int nMaglia;
  int nGol;
  int minGioco;
};

int main(){
  const int tGiocoMax = 90;
  const int nGiocatori = 1;
  info giocatore[nGiocatori];

// inserimento dei dati nel vettore di strutture
  for(int i=0;i<nGiocatori;i++){
    cout<<"inserire nome giocarore: ";
    cin >> giocatore[i].nome;
    do{
      cout<<"inserire numero maglia: ";
      cin >> giocatore[i].nMaglia;
    }while(giocatore[i].nMaglia > 100 || giocatore[i].nMaglia < 1);
    do{
      cout<<"inserire numero Gol: ";
      cin >> giocatore[i].nGol;
    }while(giocatore[i].nGol < 0);
    do{ 
      cout<<"inserire tempo gioco: ";
      cin >> giocatore[i].minGioco;
    }while(giocatore[i].minGioco < 0 || giocatore[i].minGioco > tGiocoMax);
    cout << endl << endl;
  }

//ricerca del nome inserito dall'utente all'interno dell'array
//di strutture.
  string name; 
  bool trovato = false;
  cout << "Inserire nome da ricercare: ";
  cin >> name;
  for(int i=0;i<nGiocatori;i++){
   if(giocatore[i].nome == name){
      trovato = true;
      cout << name << " indossa la maglia num. " << giocatore[i].nMaglia << endl;
    }
  }
  if( !trovato ){
    cout << "nome non trovato!" << endl;
  }

//conteggio di tutti i gol segnati nella partita    
  int sumGol = 0;
  for(int i=0;i<nGiocatori;i++){
    sumGol += giocatore[i].nGol;
  }
  cout << "Gol totali: " << sumGol << endl;

//ricerca massimo gol giocatore e massimo tempo in panchina
  int maxGol = 0;
  int maxTPanchina = 0;
  int maxGolPos = 0;
  int maxPanchinaPos = -1;
  for(int i=0;i<nGiocatori;i++){
    if(giocatore[i].nGol > maxGol){
      maxGol = giocatore[i].nGol;
      maxGolPos = i;
    }
    if((tGiocoMax - giocatore[i].minGioco) > maxTPanchina){
      maxTPanchina = tGiocoMax - giocatore[i].minGioco;
      maxPanchinaPos = i;
    }
  }
  if(maxGolPos == -1){
    cout << "errore" << endl;
  }else{
    cout << "Giocatore con più gol: " << giocatore[maxGolPos].nome << endl;
  }
  if(maxPanchinaPos == -1){
    cout << "errore" << endl;
  }else{
    cout << "Giocatore con più tempo in panchina: " 
	<< giocatore[maxPanchinaPos].nome << endl;
  }
  return 0;
}





