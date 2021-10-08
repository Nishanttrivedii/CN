#include<iostream>
#include<stdlib.h>
using namespace std;

void decToBin( int num )
{
	int binAr[8] = {0};
	int i = 7 ;
    while (index >= 0 ) 
	{
        binArr[i] = num % 2 ;
        num = num / 2 ;
        i--;
    }
    
	while( i++ < 7 )
	{
		cout<<binArr[i]<<" ";
	}
}

int main()
{
	int dec ;
	cout<<"Enter a decimal number: ";
	cin>>dec ;
	
	decToBin(dec);
}