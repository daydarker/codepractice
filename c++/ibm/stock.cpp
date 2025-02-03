#include<iostream>
#include<vector>

using namespace std;

int stock(vector<int> vec,int d){
     int ans=0;
     int n =vec.size();
     for(int i=0;i<n;i++)
     {
         for(int j=1;j<n;j++)
         {
             for(int k=2;k<n;k++)
             {
                 if((vec[i]+vec[j]+vec[k])%d==0 && i<j && i<k && j<k)
                 ans++;
             }
         }
     }
     return ans ;
}

int main ()
{
  vector<int> vec={3,3,4,7,8};
  int d=5;
  int ans=stock(vec,d);
  cout<< ans;
  return 0;
}