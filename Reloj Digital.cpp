//*-----------------------------------------------
//Nombre: Oscar Eduardo Fuentes Monroy
//Programa: Ejemplo ciclo for Descendente
//Curso: Programacion I, B
//Fecha: 17/02/2022
//Facultad:Ingenieria en Sistemas de Informacion
//Universidad: Mariano Galvez de Guatemala
//*------------------------------------------------

//seccion de librerias a incluir
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<unistd.h>

using namespace std;

//funcion principal
main()
{
	int horas=0, minutos=0, segundos=0;
	
	for (horas = 1; horas <= 23; horas++)
	{
		for(minutos = 1; minutos <=59; minutos++)
		{
			for(segundos = 1; segundos <=59; segundos++)
		   {
			cout << "\n Reloj Digital \n";
			cout << "\n Autor: Eduardo Fuentes \n";
			cout << "\n ============================================================================ \n";
			cout << "\tHoras" << " \t " <<" : " << "\t Minutos " << " : " << "\t Segundos " << endl;
			cout << "\n ============================================================================ \n";
			cout << " \t " << horas << " \t "<< " : " <<  " \t " << minutos << " \t " << " : " << " \t " << segundos;
			sleep(1);
			system("cls");
		   }
		}
	}
	cout<< "\n\n << Presione cualquier tecla para continuar >> \n\n"; // Mensaje para el usuario
	getch(); // Congela la pantalla hasta que presione una tecla
	return 0; //Sale del programa y se congela hasta que presione alguna tecla
}