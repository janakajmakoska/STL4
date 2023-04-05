#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Imenik {
public:
    Imenik(string ime, string tel_broj) : ime(ime), tel_broj(tel_broj) {}

    friend bool operator< (const Imenik& imenik1, const Imenik& imenik2) {
        return imenik1.ime < imenik2.ime;
    }

    friend ostream& operator<< (ostream& out, const Imenik& imenik) {
        out << imenik.ime << " - " << imenik.tel_broj;
        return out;
    }

private:
    string ime;
    string tel_broj;
};

int main() {
    vector<Imenik> imenik;

    // Додај неколку контакти
    imenik.push_back(Imenik("Виктор", "073333333"));
    imenik.push_back(Imenik("Горан", "074444444"));
    imenik.push_back(Imenik("Ана", "071111111"));
    imenik.push_back(Imenik("Борис", "072222222"));
    ;

    // Прикажи ги контактите во абецеден редослед
    sort(imenik.begin(), imenik.end());
    for (const Imenik& imenik : imenik) {
        cout << imenik << endl;
    }

    return 0;
}
