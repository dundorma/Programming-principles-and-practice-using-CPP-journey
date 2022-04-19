#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

void exercise2();
void exercise4();
void exercise5();
void exercise6();
void exercise7();
void exercise8();
void exercise9();
void exercise10();
void exercise11();

int main(){
    std::cout   << "\n#########  EXERCISE 2  #########" << std::endl;
    exercise2();

    std::cout   << "\n#########  EXERCISE 4  #########" << std::endl;
    exercise4();

    std::cout   << "\n#########  EXERCISE 5  #########" << std::endl;
    exercise5();

    std::cout   << "\n#########  EXERCISE 6  #########" << std::endl;
    exercise6();

    std::cout   << "\n#########  EXERCISE 7  #########" << std::endl;
    exercise7();

    std::cout   << "\n#########  EXERCISE 8  #########" << std::endl;
    exercise8();

    std::cout   << "\n#########  EXERCISE 9  #########" << std::endl;
    exercise9();

    std::cout   << "\n#########  EXERCISE 10 #########" << std::endl;
    exercise10();

    std::cout   << "\n#########  EXERCISE 11 #########" << std::endl;
    exercise11();

    return 0;
}

void exercise2(){
    const double KM_PER_MILE{1.609};
    double miles{};
    std::cout << "Miles to Kilometers converter!" << std::endl;
    std::cout << "Enter distance in miles : "; std::cin >> miles;
    std::cout << miles << " Miles is " << miles * KM_PER_MILE << " Kilometers." << std::endl;
    return;
}

void exercise4(){
    int val1{}, val2{};
    std::cout << "Enter 2 integers separated by space : "; std::cin >> val1 >> val2;
    
    if(val1 > val2){
        std::cout << "The smaller integer is : " << val2 << std::endl;
        std::cout << "The larger integer is : " << val1 << std::endl;
    }else{
        std::cout << "The smaller integer is : " << val2 << std::endl;
        std::cout << "The larger number integer is : " << val2 << std::endl;
    }

    std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << std::endl;
    std::cout << "The difference of " << val1 << " and " << val2 << " is ";
    if((val1 - val2) < 0){
        std::cout << val2 - val1 << std::endl;
    }else{
        std::cout << val1 - val2 << std::endl;
    }
    std::cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << std::endl;
    std::cout << "The ratio of " << val1 << " and " << val2 << " is " << static_cast<double>(val1) / val2 << std::endl;
    return;
}

void exercise5(){
    double val1{}, val2{};
    std::cout << "Enter 2 integers separated by space : "; std::cin >> val1 >> val2;
    
    if(val1 > val2){
        std::cout << "The smaller integer is : " << val2 << std::endl;
        std::cout << "The larger integer is : " << val1 << std::endl;
    }else{
        std::cout << "The smaller integer is : " << val2 << std::endl;
        std::cout << "The larger number integer is : " << val2 << std::endl;
    }

    std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << std::endl;
    std::cout << "The difference of " << val1 << " and " << val2 << " is ";
    if((val1 - val2) < 0){
        std::cout << val2 - val1 << std::endl;
    }else{
        std::cout << val1 - val2 << std::endl;
    }
    std::cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << std::endl;
    std::cout << "The ratio of " << val1 << " and " << val2 << " is " << val1 / val2 << std::endl;
    return;
}

void exercise6(){
    // must not use std::sort or <algorithm>
    int val1{}, val2{}, val3{};
    std::cout << "Enter 3 integers separated by space : "; std::cin >> val1 >> val2 >> val3;
    if(val1 < val2){
        if(val2 < val3){
            std::cout << val1 << ", " << val2 << ", " << val3 << std::endl;
        }else if(val3 < val1){
            std::cout << val3 << ", " << val1 << ", " << val2 << std::endl;
        }else{
            std::cout << val1 << ", " << val3 << ", " << val2 << std::endl;
        }
    }else{
        if(val3 < val2){
            std::cout << val3 << ", " << val2 << ", " << val1 << std::endl;
        }else if(val3 < val1){
            std::cout << val2 << ", " << val3 << ", " << val1 << std::endl;
        }else{
            std::cout << val2 << ", " << val1 << ", " << val3 << std::endl;
        }
    }
    return;
}

void exercise7(){
    // must not use std::sort or <algorithm>
    std::string str1{}, str2{}, str3{};
    std::cout << "Enter 3 string values separated by space : "; std::cin >> str1 >> str2 >> str3;

    if(str1 < str2){
        if(str2 < str3){
            std::cout << str1 << ", " << str2 << ", " << str3 << std::endl;
        }else if(str3 < str1){
            std::cout << str3 << ", " << str1 << ", " << str2 << std::endl;
        }else{
            std::cout << str1 << ", " << str3 << ", " << str2 << std::endl;
        }
    }else{
        if(str3 < str2){
            std::cout << str3 << ", " << str2 << ", " << str1 << std::endl;
        }else if(str3 < str1){
            std::cout << str2 << ", " << str3 << ", " << str1 << std::endl;
        }else{
            std::cout << str2 << ", " << str1 << ", " << str3 << std::endl;
        }
    }
}

void exercise8(){
    int val{};
    std::cout << "Even / odd checker" << std::endl;
    std::cout << "Enter an integer : "; std::cin >> val;
    if(val%2){
        std::cout << val << " is an odd number." << std::endl;
    }else{
        std::cout << val << " is an even number." << std::endl;
    }
    return;
}

void exercise9(){
    std::string str{};
    std::cout << "This program converts spelled-out numbers into digits." << std::endl;
    std::cout << "Enter a spelled out numbers such as \"zero\" : "; std::cin >> str;
    std::for_each(str.begin(), str.end(), [](char &c){c = std::toupper(c);});

    if(str == "zero"){
        std::cout << 0 << std::endl;
    }else if(str == "one"){
        std::cout << 1 << std::endl;
    }else if(str == "two"){
        std::cout << 2 << std::endl;
    }else if(str == "three"){
        std::cout << 3 << std::endl;
    }else if(str == "four"){
        std::cout << 4 << std::endl;
    }else{
        std::cout << "Not a number I know." << std::endl;
    }
    return;
}

void exercise10(){
    char operator_x{};
    double val1{}, val2{};

    std::cout << "Enter an operator followed by 2 operand for example \"* 100 3.14\" : "; std::cin >> operator_x >> val1 >> val2;
    if(operator_x == '+'){
        std::cout << val1 << " + " << val2 << " = " << val1 + val2 << std::endl;
    }else if(operator_x == '*'){
        std::cout << val1 << " * " << val2 << " = " << val1 * val2 << std::endl;
    }else if(operator_x == '-'){
        std::cout << val1 << " - " << val2 << " = " << val1 - val2 << std::endl;
    }else if(operator_x == '/'){
        std::cout << val1 << " / " << val2 << " = " << val1 / val2 << std::endl;
    }else{
        std::cout << "Invalid operator." << std::endl;
    }

    return;
}

void exercise11(){
    int pennies{}, nickels{}, dimes{}, quarters{}, hal_dollars{}, one_dollars{};
    std::cout << "Enter the ammount of pennies you have : "; std::cin >> pennies;
    std::cout << "Enter the ammount of nickels you have : "; std::cin >> nickels;
    std::cout << "Enter the ammount of dimes you have : "; std::cin >> dimes;
    std::cout << "Enter the ammount of quarters you have : "; std::cin >> quarters;
    std::cout << "Enter the ammount of half-dollar coins you have : "; std::cin >> hal_dollars;
    std::cout << "Enter the ammount of one-dollar coins you have : "; std::cin >> one_dollars;

    if(pennies >= 1){
        if(pennies == 1){
            std::cout << "You have 1 penny." << std::endl;
        }else{
            std::cout << "You have " << pennies << " pennies." << std::endl;
        }
    }
    if(nickels >= 1){
        if(nickels == 1){
            std::cout << "You have 1 nickel." << std::endl;
        }else{
            std::cout << "You have " << nickels << " nickels." << std::endl;
        }
    }
    if(dimes >= 1){
        if(dimes == 1){
            std::cout << "You have 1 dime." << std::endl;
        }else{
            std::cout << "You have " << dimes << " dimes." << std::endl;
        }
    }
    if(quarters >= 1){
        if(quarters == 1){
            std::cout << "You have 1 quarter." << std::endl;
        }else{
            std::cout << "You have " << quarters << " quarters." << std::endl;
        }
    }
    if(hal_dollars >= 1){
        if(hal_dollars == 1){
            std::cout << "You have 1 half-dollar coin." << std::endl;
        }else{
            std::cout << "You have " << hal_dollars << " half-dollar coins." << std::endl;
        }
    }
    if(one_dollars >= 1){
        if(one_dollars == 1){
            std::cout << "You have 1 one-dollar coin." << std::endl;
        }else{
            std::cout << "You have " << one_dollars << " one-dollar coins." << std::endl;
        }
    }

    double total_coin{};
    total_coin = pennies + nickels*5 + dimes*10 + quarters*25 + hal_dollars*50 + one_dollars*100;
    std::cout << "The value of all of your coins is " << total_coin << " cents." << std::endl;
    std::cout << "Total coins in dollars is : $" << total_coin/100 << std::endl;
}
