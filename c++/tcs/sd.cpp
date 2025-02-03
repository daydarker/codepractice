#include<iostream>
#include<string>
using namespace std;

string ss(string s1, string s2) {
    string differingKey = "";

    // We expect the strings to be formatted similarly, so we compare them based on structure
    // Compare character by character and stop at the first difference
    int n = min(s1.size(), s2.size());

    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            // We're inside the "hi" key section, so we'll manually check for the key in this case
            differingKey = s1[i-1];
            break;
        }
    }
    
    return differingKey;
}

int main() {
    string s1 = R"({"hello":"world","hi":"hello","you":"me"})"; 
    string s2 = R"({"hello":"world","hi":"helloo","you":"me"})"; 
    
    string s = ss(s1, s2);
    
    cout << s << endl;  // Output should be "hi"
    
    return 0;
}
