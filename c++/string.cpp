#include<iostream>
#include<string>
using namespace std ;
  
  void trim(string s){
    int n =s.length();
    int i=n-i;
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    s = s.substr(0, i + 1);
  }

int lengthoflastword(string s)
{
     trim(s);
     int n=s.length();
     int count=0;
     (for int i=n-1;i>=0;i++)
     {
        if(s[i]==' ')
        break;
        else count++;
     }
     return count++;

}

int main()
{
    string s;
    getline(cin,s);
    int k=lengthoflastword(s);
    cout<<k;
 return 0;
}