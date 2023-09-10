#include<iostream>
#include<string>
#include<time.h>
using namespace std ;
void checknum(int g,int sc_num) ;
bool done = true ;
int main()
{
	int sc_num,g,n=0 ;
	srand(time(NULL)) ;
	sc_num = 1+rand()%11 ;
	cout << "###Welcome to guessing number game###\n" ;
	cout << "Secret number has been chosen\n" ;
	while (done) 
	{
	cout << "Guess number (1 to 10) : " ;
	cin  >> g ;
	n++ ;
	checknum(g,sc_num) ;
	}
	cout << "Congratulations!\n" ;
	cout << "The secret number is " << sc_num << endl ;
	cout << "You made " << n << " guesses" << endl ;
	return 0 ;
}

void checknum(int g,int sc_num)
{
	if(g == sc_num)
	{
		done = false ;
	}
	else if(g < sc_num)
	{
		cout << "The secret number is lower.\n" ; 
	}
	else if(g > sc_num)
	{
		cout << "The secret number is higher.\n" ; 
	}
}