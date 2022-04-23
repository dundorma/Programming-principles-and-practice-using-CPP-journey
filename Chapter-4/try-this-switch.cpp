#include <iostream>

constexpr double yen_per_pound{165.51};
constexpr double yen_per_krone{14.43};
constexpr double yen_per_yuan{19.76};
constexpr double krone_per_pound{11.46};
constexpr double krone_per_yuan{1.47};
constexpr double yuan_per_pound{8.35};

int main(){
    double amount{};
    char unit{' '};

    std::cout << "Please enter an amount of money follwed by currency (k or y or p or c): ";
    std::cin >> amount >> unit;

    switch(unit){
        case 'y':
        case 'Y':{
            std::cout << amount << " yen == " << amount/yen_per_yuan << " yuan == " << amount/yen_per_pound << " pound == " << amount/yen_per_krone << " krone." << std::endl;
            break;
        }
        case 'k':
        case 'K':{
            std::cout << amount << " krone == " << amount*yen_per_krone << " yen == " << amount/krone_per_yuan << " yuan == " << amount/krone_per_pound << " pound." << std::endl;
            break;
        }
        case 'p':
        case 'P':{
            std::cout << amount << " pound == " << amount * krone_per_pound << " krone == " << amount * yen_per_pound << " yen == " << amount * yuan_per_pound << " yuan." << std::endl;
            break;
        }
        case 'c':
        case 'C':{
            std::cout << amount << " yuan == " << amount * yen_per_yuan << " yen == " << amount * krone_per_yuan << " krone == " << amount / yuan_per_pound << " pound." << std::endl;
            break;
        }
        default:
            std::cout << "Sorry, I don't know currency called " << unit << std::endl;
            break;
    }

    return 0;
}