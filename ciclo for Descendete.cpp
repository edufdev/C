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

//agregamos la instruccion de reservar espacio estandar.
using namespace std;

//funcion principal
main()
{
	int Descendente; //Llevara el contro de la Descendente de 20 a 1
	cout << "\n << Programa que muestra valores de 20 a 1 : Autor: Eduardo Fuentes >> \n";
	
	//valor inicial; valor final, Descendente--)
	for (Descendente = 20; Descendente >=1; Descendente--)
	{
		cout<< "\n Valor No: "<< Descendente; // Muestra el valor de la variable en Descendente
	}
	cout<< "\n\n << Presione cualquier tecla para continuar >> \n\n"; // Mensaje para el usuario
	getch(); // Congela la pantalla hasta que presione una tecla
	return 0; //Sale del programa y se congela hasta que presione alguna tecla
	}