#include "contract.h"
#include <iostream>

int main() {
    Contract contract;

    std::cout << "Vvedite nomer dogovora: ";
    std::cin >> contract.number;

    std::cout << "Vvedite summu dogovora: ";
    std::cin >> contract.amount;

    return 0;
}