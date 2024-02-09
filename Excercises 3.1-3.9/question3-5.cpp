
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

string decoding(const string& ciphertext, const char cipher[]) {
    string plaintext;
    for (char c : ciphertext) {
        if (isupper(c)) {
            plaintext += char(cipher[c - 'A'] + 'A');
        } else {
            plaintext += c; 
        }
    }
    return plaintext;
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

    string decodingText = decoding(ciphertext, cipher);
        cout << "Ciphertext to plaintext: " << decodingText << endl;

    return 0;
}