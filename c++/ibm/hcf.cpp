#include<iostream>
using namespace std ;
int main ()
{
    int n1,n2 ;
    cin>> n1 ;
    cin>>n2;
while(n1!=n2)
{
    if(n1>n2)
    {
        n1-=n2;
    }
    else 
    {
        n2-=n1;
    }
}
cout<<n2;
return 0;
  
}