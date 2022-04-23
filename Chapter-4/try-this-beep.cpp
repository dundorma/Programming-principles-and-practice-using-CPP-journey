#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> str_vec{};
    std::string disliked{"broccoli"};

    for(std::string temp; std::cin >> temp;){
        str_vec.push_back(temp);
    }

    for(const auto &str : str_vec){
        if(str == disliked)
            std::cout << "BLEEP ";
        else
            std::cout << str << " ";
    }

    return 0;
}