#include <stdio.h>
#include "../include/struct.h"

void dessin(Brique **tabBriques, int nbLignes, int nbColonnes,
            SDL_Surface *ecran, SDL_Window *window);
void dessiner_raquette(Raquette raquette, SDL_Surface *ecran,SDL_Window *window);
void dessin_balle(Balle balle,SDL_Surface *surface,SDL_Window *window);
void moveBalle(Balle *balle);
void detect_collision(Brique **tabBriques,Balle *balle,Raquette raquette,
                      Raquette *raq2,int nbLignes, int nbColonnes, int *score, int *nbVies);