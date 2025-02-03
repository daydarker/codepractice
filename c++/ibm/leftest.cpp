#include<iostream>
#include<vector>

using namespace std;

vector<int> vd(vector<int> vec){
    vector<int> v;
    for(int i=0;i<vec.size();i++)
    {
        int sum=0;
        if(i==0){
            v.push_back(sum);
        }
       
        else
        {
           for(int j=i-1;j>=0;j--){
               int ele= vec[i]-vec[j];
               sum+=ele;
               
           }
           v.push_back(sum);
        }
    }
    return v;
}

int main ()
{
    vector<int> vec={2,4,3};
    vector<int> v;
    v=vd(vec);
    for(int i=0;i<3;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}