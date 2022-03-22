#ifndef Image_H
#define Image_H
#include <SDL/SDL.h>
#include <SDL/SDL_background.h>

typedef struct
{
SDL_Surface *perso;
SDL_Rect posperso;
int direction;
}Personne;
typedef struct 
{
  SDL_Surface *imgBack;
  SDL_Rect posBack;
  SDL_Rect scroll;
}Background;


void initBack(Background *b);
void afficherBack(Background b,SDL_Surface *ecran);
void animerBackground( Background * e);
int collisionPP( Personne p, SDL_Surface * Masque);
void scrolling (Background * b, int direction, int pasAvancement);
#endif
