#include <iostream>
#include <cmath>
#include <math.h>
#include <typeinfo>
#include <vector>
#include <string>

#include <iostream>

using namespace std;

vector<string> words;

void s_process(string sentence) {
 
    // Create a temporary string to hold each word
    string tempWord;
 
    // Iterate over each character in the sentence
    for (char c : sentence) {
        // Check if the character is a whitespace character
        if (isspace(c)) {
            // If the temporary string is not empty, add it to the list of words
            if (!tempWord.empty()) {
                words.push_back(tempWord);
                tempWord.clear();
            }
        } else {
            // If the character is not a whitespace character, add it to the temporary string
            tempWord.push_back(c);
        }
    }
 
    // Add the last word to the list of words (if there is one)
    if (!tempWord.empty()) {
        words.push_back(tempWord);
    }
 
    // Words is used
}

string trigonometric_derivation(){
    string trg_exp;
    cout << "Enter trigonometric expression for differentiation: ";
    cin >> trg_exp;

    s_process(trg_exp);

    for (string word : words){ // where words is vec
        switch(word)
        {
            case "cos":

            case "sin":

            case "tan":

            case "sec":

            case "csc":

            default:
                continue;
        }
    }
}

