#include <iostream>
#include <string>

int main() {
    std::string mot;
    std::cout << "Entrez un mot: ";
    std::cin >> mot;

    bool estPalindrome = true;
    int longueur = mot.length();

    for (int i = 0; i < longueur / 2; ++i) {
        if (mot[i] != mot[longueur - 1 - i]) {
            estPalindrome = false;
            break;
        }
    }

    if (estPalindrome) {
        std::cout << mot << " est un palindrome." << std::endl;
    } else {
        std::cout << mot << " n'est pas un palindrome." << std::endl;
    }

    return 0;
}