#include<iostream>
#include<string>
using namespace std ;


int main()
{     int a, b ;

   cout<<"Enter a number : ";
       cin>> a ;

	cout<<"Enter b number : ";
       cin>> b ;

	   cout<< " Largest : " << ((a > b ) ? a : b ) << endl;
	   cout<< " Smallest : " << ((a < b ) ? a : b ) << endl;

	return 0 ;


}