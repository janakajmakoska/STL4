#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main() {
    string text;
    set<string> words;

    cout << "Enter some text: ";
    getline(cin, text);

    stringstream ss(text);
    string word;
    while (ss >> word) {
        words.insert(word);
    }

    cout << "Unique words in alphabetical order: " << endl;
    for (auto it = words.begin(); it != words.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
