#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> newrequest(vector<string> vec, int k) {
    vector<string> v;
    
    if (vec.size() == k) 
        return vec;  // Return the original vector if size is already k
     
    for (int i = 0; i < vec.size(); i++) {
        bool isDuplicate = false;
        // Check if the current element already exists in vector 'v'
        for (int j = 0; j < v.size(); j++) {
            if (vec[i] == v[j]) {
                isDuplicate = true;
                break;
            }
        }
        // If it's not a duplicate, add it to the result vector 'v'
        if (!isDuplicate) {
            v.push_back(vec[i]);
        }
        // Stop once we've collected 'k' unique elements
        if (v.size() == k) 
            break;
    }
    
    return v;
}

int main() {
    vector<string> vec = {"item1", "item2", "item3", "item1", "item3"};
    int k = 3;
    vector<string> v = newrequest(vec, k);
    
    // Print the result in reverse order
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    
    return 0;
}