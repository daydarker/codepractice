#include<iostream>
#include<string>

using namespace std ;

int main()
{
    string ch;
    cin>> ch ;

    int c=0,a=0;
    for(int i=0;i<ch.length();i++)
    {
        if(ch[i]=='1')
        {
            c++;
        }
        else 
        a++;
    }
    int cmp= min(a,c);
    cout<<cmp;
    return 0;
}