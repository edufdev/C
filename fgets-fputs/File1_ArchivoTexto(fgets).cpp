//*--------------------------------------------------------------
// Nombre    	: Oscar Eduardo Fuentes Monroy
// Carne		: 1290-21-1639
// Programa  	: Ejemplo fgets bloque
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

int main()
{
        FILE *prueba;
        char caracter;
        prueba = fopen("c:prueba.txt","r");
        if (prueba == NULL)
        {
        cout << "\n Error de apertura del archivo (No existe o esta vacio)!!!" << endl << endl;
        }
        else
        {
        cout << "\n El contenido del archivo de prueba es "<< endl << endl;
        while (feof(prueba) == 0)
        {
            caracter = fgetc(prueba);
            cout << caracter;
        }
        }
        fclose(prueba);
        cout << "\n\n<<Presione cualquier tecla para continuar>>";
        getch();
        return 0;
}
