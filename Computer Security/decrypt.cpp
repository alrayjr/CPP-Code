#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {

    std::string key(argv[2]);

    std::string text, lineOfText, cleanText, plainText;

    std::ifstream inputFile;

    inputFile.open(argv[1]);

    while (!inputFile.eof()) {
    getline(inputFile, lineOfText);
    text.append(lineOfText);
    }

    inputFile.close();

    int k = 0;
    char cc;
    for (int i = 0; i < text.size(); i++) {
        cc = 'A' + ((text.at(i) - 'A') - (key.at(k) - 'A') + 26) % 26;
        plainText.push_back(cc);
        k = (k + 1) % key.size();
    }

    std::ofstream outputFile;
    outputFile.open("decrypted.txt");
    outputFile << plainText;
    outputFile.close();

    return 0;
}
