#include <stdio.h>  
 #include <windows.h>  
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

void color (int c)
{
     SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),c);
}

void ListaColores()
{
     for(int i=0;i<64;i++)
     {
          gotoxy(1,i);
          color(i);
          printf("Color %d",i);
          gotoxy(20,i);
          color(i+64);
          printf("Color %d",i);
          gotoxy(40,i);
          color(i+128);
          printf("Color %d",i);
          gotoxy(60,i);
          color(i+192);
          printf("Color %d",i);
     }
     color(7);
}

void ListaAscii()
{
     for(int i=0;i<64;i++)
     {
          gotoxy(1,i);
          printf("%d : %c",i,char(i));
          gotoxy(20,i);
          printf("%d : %c",i+64,char(i+64));
          gotoxy(40,i);
          printf("%d : %c",i+128,char(i+128));
          gotoxy(60,i);
          printf("%d : %c",i+192,char(i+192));
     }
}

void LineaH(int x,int y,int tope)
{
     for(int i=0;i<=tope;i++)
     {
          gotoxy(x+i,y);
          printf("%c",char(196));
     }
}

void LineaV(int x,int y,int tope)
{
     for(int i=0;i<=tope;i++)
     {
          gotoxy(x,y+i);
          printf("%c",char(179));
     }
}