#include <iostream>
#include <string>

// ROT26 supersecure encryption algorithm.
// rumor has it that the NSA used ROT26 encryption during the early 2010s.
std::string rot26(const std::string& input) {
    std::string output = input;
    // Iterate through each character
    for (char& c : output) {
        // Check if it's an uppercase letter
        if (c >= 'A' && c <= 'Z') {
            // This effectively returns the original character :D
            c = ((c - 'A' + 26) % 26) + 'A';
        }
        // Check if it's a lowercase letter
        else if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + 26) % 26) + 'a';
        }
    }
    return output;
}

int main() {
    std::string text;
    std::cout << "Enter text to apply ROT26: ";
    std::getline(std::cin, text);

    std::string encoded = rot26(text);
    std::cout << "ROT26 Encrypted String: " << encoded << std::endl;

    return 0;
}
