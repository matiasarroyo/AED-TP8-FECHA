/*TP8 - Fecha
*Grupo 7
*Dados 3 valores (año, mes , dia) determinar si correspode a una fecha
*2015/06/07
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <string>

using namespace std;
bool bisiesto(unsigned);
bool DiaCorrecto(unsigned,unsigned,int);

int main ()
{
	int a;
	unsigned m,d;
	cout<<"Ingrese una fecha y el programa le dira si existe\n";
	cout<<"Ingrese el a\xA4o\n";
	cin>>a;
	cout<<"Ingrese el mes\n";
	cin>>m;
	cout<<"Ingrese el dia\n";
	cin>>d;
	
	if(DiaCorrecto(d,m,a)) 
	{
		cout << "Es correcto";
	}
	else {
		cout << "Es incorrecto";
	}
}

bool DiaCorrecto( unsigned d, unsigned m, int a )
{
	if ( d<29 and m<=12 )
		return true;
	else	
			switch (m)
			{
				case 2:
					if ( d==29 )
						return bisiesto(a);
					else
						return false;
				case 4:
					if (d<=30)
						return true;
					else
						return false;
				case 6:
					if (d<=30)
						return true;
					else
						return false;
				case 11:
					if (d<=30)
						return true;
					else
						return false;	
				default:
					if (d<=31 and m<=12)
						return true;
					else
						return false;		
			}	
}

bool bisiesto (unsigned a)
{
	if ( ( a%4==0 and a%100!=0 ) or a%400==0 )
		return true;
	else
		return false;
}
