//*-----------------------------------------------
//Nombre: Oscar Eduardo Fuentes Monroy
//Programa: Solicita dos notas 1 y 2, calculo el promedio
//Curso: Programacion I, B
//Fecha: 15/02/2022
//Facultad:Ingenieria en Sistemas de Informacion
//Universidad: Mariano Galvez de Guatemala
//*------------------------------------------------
#include<iostream>
#include<conio.h>

using namespace std;

main()
{
  int nota1,nota2;
  float promedio;

  cout << "\n Ingrese Nota 1: ";
  cin >> nota1;

  cout << "\n Ingrese Nota 2: ";
  cin >> nota2;

  promedio=(nota1+nota2) / 2;

		  if (promedio>=60)
  			{
		   	 cout<< "\nCurso Aprobado con " << promedio << " pts.";
            }
          else
     		{
    		cout<< "\nCurso Reprobado " << promedio << " pts.";
     		}
     		cout << "\n << Precione cualquier tecla para continuar >>\n";
    getch();
    return 0;
}

