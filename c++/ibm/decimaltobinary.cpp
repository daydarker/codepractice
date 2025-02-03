#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cin>> n ;
    int rem=0;
    int count=1;
    while(n>=1)
    {
        rem=(n%2)*count+rem;
        n=n/2;
        count*=10;
    }
    cout<<rem;
}