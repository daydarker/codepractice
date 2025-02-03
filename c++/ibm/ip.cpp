#include<iostream>
#include<vector>

using namespace std;
vector <int> flip(vector<int>vec,int n){
    while(n>=1)
    {
        for(int i=0;i<vec.size();i++){
            if(vec[i]%2!=0){
                vec[i]+=3;
            }
            else 
            vec[i]-=3;
        }
        n--;
    }
    return vec;
}
int main(){
    vector<int> vec={3,4,9};
    int n ;
    cin >> n;
    vector<int> v;
    
    v= flip(vec,n);
    
    for(int i=0;i<3;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}