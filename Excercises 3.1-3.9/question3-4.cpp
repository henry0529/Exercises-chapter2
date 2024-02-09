
#include <iostream>
#include <string>
using namespace std;

string encoding(const string& plaintext, const char cipher[]) {
    string ciphertext;
    for (char c : plaintext) {
        if (isupper(c)) {
            ciphertext += cipher[c - 'A'];
        } else {
            ciphertext += c; 
        }
    }
    return ciphertext;
}

int main() {
    const char cipher[] = {'X', 'Y', 'Z', 'A', 'B', 'C', 
                            'D', 'E', 'F', 'G', 'H', 'I',
                            'J', 'K', 'L', 'M', 'N', 'O', 
                            'P', 'Q', 'R', 'S', 'T', 'U',
                            'V', 'W'};
    string plaintext;
       cout << "Enter a plaintext message in uppercase letters: ";
    getline(cin, plaintext);

    string ciphertext = encoding(plaintext, cipher);
        cout << "Plaintext to ciphertext: " << ciphertext << endl;

    return 0;
}