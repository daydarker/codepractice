#include <iostream>
#include <vector>
#include <string>
#include <utility>  // For std::pair
#include <algorithm> // For std::swap
using namespace std;

int main() {
    int rows = 5;
    vector<pair<string, int>> arr(rows);  // Vector of pairs, each with a string and an int

    // Input for each row
    for (int i = 0; i < rows; i++) {
        cout << "Enter a name and a number for row " << i + 1 << ": ";
        cin >> arr[i].first >> arr[i].second;  // Take string for column 1 and int for column 2
    }

    // Output each row (using nested loop)
    cout << "\nYou entered:\n";
    for (int i = 0; i < rows; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;  // Print each "column" in the pair
    }
  for(int i=0;i<rows;i++){
      int min=arr[i].second;
      if(min>arr[i+1].second)
      {
          min=arr[i+1].second;
          swap(arr[i],arr[i+1]);
      }
      else 
      continue;
  }
       cout<<"new";
    for (int i = 0; i < rows; i++) {
        
        cout << arr[i].first << " " << arr[i].second << endl;  // Print each "column" in the pair
    }
    return 0;
}
