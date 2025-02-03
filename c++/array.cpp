#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a = {0,1,1,0,0,2,2,1,1};
    int n =a.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
  return 0;
}