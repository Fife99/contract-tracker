#include "contract.h"
#include <iostream>

int main() {
    Contract contract;

    std::cout << "Vvedite nomer dogovora: ";
    std::cin >> contract.number;

    std::cout << "Vvedite summu dogovora: ";
    std::cin >> contract.amount;

double amountWithVat = contract.amount * 1.2;
std::cout << "=== Registraciya dogovora ===" << std::endl;    std::cout << "Dogovor No " << contract.number
               << " na summu " << contract.amount
               << " zaregistrirovan." << std::endl;
std::cout << "Summa s uchetom NDS: " << amountWithVat << std::endl;

    return 0;
}