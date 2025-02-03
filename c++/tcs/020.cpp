#include<iostream>
#include<vector>

using namespace std ;

int main()
{
    vector<int> vec={2,4,3};
    vector<int> v;
    int c=0;
    for(int i=0;i<3;i++)
    {
        for(int j=i-1;j>=0;j--){
            c+=vec[i]-vec[j];
           
        }
          v.push_back(c);
          c=0;
    }
    
    for(int i=0;i<3;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}