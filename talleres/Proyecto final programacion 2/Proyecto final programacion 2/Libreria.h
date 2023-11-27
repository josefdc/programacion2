#include <stdio.h>
#include <windows.h>
#include <conio.h> 
/**
 * @brief Posiciona en el terminal o en la pantalla el cursor
 * @param x (Posicion en x).
 * @param y (Posicion en y).
 * @return La subrutina no retorna ningun valor 
 */
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
//----------------------------------------------------------------------------------------------------------------------------------------
/**
 * @brief Adopta un color de la tabla rgb para pintar un texto que se vaya a imprimir.
 * @param c (Valor del 0-256 para adoptar en la tabla rgb).
 * @return La subrutina no retorna ningun valor .
 */
void color (int c)
{
     SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),c);
}
//----------------------------------------------------------------------------------------------------------------------------------------
/**
 * @brief Imprime la lista de colores de la tabla rgb del 0 al 256.
 * @return La subrutina no retorna ningun valor.
 */
void ListaColores()
{
     for(int i=0;i<64;i++)
     {
          gotoxy(1,i);
          color(i);
          printf("Color %d",i);
          gotoxy(20,i);
          color(i+64);
          printf("Color %d",i+64);
          gotoxy(40,i);
          color(i+128);
          printf("Color %d",i+128);
          gotoxy(60,i);
          color(i+192);
          printf("Color %d",i+192);
     }
     color(7);
}
//--------------------------------------------------------------------------------------------------------
/**
 * @brief Imprime una lista de 3 columnas con todos los caracteres del codigo ascci.
 * @return La subrutina no retorna ningun valor.
 */
void ListaAscii()
{
     for(int i=0;i<86;i++)
     {
          gotoxy(1,i);
          printf("%d : %c",i,char(i));
          gotoxy(20,i);
          printf("%d : %c",i+86,char(i+86));
          gotoxy(40,i);
          printf("%d : %c\n",i+171,char(i+171));
     }
}
//----------------------------------------------------------------------------------------
/**
 * @brief Dibuja una linea horizontal en una posicion dada.
 * @param x (Posicion inicial en el eje x).
 * @param y (posicion inicial en el eje y).
 * @param tope (Cantidad de caracteres ascii que van a imprimirse).
 * @return No retorna ningun valor.
 */
void LineaH(int x,int y,int tope)
{
     for(int i=0;i<=tope;i++)
     {
          gotoxy(x+i,y);
          printf("%c",char(196));
     }
}
//-------------------------------------------------------------------------------------------
/**
 * @brief Dibuja una linea vertical en una posicion dada
 * @param x (Posicion inicial en el eje x).
 * @param y (Posicion inicial en el eje y).
 * @param tope (Cantidad de caracteres ascii que van a imprimirse).
 */
void LineaV(int x,int y,int tope)
{
     for(int i=0;i<=tope;i++)
     {
          gotoxy(x,y+i);
          printf("%c",char(179));
     }
}
//--------------------------------------------------------------------------------------------------------
/**
 * @brief Dibuja una linea horizontal con borde en una posicion dada.
 * @param x (Posicion inicial en el eje x).
 * @param y (Posicion inicial en el eje y).
 * @param tope (Cantidad de caracteres ascii que van a imprimirse).
 */
void LineaHconborde(int x,int y,int tope)
{
     for(int i=0;i<=tope;i++)
     {
          gotoxy(x+i,y);
          printf("%c",char(205));
     }
}
//--------------------------------------------------------------------------------------------------------
/**
 * @brief Dibuja una linea horizontal con borde en una posicion dada.
 * @param x (Posicion inicial en el eje x).
 * @param y (Posicion inicial en el eje y).
 * @param tope (Cantidad de caracteres ascii que van a imprimirse).
 * @return No retorna ningun valor.
 */
void LineaVconborde(int x,int y,int tope)
{
     for(int i=0;i<=tope;i++)
     {
          gotoxy(x,y+i);
          printf("%c",char(186));
     }
}
//----------------------------------------------------------------------------------------------------
/**
 * @brief Crea un rectangulo desde la posicion x1,y1 de las dimensiones TamHori x TamVerti.
 * @param x1 (Posicion inicial en el eje x). 
 * @param y1 (Posicion inicial en el eje y).
 * @param TamHori (Tamaño horizontal del rectangulo).
 * @param TamVerti (Tamaño Vertical del rectangulo).
 * @return No retorna ningun valor. 
 */
void Rectangulo(int x1,int y1,int TamHori,int TamVerti)
{
     int x2=x1+TamHori,y2=y1+TamVerti;;
     LineaV(x1,y1,TamVerti);
     LineaV(x2,y1,TamVerti);
     LineaH(x1,y1,TamHori);
     LineaH(x1,y2,TamHori);  
     gotoxy(x1,y1);
     printf("%c",char(218));
     gotoxy(x2,y1);
     printf("%c",char(191));
     gotoxy(x1,y2);
     printf("%c",char(192));
     gotoxy(x2,y2);
     printf("%c",char(217));
}
//---------------------------------------------------------------------------------------------------------
/**
 * @brief Realiza un cuadro con o sin borde desde la posicion x1,y1 hasta la posicion x2,y2.
 * @param x1 (Posicion inicial en el eje x).
 * @param y1 (Posicion inicial en el eje y).
 * @param x2 (Posicion final en el eje x).
 * @param y2 (Posicion final en el eje y).
 * @param borde (Si el valor de borde es 1 se realizara un cuadro sin borde si es otro valor hara un cuadro con borde).
 * @return No retorna ningun valor.
 */
void Cuadro(int x1,int y1,int x2,int y2,int borde)
{
     if(borde == 1)
     {
          LineaV(x1,y1,y2-y1);
          LineaV(x2,y1,y2-y1);
          LineaH(x1,y1,x2-x1);
          LineaH(x1,y2,x2-x1);  
          gotoxy(x1,y1);
          printf("%c",char(218));
          gotoxy(x2,y1);
          printf("%c",char(191));
          gotoxy(x1,y2);
          printf("%c",char(192));
          gotoxy(x2,y2);
          printf("%c\n",char(217));
     }
     else
     {
          LineaVconborde(x1,y1,y2-y1);
          LineaVconborde(x2,y1,y2-y1);
          LineaHconborde(x1,y1,x2-x1);
          LineaHconborde(x1,y2,x2-x1);  
          gotoxy(x1,y1);
          printf("%c",char(201));
          gotoxy(x2,y1);
          printf("%c",char(187));
          gotoxy(x1,y2);
          printf("%c",char(200));
          gotoxy(x2,y2);
          printf("%c\n",char(188));
     }
}
//---------------------------------------------------------------------------------------------------------
/**
 * @brief CuadroR realiza un cuadro con relleno desde una posicion x,y.
 * @param x1 Posicion inicial en x.
 * @param y1 Posicion inicial en y.
 * @param x2 Posicion final en x.
 * @param y2 Posicion final en y.
 * @param colorRelleno Color rgb entre 0 y 256 para hacer el relleno del cuadro.
 * @return No retorna ningun valor.
 */
void CuadroR (int x1,int y1, int x2,int y2,int colorRelleno)
{
     color(colorRelleno);
     while (y1<y2)
     {
          for(int i=0;i<x2-x1;i++)
          {
               gotoxy(x1+i,y1);
               printf("%c\n",char(219));
          }
          y1++;
     }
     color(7);
}
//--------------------------------------------------------------------------------------------------------------------------------------
/**
 * @brief Ventana1 crea dos cuadrados con relleno en una posicion x,y que dan alusion a una ventana.
 * @param x1 Posicion inicial en el eje x. 
 * @param y1 Posicion inical en el eje y.
 * @param x2 Posicion final en el eje x.
 * @param y2 Posicion final en el eje y.
 * @param colorfondo Color principal del cuadro delantero.
 * @param colorSombra Color de la sombra osea el cuadrado trasero.
 * @return  No retorna ningun valor
 */
void Ventana1 (int x1,int y1,int x2,int y2,int colorfondo,int colorSombra)
{
     CuadroR(x1,y1,x2,y2,colorSombra);
     //En el siguiente llamado se le resta 1 unidad a cada parametro de posicion para dar la ilusion de sombra.
     CuadroR(x1-1,y1-1,x2-1,y2-1,colorfondo);
     printf("\n");
}
//--------------------------------------------------------------------------------------------------------------------------------------
/**
 * @brief Ventana2 Crea una ventana con sombra y con titulo desde una posicion x1,y1 hasta una posicion x2,y2 con unos colores determinados.
 * @param x1 Valor inicial en el eje x.
 * @param y1 Valor inicial en el eje y.
 * @param x2 Valor final en el eje x.
 * @param y2 Valor final en el eje y
 * @param colortitulo Color de la barra del titulo.
 * @param colorfondo Color de la ventana principal.
 * @param colorSombra Color de la sombra de la ventana principal.
 */
void Ventana2 (int x1,int y1,int x2,int y2,int colortitulo,int colorfondo,int colorSombra)
{
     Ventana1(x1,y1,x2,y2,colorfondo,colorSombra);
     CuadroR(x1-1,y1-1,x2-1,y1,colortitulo);
     gotoxy(0,y2+2);
} 
//---------------------------------------------------------------------------------------------------------------------------------------
/**
 * @brief La funcion Tabla muestra por pantalla una tabla de n filas por m columnas desde una posicion x1,y1.
 * @param x1 Posicion inicial en x.
 * @param y1 Posicion inicial en y.
 * @param filas Numero de filas que va a tener la tabla.
 * @param columnas Numero de columnas que va atener la tabla.
 * @param borde Si borde=1 se realizara una tabla con linea simple de lo contrario se realizara una tabla con linea doble
 * @return La funcion no retorna ningun valor.
 */
void  Tabla (int x1,int y1,int filas,int columnas,int borde)
{
     for(int i=1;i<=filas+1;i++)
     {
          for(int j=1;j<=columnas+1;j++)
          {
               Cuadro(x1,y1,x1*i,y1*j,borde);
          }
     }
}