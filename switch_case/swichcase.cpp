//*-----------------------------------------------
//Nombre: Oscar Eduardo Fuentes Monroy
//Programa: Ejemplo Swich case - Do while
//Curso: Programacion I, B
//Fecha: 24/02/2022
//Facultad: Ingenieria en Sistemas de Informacion
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
  char operacion, respuesta;		// Variables tipo char (un caracter)
  int valor1,valor2;	// Dos variables enteras
  float resultado;		// Variable flotantes
  
   do
	{
	   
	  system("cls");
	  valor1=0;	// Variable iniciando en 0
	  valor2=0; // Variable iniciando en 0
	  cout << "\n \t Ingrese Valor 1: ";
	  cin >> valor1;
	  cout << "\n \t Ingrese Valor 2: ";
	  cin >> valor2;
	  
	  if (valor1 == 0 && valor2 == 2)
	   cout << "\n \tNo se permiten ambos valores en 0!!, Verifique!!";
	  else
	   {
		
	
		  cout << "\n \t Menú de Opciones SWICH -CASE ";
		  cout << "\n \t 1. Suma  (+) ";
		  cout << "\n \t 2. Resta (-) ";
		  cout << "\n \t 3. Multiplicacion (*) ";
		  cout << "\n \t 4. Division (/) (Cociente) ";
		  cout << "\n \t 5. Division (%) (Residuo) ";
		  cout << "\n \t 6. salir................ ";
		  cout << "\n \t Seleccione su Operacion: ";
		  cin >> operacion;
		
		  switch (operacion)
		  {
			   case '1':
			     resultado = valor1+valor2;
			     cout << "\n \t La suma es: " << resultado;
			   break;
			   case '2':
			     resultado = valor1-valor2;
			     cout << "\n \t La resta es: "<< resultado;
			   break;
			   case '3':
			     resultado = valor1*valor2;
			     cout << "\n \t La Multiplicacion es: "<< resultado;
			   break;
			   case '4':
			     resultado = valor1/valor2;
			     cout << "\n \t La Division es: "<< resultado;
			   break;
			   case '5':
			     resultado = valor1%valor2;
			     cout << "\n \t La Division es: "<< resultado;
			   break;
			   case '6':
			   	cout << " \n \t **  Hasta la vista Baby...!! ";
			   break;
			   default:
			    cout << "\n \t ** Operacion Invalida, Verifique...!! ";
		  	} // Fin del swich
	   	} // Fin del If
	 cout << "\n \t ** ¿Desea realizar otra operacion? ** \n \t ";
	 cin >> respuesta;
	} while (respuesta == 'S' || respuesta == 's'); // Do while
	cout<< "\n\n \t << Presione cualquier tecla para continuar >> \n\n"; // Mensaje para el usuario
	getch(); // Congela la pantalla hasta que presione una tecla
	return 0; //Sale del programa y se congela hasta que presione alguna tecla
} // Fin funcion principal