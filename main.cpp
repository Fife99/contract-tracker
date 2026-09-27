#include "contract.h"
#include <iostream>

int main() {
    Contract contract;

    std::cout << "Vvedite nomer dogovora: ";
    std::cin >> contract.number;

    std::cout << "Vvedite summu dogovora: ";
    std::cin >> contract.amount;

    std::cout << "=== Registraciya dogovora ===" << std::endl;
    std::cout << "Dogovor No " << contract.number
               << " na summu " << contract.amount
               << " zaregistrirovan." << std::endl;

    return 0;
}