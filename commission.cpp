#include<iostream>
using namespace std ;
int cal_com(int , int, int ) ; 
int volume  ;
int main()
{   int salary , sale , com ;
	
	cout<< " enter salary: " ;
	  cin>> salary ;
	   cout<< " enter sale : " ;
	  cin>> sale ;
	  cout<< " enter commission  : " ;
	  cin>> com ;
	   cal_com(salary, sale,  com ) ;
	 
		return 0 ;
}

int cal_com(int salary,int sale, int com )
{   
	cout<<" salary : "<< salary << endl ;
	cout<<" sale : "<< sale << endl ;
	cout<<" commission  : "<< com << endl ;
	 int volume = ((sale * com ) / 100 ) + salary ;
	 cout<< "conclusion: " << volume << endl ;
    return volume;
}
