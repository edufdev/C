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
    char caracteres[100];
    prueba = fopen("c:prueba.txt","r");
    if (prueba == NULL)
    {
    cout << "No existen datos en el archivo(No existe o esta vacio)!!!" << endl << endl;
    getch();
    exit(1);
    }
    
    cout << "Este ejemplo lee el archivo prueba y lo muestra de 100 en 100 en caracteres" << endl << endl;
    while (feof(prueba) == 0)
    {
    fgets(caracteres,100,prueba);
    cout << "Caracteres ->  " << caracteres << " <Presione Enter>" << endl ;
    getch();
    }
    system("PAUSE");
    fclose(prueba);
    getch();
    return 0;
}
