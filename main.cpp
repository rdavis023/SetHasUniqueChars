#include "HasUniqueChars.h"
#include <string>
#include <unordered_set>

using namespace std;


bool hasUniqueChars(const string& str) {
    //   +=====================================================+
    //   |                 WRITE YOUR CODE HERE                |
    //   | Description:                                        |
    //   | - This function checks if a string 'str' has unique |
    //   |   characters.                                       |
    //   | - It uses an unordered_set for quick look-up.       |
    //   | - It returns a boolean value.                       |
    //   |                                                     |
    //   | Return type: bool                                   |
    //   |                                                     |
    //   | Tips:                                               |
    //   | - 'charSet' stores characters we've seen.           |
    //   | - Loop through 'str' to populate 'charSet'.         |
    //   | - Use 'find' method for quick look-up in set.       |
    //   | - If a duplicate is found, return false.            |
    //   | - Check output from Test.cpp in "User logs".        |
    //   +=====================================================+
    // Unordered_set to store unique characters
    unordered_set<char> charSet;

    // Loop through each character in the string
    for (char c : str) {
        // If the character is already in the set, return false
        if (charSet.find(c) != charSet.end()) {
            return false;
        }
        // Otherwise, add the character to the set
        charSet.insert(c);
    }

    // If loop completes, all characters are unique
    return true;
}