//Cesar Alejandro Velazquez Mercado
//372329
//Es Chimchampu pero contra la maquina
//10/09/2023
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int msges();
void menu();
void perdiste (void);
void ganaste (void);
void empate (void);
int main()
{
   menu();

	return 0;
}
int msges()
{ int op;
  system ("CLS");
  printf ("   M  E   N   U \n");
  printf("1.- piedra \n");
  printf("2.- papel \n");
  printf("3.- tijera \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf ("%d",&op);
  return op;
}
void menu()
{
  int op, comp;
  do{
      op=msges();
      comp=rand()%3 +1;

      switch (op)
      {
        case 1:
              if(comp == 1)
              {
                empate();
              }
              if(comp == 2)
              {
                perdiste();
              }
              if(comp == 3)
              {
                ganaste();
              }
              break;
        case 2:
              if(comp == 1)
              {
                ganaste();
              }
              if(comp == 2)
              {
                empate();
              }
              if(comp == 3)
              {
                perdiste();
              }
              break;
        case 3:
              if(comp == 1)
              {
                perdiste();
              }
              if(comp == 2)
              {
                ganaste();
              }
              if(comp == 3)
              {
                empate();
              }
              break;
      }
    }while (op != 0);
}
void ganaste (void)
{
    system ("CLS");
    printf("   ganaste\n"); 
    system ("PAUSE");
}
void perdiste (void)
{

    system ("CLS");
    printf("   perdiste\n"); 
    system ("PAUSE");
}
void empate (void)
{
    system ("CLS");
    printf("   empate\n"); 
    system ("PAUSE");

}