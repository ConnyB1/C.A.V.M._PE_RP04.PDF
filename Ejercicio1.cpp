//Cesar Alejandro Velazquez Mercado
//372329
//Me dice la calificacion de un estudiante basandose en un promedio
//10/09/2023
#include <stdio.h>
#include <stdlib.h>
#define N 10
int msges();
void menu();
void repetir (void);
void extraodinario (void);
void suficiente (void);
void regular(void);
void bien(void);
void muybien(void);
void excelente(void);
void error(void);
int main()
{
   menu();

	return 0;
}
int msges()
{ int op, op1, op2;
  system ("CLS");
  printf ("   Dependiendo de tu promedio te dire como vas \n");
  printf ("   Para salir escribe \"-1\" 3 veces \n");
  printf("Si prom < 30 Repetir  \n");
  printf("Si prom >=30 y prom <60 extraordinario  \n");
  printf("Si prom >=60 y prom <70 suficiente  \n");
  printf("Si prom >=70 y prom <80 Regular  \n");
  printf("Si prom >=80 y prom <90 bien  \n");
  printf("Si prom >=90 y prom <98 muy bien   \n");
  printf("Si prom >=98 y prom <=100 excelente    \n");
  printf("Si prom >100 Error en promedio    \n");
  printf("Dame 3 calificaciones: ");
  scanf ("%d",&op);
  printf("\nDame otra calificacion: ");
  scanf ("%d",&op1);
  printf("\nDame otra calificacion: ");
  scanf ("%d",&op2);
  op=(op+op1+op2)/3;
  return op;
}
void menu()
{
  int op;
  do{
      op=msges();
      if (op<80)
      {
        if (op<60)
        {
            if (op<30)
            {
                repetir();
            }
            else
            {
                extraodinario();
            }
        }
        else
        {
            if (op<70)
            {
                suficiente();
            }
            else
            {
                regular();
            }
            
        }
      }
      else
      {
        if (op<98)
        {
            if (op<90)
            {
                bien();
            }
            else
            {
                muybien();
            }
        }
        else
        {
            if (op<=100)
            {
                excelente();
            }
            else
            {
                error();
            }   
        } 
      }
    }while (op != -1);
}
void repetir (void)
{
    system ("CLS");
    printf("   repetir\n"); 
    system ("PAUSE");
}
void extraodinario (void)
{
    system ("CLS");
    printf("   extraordinario\n"); 
    system ("PAUSE");
}
void suficiente (void)
{
    system ("CLS");
    printf("   suficiente\n"); 
    system ("PAUSE");
}
void regular (void)
{
    system ("CLS");
    printf("   regular\n"); 
    system ("PAUSE");
}
void bien (void)
{
    system ("CLS");
    printf("   bien\n"); 
    system ("PAUSE");
}
void muybien (void)
{
    system ("CLS");
    printf("   muy bien\n"); 
    system ("PAUSE");
}
void excelente (void)
{
    system ("CLS");
    printf("   excelente\n"); 
    system ("PAUSE");
}
void error (void)
{
    system ("CLS");
    printf("   error\n"); 
    system ("PAUSE");
}