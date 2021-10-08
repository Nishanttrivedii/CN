#include <iostream>
using namespace std;
int main() 
{

    int n,b[32];
    char a ;
    cin>>a;
    n = int(a) ;
   
    int i = 1;
    while (n > 0) {
 
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    int count1 = 0;
    for (int j = i - 1; j >= 0; j--)
   {
         ifb[j] == 1)
            count1++ ;
   }

   if( count1 % 2 != 0 )
        b[0] = 1 ;
    else
        b[0] = 0 ;

    for (int j = i-1 ; j >= 0; j--)
   {
         cout<< b[j] ;
   }
}