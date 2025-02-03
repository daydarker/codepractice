#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int min(string s){
    int moves=0;
   int arr[255]={0};
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]]++;
    }
    for(auto it:arr)
    {
        if(it>1)
        {
            moves+=(it/2);
        }
    }
    return moves;
}

int main ()
{
    string s="baabacaa";
    int move=min(s);
    cout<<move;
    return 0;
}