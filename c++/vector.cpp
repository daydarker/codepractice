#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> m;
   
    for (int i = 0; i < 4; i++) {
        int element;
        cin >> element;
        m.push_back(element);
    }
    
    vector<int> result;
    int n = m.size();
    
    int target;
    cin >> target; // Assuming you want to input the target sum after the array
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (m[i] + m[j] == target) {
                result.push_back(i);
                result.push_back(j);
            }
        }
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}