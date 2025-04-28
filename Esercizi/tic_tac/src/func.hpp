#include <vector>
#ifndef FUNC_H
#define FUNC_H

extern char board[9];
extern char current_player;
extern int punteggio_x;
extern int punteggio_o;

void inizializza_tabellone();
bool mossa_valida(int mossa);
void esegui_mossa(int mossa);
bool controllo_vittoria();
void cambia_giocatore();
bool tabellone_pieno();
void mostra_tabellone();
void gioco();

#endif