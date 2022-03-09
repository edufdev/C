//*-----------------------------------------------
//Nombre: Oscar Eduardo Fuentes Monroy
//Programa: Ejemplo ciclo for Ascendente
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
	int Incremento; //Llevara el contro de los incrementos ascendentes de 1 a 20
	cout << "\n << Programa que muestra valores de 1 a 20 : Autor: Eduardo Fuentes >> \n";
	
	//valor inicial; valor final, Ascendente++)
	for (Incremento = 1; Incremento <=20; Incremento++)
	{
		cout<< "\n Valor No: "<< Incremento; // Muestra el valor de la variable en incremento
	}
	cout<< "\n\n << Presione cualquier tecla para continuar >> \n\n"; // Mensaje para el usuario
	getch(); // Congela la pantalla hasta que presione una tecla
	return 0; //Sale del programa y se congela hasta que presione alguna tecla
	}