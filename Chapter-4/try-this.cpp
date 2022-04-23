#include <iostream>

constexpr double yen_per_pound{165.51};
constexpr double yen_per_krone{14.43};
constexpr double krone_per_pound{11.46};

int main(){
    double amount{};
    char unit{' '};

    std::cout << "Please enter an amount of money follwed by currency (k or y or p) separated by space : ";
    std::cin >> amount >> unit;

    if(unit == 'y'){
        std::cout << amount << " yen == " << amount/yen_per_krone << " krone == " << amount/yen_per_pound << " pound" << std::endl;
    }else if(unit == 'k'){
        std::cout << amount << " krone == " << amount*yen_per_krone << " yen == " << amount/krone_per_pound << " pound" << std::endl;
    }else if(unit == 'p'){
        std::cout << amount << " pound == " << amount*yen_per_pound << " yen == " << amount*krone_per_pound << " krone" << std::endl;
    }else{
        std::cout << "Sorry, I don't know currency called " << unit << std::endl;
    }

    return 0;
}