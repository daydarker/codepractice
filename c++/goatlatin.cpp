#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string a='ma';
string consonantSet(string word, int count) {
    char ch = word[0];
    word.erase(0, 1);
    return word + ch +a+ string(count, 'a');
}

string vowelSet(string word, int count) {
    return word +a+ string(count, 'a');
}

string goatLatinSolve(string s) {
    istringstream iss(s);
    string word;
    string result;
    int count = 1;

    while (iss >> word) {
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') {
            result += vowelSet(word, count) + " ";
        } else {
            result += consonantSet(word, count) + " ";
        }
        result += string(count, 'a') + " ";
        count++;
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    string abx = goatLatinSolve(s);
    cout << abx;
    return 0;
}/*#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string consonantSet(string word, int count) {
    char ch = word[0];
    word.erase(0, 1);
    return word + ch + "ma" + string(count, 'a');
}

string vowelSet(string word, int count) {
    return word + "ma" + string(count - 1, 'a');
}

string goatLatinSolve(string s) {
    istringstream iss(s);
    string word;
    string result;
    int count = 1;

    while (iss >> word) {
        if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') {
            result += vowelSet(word, count) + " ";
        } else {
            result += consonantSet(word, count) + " ";
        }
        count++;
    }

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    string abx = goatLatinSolve(s);
    cout << abx;
    return 0;
}*/