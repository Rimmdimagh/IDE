#include"fonction.h>"


 

int main(int argc, char *argv[])
{

perso p;
Uint32 dt,t_prev;

int continuer = 1;
p->perso=IMG_Load("");


SDL_SetColorKey(p.sprite, SDL_SRCCOLORKEY, SDL_MapRGB(p.sprite->format, 0, 0, 255));
initPerso(&p);

while (continuer){
 
t_prev=SDL_GetTicks();
	
SDL_WaitEvent(&event);
switch(event.type){

case SDL_KEYDOWN:
switch (event.key.keysym.sym){

case SDLK_SPACE:
p.acceleration+=0.005;
break;
case SDLK_DOWN:
p.acceleration-=0.01;
break;
case SDLK_RIGHT:

break;


break;



}
}










dt=SDL_GetTicks()-t_prev;
}
SDL_FreeSurface(p.sprite);
    SDL_Quit();
    
    return EXIT_SUCCESS;







}
