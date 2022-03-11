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

typedef struct
{SDL_Surface *minimap;
SDL_Surface *point;
SDL_Rect posminimap;
SDL_Rect pospoint;
}minimap;

void initBack(Background *b);
void afficherBack(Background b,SDL_Surface *ecran);
void animerBackground( Background * e);
int collisionPP( Personne p, SDL_Surface * Masque);
void scrolling (background * b, int direction, int pasAvancement);
void scrolling (SDL_Rect * b, int direction ,int pasAvancement);
#endif
