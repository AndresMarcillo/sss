#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
main()
{
	int i,opcion,j=0,k;
	for(k=0;k<=0;k)
	{
		struct agenda
		{
			char nombre [50];
			char apellido [50];
			char direccion [100];
			char telefono [9];
		};
		struct agenda Pi;
		cout<<"Programa que nos permita crear una agenda telefonica";
		cout<<"\n\nIngrese 1 si se desea agregar un nuevo contacto";
		cout<<"\n\nIngrese 2 si se desea ver la agenda completa";
		cout<<"\n\nIngrese 3 si se desea salir del programa";
		cout<<"\n\nIngrese la opcion que se desea realizar: ";
		cin>>opcion;
		switch (opcion)
		{
			case 1:	
				cout<<"\nUsted ha ingresado la opcion 1, por favor ingrese un nuevo contacto";
				cout<<"\nIngrese el nombre: ";	
				cin>>Pi.nombre;
				cout<<"\nIngrese el apellido: ";
				cin>>Pi.apellido;	
				cout<<"\nIngrese la direccion: ";
				cin>>Pi.direccion;
				cout<<"\nIngrese el telefono: ";
				cin>>Pi.telefono;
				system("cls");
			break;
			case 2:
				cout<<"\nUsted ha ingresado la opcion 2, se desplegara la agenda";
				for(i=0;i<=10;i++)
				{
					
				}
				getch();
			break;
			case 3:
				cout<<"\nUsted ha ingresado la opcion 3, el programa se cerrara";
				k++;
				break;
			default:
				cout<<"\nLa opcion ingresada no es valida";
		}
	}	
//	cout<<"\nEl nombre es: "<<Pi.nombre;
}
