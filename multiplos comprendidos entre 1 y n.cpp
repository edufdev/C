//*--------------------------------------------------------------
// Nombre    : Gustavo Adolfo Vides 
// Programa  : Mostrar multiplos comprendidos entre 1 y n
// Curso     : Programación I - B -
// Facultad  : Ingenieria en Sistemas de Información 
// Universidad Mariano Galvez de Guatemala
// *--------------------------------------------------------------

// Se incluyen liberas a utilizar dentro del programa	
#include <iostream>   // Función que permite el uso de ingreso  de datos por medio de cin y salida por medio de cout.
// #include <stdio.h>    // Standar input / output (Libreria estandard de entrada y salida) utilizada en archivos.
#include <math.h>     // Contiene los prototipos de las funciones y otras definiciones para el uso y manipulación de funciones matemáticas.
// #include <string.h>   // Libreria utilizada para el manejo de funciones con cadenas de caracteres.
#include <conio.h>    // Libreria que nos permite el uso de funciones de entrada y salida en pantalla y teclado.

using namespace std;

// Función Principal en C++
main ()
{ // Inicio del programa

    // Declarar variables 
	int numero; // int = entera 
    //clrscr; // Limpiar la pantalla 
    cout << "Ingrese un numero de veces para iniciar: \n"; // Muestro mensaje solicitando cierta información 
    cin >> numero; //Ingreso el valor por medio del teclado
    
    /// (Valor Inicial, Valor Final, Incrementos)
    for (int i=1;i<=numero;i++) // Ciclo for (inicia i con valor 1, se repite hasta que i sea menor que 0, incrementos de 1 en uno)
    {
        cout<< i;
    	if (i%3==0) cout<<" Es multiplo de 3" <<endl; // 3/3 = 1, cuanto sobra 0, 4/3=1, pero sobra 1
    	else cout<<" No es multiplo de 3"<<endl;
    	
    }
    
	float calculo = sin(numero);
    cout<<" El seno del numero es :" <<endl<< calculo;
    
	cout << "\n << Presione cualquier tecla para continuar >> \n"; 
	getch(); //Congela la pantalla hasta que se presione un tecla
    return 0; // Salir o finalizar el progrma
} // Fin del programa