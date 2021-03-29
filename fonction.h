
#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED
#include <stdio.h>

#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

typedef struct 
{
SDL_Surface *sprite;
SDL_Rect posperso;
int vie,score;
SDL_Rect scorePos;
SDL_Rect posvie;

int direction;
double vitesse;
double acceleration;
}perso;


void initPerso(Personne *p);
void afficherPerso(Personne p,SDL_Surface *screen);
void deplacerPerso(Personne *p,Uint32 dt);
void free_perso(perso *p);


#endif 
