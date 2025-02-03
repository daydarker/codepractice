#include<iostream>
 using namespace std;

 int main()
 {
    string ch;
    cin>> ch;
    int ss[255]={0};
    for (int  i = 0; i < ch.size(); i+=2)
    {
      ss[ch[i]]+=(ch[i+1]-'0');
    }
    string ans;
    for(int i=0;i<255;i++)
    {
        if(ss[i]!=0)
        {
          ans+=i;
          ans+= (ss[i]+'0');
        }
    }
    for(int k=0;k<ans.size();k++)

{
    cout<<ans[k];
}
     return 0;
 }