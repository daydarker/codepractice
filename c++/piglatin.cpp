
Copy code
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string consonentset(string word) {
    char ch = word[0];
    for (int i = 0; i < word.size(); i++) {
        word[i] = word[i+1];
    }
    return word + ch + "ay";
}
string vowelset(string word) {
    return word + "ay";
}

string goatlatinsolve(string s) {
    istringstream iss(s);
    string word;
    string result;

    while (iss >> word) {
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') {
            result += vowelset(word) + " ";
        } else {
            result += consonentset(word) + " ";
        }
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    string abx = goatlatinsolve(s);
    cout << abx;
    return 0;
}