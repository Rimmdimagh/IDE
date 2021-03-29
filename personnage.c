#include "fonction.h"
void initPerso(Personne *p){

int nbr;

p->perso=IMG_Load("");
p->posperso.x = 150;
p->posperso.y = 350;



p->vie.nbr = 3 ;
p->posvie.x=
p->posvie.y=

p->score=0;
p->scorePos.x=
p->scorepos.y=

p->vitesse=5; //valeur max
p->acceleration=0;

}

void afficherPerso(Personne p,SDL_Surface *screen){

SDL_BlitSurface(p->sprite, NULL, screen,p->posperso);
SDL_BlitSurface(p->vie,NULL,screen,p->posvie);
SDL_BlitSurface(p->score,NULL,screen,p->scorepos);
}

void deplacerPerso(Personne *p,Uint32 dt,int direction){
acceleration a0;
vitesse v0;
SDL_Event event;

dx=1/2*a0*dt*dt+v0*dt;

SDL_EnableKeyRepeat(20,20);

SDL_WaitEvent(&event);

switch(event.type){

case SDL_KEYDOWN:
switch(event.key.keysym.sym){

case SDLK_LEFT:

p->posperso.x-=5;
break;
case SDLK_RIGHT:
p->posperso.x+=5;
break;


		


}
break;

}

}




void free_perso(perso *p){

SDL_FreeSurface(p->sprite);

}


















