#include <iostream>
#include <vector>
using namespace std;

// Function to find and print a peak element
void peak(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        // Check bounds and compare with neighbors
        if ((i == 0 || vec[i] > vec[i - 1]) && 
            (i == vec.size() - 1 || vec[i] > vec[i + 1])) {
            cout << "Peak element found: " << vec[i] << endl;
            return; // Stop after finding the first peak
        }
    }
    cout << "No peak element found!" << endl; // If no peak exists
}

int main() {
    vector<int> vec;
    int n;

    // Input the size of the vector
    cout << "Enter the number of elements: ";
    cin >> n;

    // Resize the vector to accommodate 'n' elements
    vec.resize(n);

    // Input the vector elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Call the function to find a peak
    peak(vec);

    return 0;
}
