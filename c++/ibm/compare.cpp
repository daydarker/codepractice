#include<iostream>
#include<string>
using namespace std;

string ad(string s , string t, int m)
{
    int count=0; 
    int min;
    for(int i=0;i<s.length();i++ )
    {
        if(s[i]!=t[i])
        {
           min=i;
            break;
        }
    }
    for(int k=s.length()-1;k>=min;k--)
    {
         s.erase(k,1);
         count++;
         
    }
    for(int k=min;k<t.length();k++)
    {
        s[k]=t[k];
        count++;
    }
   if(count==m)return "yes";
   else return "no";
}

int main()
{
    string s;
    cin>> s;
    string t;
    cin>> t;
    int k;
    cin>>k;
     string ans= ad(s,t,k);
     cout << ans;
     return 0;
}
//show the output for hackerhappy hackerrank 9  output yes