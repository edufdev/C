//*--------------------------------------------------------------
// Nombre    	: Oscar Eduardo Fuentes Monroy
// Carne		: 1290-21-1639
// Programa  	: Ejemplo fputs lee cadena de caracteres y lo graba	
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
 
int main ()
{
        FILE *prueba1;
        char cadena[] = "Mostrando el uso de fputs en un fichero.\n";
        char caracteres[100];
		system("pause");
		
        prueba1 = fopen ( "c:prueba1.txt", "r+" );
        fputs( cadena, prueba1 );
        
        cout << "Muestra cadena -->" << cadena << endl;
        system("pause");
        fclose(prueba1);
        cout <<"Cierra prueba1" << endl;
        system("pause");
        
        prueba1= fopen("c:prueba1.txt", "r+");
        while (feof(prueba1)==0)
        {
        	fgets(caracteres,100,prueba1);
        	cout << "Caracteres ->" << caracteres << "<Presione Enter"<< endl;
        	getch();
		}
        system("pause");
        return 0;
}
 
