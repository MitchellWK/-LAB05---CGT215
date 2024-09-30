#include <iostream>
#include <vector>
#include <string>
using namespace std;

int encodechar(int C, const vector<int>& cipher) {
    if (C >= 65 && C <= 90) {
        return cipher[C - 65];
    }
    else if (C >= 97 && C <= 122) {
        int uppercaseletter = C - 32;
        int uppercasecode = cipher[uppercaseletter - 65];
        return uppercasecode + 32;
    }
    return C;
}

int main() {
    vector<int> cipher = {
        {'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E'}
    };
    string text;
    std::cout << "Input your text into the cypher: ";
    getline(cin, text);

    string encodedtext;
    for (int C : text) {
        encodedtext += encodechar(C, cipher);
    }

    std::cout << "Your encoded message: " << encodedtext << std::endl;

    return 0;
}