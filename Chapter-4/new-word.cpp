#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    std::vector<std::string> str_vec{};

    for(std::string temp; std::cin>>temp;){
        str_vec.push_back(temp);
    }

    std::sort(str_vec.begin(),str_vec.end());

    for(size_t i = 0; i < str_vec.size(); i++){
        if(i == 0 || str_vec.at(i-1)!=str_vec.at(i)){
            std::cout << str_vec.at(i) << " ";
        }
    }

    return 0;
}