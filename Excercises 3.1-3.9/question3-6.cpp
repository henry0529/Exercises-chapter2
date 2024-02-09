#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;

void generateCipher(char cipher[]) {
    const string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    srand(time(nullptr));

    string randomCharacter = ALPHABET;
    for (int i = 0; i < 26; ++i) {
        randomCharacter.erase(remove(randomCharacter.begin(), randomCharacter.end(), ALPHABET[i]), randomCharacter.end());
        cipher[i] = randomCharacter[rand() % randomCharacter.length()];
        randomCharacter.push_back(ALPHABET[i]);
    }
}

int main() {
    char cipher[26];
    generateCipher(cipher);
    cout << "Cipher Array:\n";
    for (int i = 0; i < 26; ++i) {
        cout << (char)('A' + i) << " = " << cipher[i] << "\n";
    }
    return 0;
}