#include <iostream>
#include <vector>
#include "func.hpp"
using namespace std;

char board[9];
char current_player = 'X';
int punteggio_x = 0;
int punteggio_o = 0;

void inizializza_tabellone(){
  for(int i =0; i < 9; i++){
    board[i] = '1' + i;
  }
}
void mostra_tabellone(){
  cout << "\n";
  for (int i = 0; i < 9; i++){
    cout << " " << board[i] << " ";
    if(i % 3 != 2) cout << "|";
    if(i %3 == 2 && i != 8) cout << "\n-----------\n";
  }
  cout << "\n\n";
}
bool mossa_valida(int mossa){
  return mossa >= 1 && mossa <= 9 && board[mossa - 1] != 'X' && board[mossa - 1] != 'O';
}
void esegui_mossa(int mossa){
  board[mossa - 1] = current_player;
}
bool controllo_vittoria(){
  int combinazioni[8][3] = {
    {0, 1, 2},{3, 4, 5},{6, 7, 8},//righe
    {0, 3, 6},{1, 4, 7},{2, 5, 8},//colonne
    {0, 4, 8},{2, 4, 6}           //diagonali
  };
  for(auto& comb : combinazioni){
      char a = board[comb[0]];
      char b = board[comb[1]];
      char c = board[comb[2]];

      if(a == current_player && b == current_player && c == current_player){
        return true;
      }
    }
  return false;
}
bool tabellone_pieno(){
  for(int i = 0; i < 9; i++){
    if(board[i] != 'X' && board[i] != 'O'){
      cout << "cella trovata " << i+1 << "\n";
      return false;
    }
}
    return true;
}
void cambia_giocatore(){
  current_player = (current_player == 'X') ? 'O' : 'X';
}
void gioco(){
  punteggio_x = 0;
  punteggio_o = 0;

  while (punteggio_x < 2 && punteggio_o < 2){
    inizializza_tabellone();
    bool game_over = false;
    while(!game_over){
    mostra_tabellone();
    int scelta;
    cout << "Giocatore " << current_player << " scegli una cella (1-9): ";
    cin >> scelta;

    if(mossa_valida(scelta)){
      esegui_mossa(scelta);
      
      if(controllo_vittoria()){
        mostra_tabellone();
        cout << "Giocatore " << current_player << " ha vinto il round!\n";

        if(current_player == 'X')
        punteggio_x++;
        else punteggio_o++;

        game_over = true;
      }
      else if (tabellone_pieno()){
        mostra_tabellone();
        cout << "Pareggio in questo round!";
        game_over = true;
      }
      else{
        cambia_giocatore();
      }
    }
    else{
       cout << "Mossa non valida. Riprova!\n";
    }
    }
    cout << "\nPunteggio attuale: X = " << punteggio_x <<" | O = " << punteggio_o<< "\n";
  cout << "\n------------------------\n";
  }
  if(punteggio_x == 2){
    cout << "Giocatore X ha vinto la partita!\n";
  }else{
    cout << "Giocatore O ha vinto la partita!\n";
  }
}