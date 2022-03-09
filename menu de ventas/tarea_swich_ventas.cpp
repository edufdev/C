//*--------------------------------------------------------------
// Nombre    	: Oscar Eduardo Fuentes Monroy
// Carne		: 1290-21-1639
// Programa  	: Menú Principal de Ventas
// Curso     	: Programacion I - B -
// FEcha		: 28/02/2022
// Facultad  	: Ingenieria en Sistemas de Informacionn 
// Universidad Mariano Galvez de Guatemala
// *--------------------------------------------------------------

//librerias a usar
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <unistd.h>

//Agregamos la instruccion para reservar espacio.
using namespace std;

//Funcion principal
int main()
{
 	//Declarar variables
 	int operacion; //Variable de tipo entera
 	char realizar; //Variable tipo char, sirve para el Do-While
	 	 
	do
	{ 	
	 	//MENU PRINCIPAL DE OPCIONES 
		cout <<"\n Menu de opciones";
		cout <<"\n 1. Crear Pedido";
		cout <<"\n 2. Imprimir Pedido";
		cout <<"\n 3. Crar Factura";
		cout <<"\n 4. Imprimir Factura";
		cout <<"\n 5. Realizar Cobro";
		cout <<"\n 6. Revisar Estado del Cliente";
		cout <<"\n 7. Salir del Menu";							
		cout <<"\n \n Seleccione su opcion:\n";
		cin >> operacion; //Variable que lee el Switch
				
		switch (operacion)	//Inicio del Switch						 
		{										 	
			case 1:
				system("cls");
				cout <<"\n Crear Pedido";
				cout <<"\n \n Procesando Pedido...\n";
				sleep(2);
			    cout <<"\n \n Generando Pedido...\n";
				sleep(2);
			    cout <<"\n \n Proceso Finalizado...\n";
				sleep(2);
				system ("cls");
					
			break;
				
			case 2:
				system("cls");
				cout <<"\n Imprimir Pedido";
				cout <<"\n \n Procesando Pedido...\n";
				sleep(2);
			    cout <<"\n \n Generando Pedido...\n";
				sleep(2);
			    cout <<"\n \n Proceso Finalizado...\n";
				sleep(2);
				system ("cls");
			break;
				
			case 3:
				system("cls");
				cout <<"\n Crear Factura";
				cout <<"\n \n Procesando Factura...\n";
				sleep(2);
			    cout <<"\n \n Generando Factura...\n";
				sleep(2);
			    cout <<"\n \n Proceso Finalizado...\n";
				sleep(2);
				system ("cls");
			break;
				
			case 4:
				system("cls");
				cout <<"\n Imprimir Factura";
				cout <<"\n \n Procesando Factura...\n";
				sleep(2);
			    cout <<"\n \n Generando Factura...\n";
				sleep(2);
			    cout <<"\n \n Proceso Finalizado...\n";
				sleep(2);
				system ("cls");
			break;
				
			case 5:
				system("cls");
				cout <<"\n Realizar Cobro";
				cout <<"\n \n Procesando Cobro...\n";
				sleep(2);
			    cout <<"\n \n Generando Cobro...\n";
				sleep(2);
			    cout <<"\n \n Proceso Finalizado...\n";
				sleep(2);
				system ("cls");
			break;
				
			case 6:
				system("cls");
				cout <<"\n Revisar Estado del Cliente";
				cout <<"\n \n Procesando Estado del Cliente...\n";
				sleep(2);
			    cout <<"\n \n Generando Estado del Cliente...\n";
				sleep(2);
			    cout <<"\n \n Proceso Finalizado...\n";
				sleep(2);
				system ("cls");
			break;
			
			case 7:
				cout << "\n \t Hasta la vista Baby...!!";
			   break;
			   default:
				cout << "\n \t ** Operacion Invalida, Verifique...!! ";
		}	//Fin del Case Switch
			
		cout << "\n \t ¿Desea realizar otra operacion?  \n \t" ;
		cin >> realizar;
		system ("cls");
	}while (realizar == 'S' || realizar == 's'); //fin de Do While
	
	cout << "\n \t << Presione cualquier tecla para salir >>";	
	getch;
 	return 0;
 } //Fin del programa
 
 
 

