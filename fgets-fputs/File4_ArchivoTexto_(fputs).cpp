//*--------------------------------------------------------------
// Nombre    	: Oscar Eduardo Fuentes Monroy
// Carne		: 1290-21-1639
// Programa  	: Ejemplo fputs lee caracter por caracter y lo graba
// Curso     	: Programacion I - B -
// FEcha		: 03/03/2022
// Facultad  	: Ingenieria en Sistemas de Informacionn 
// Universidad Mariano Galvez de Guatemala
// *--------------------------------------------------------------

//librerias a usar
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream> 

using namespace std;

int main ( )
{
        FILE *prueba1;
        char caracter;
        prueba1 = fopen ("c:prueba1.txt", "w+");
        cout << "\n Introuce un texto al fichero: ";
        while((caracter = getchar()) != '\n')
        {
        printf("%c", fputc(caracter, prueba1));
        }
        fclose (prueba1);
        getch();
        return 0;
}
