/**
 * Simple letter frequency analyzer
 */

#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::string text, lineOfText, cleanText;
    std::ifstream inputFile;

    uint32_t letterFrequency[26] = {0};

    // Make sure to change the file name to the name of the file being analyzed
    inputFile.open("decryptedText.txt");

    // Reading the file into text
    while (!inputFile.eof()) {
        getline(inputFile, lineOfText);
        text.append(lineOfText);
    }
    inputFile.close();

    //   if you want to initialize the array with the range for-loop instead of the declaration with initialized.
    //    for (auto &i: letterFrequency)
    //    {
    //        i=0;
    //    }


    // Clean text and convert it to uppercase
    char c;
    for (auto a: text) {
        c = toupper(a);
        if (c >= 'A' and c <= 'Z') {
            cleanText.push_back(c);
            letterFrequency[c - 'A']++;
        }
    }

    // Print number of occurrences
    char j = 0;
    for (auto i: letterFrequency) {
        std::cout << "Frequency of " << (char) ('A' + j) << " is " << i << std::endl; // / (double) cleanText.size()
        j++;
    }
    std::cout << "Total number of letters: " << cleanText.size() << std::endl << std::endl << std::endl;

    // Print probability
    j = 0;
    for (auto i: letterFrequency) {
        std::cout << "P['" << (char) ('A' + j) << "']=" << i / (double) cleanText.size()
                  << std::endl; // / (double) cleanText.size()
        j++;
    }
    return 0;
}
