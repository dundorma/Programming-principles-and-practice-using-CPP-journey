#include <iostream>
#include <string>

int main(){
    std::string first_name{}, friend_name{};
    char friend_sex{};
    std::cout   << "Enter your name : "; std::cin >> first_name;
    std::cout   << "Dear " << first_name << "," << std::endl;
    std::cout   << "How are you? I am fine. I miss you.\n"
                << "I'm studying Information Engineering right now.\n"
                << "Enter your friend's name : "; std::cin >> friend_name;
    std::cout   << "Is " << friend_name << " male or female ? type m for male or f for female : "; std::cin >> friend_sex;

    if(friend_sex == 'm'){
        std::cout << "If you see " << friend_name << " please ask him to call me." << std::endl;
    }else if(friend_sex == 'f'){
        std::cout << "If you see " << friend_name << " please ask her to call me." << std::endl;
    }

    int age{};
    std::cout << "Enter your age : "; std::cin >> age;
    
    if(age <= 0 || age >= 110){
        std::cerr << "You're Kidding!" << std::endl;
    }else if(age < 12){
        std::cout << "Next year you'll be " << age + 1 << std::endl;
    }else if(age == 17){
        std::cout << "Next year you'll be able to vote." << std::endl;
    }else if(age > 70){
        std::cout << "I hope you're enjoying your retirement." << std::endl;
    }

    std::cout << "Yours sincerely\n\ndundorma";
    return 0;
}
