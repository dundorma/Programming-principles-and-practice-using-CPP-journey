#include <iostream>

int main(){
    int i{0};
    char j{'a'};
    while (i < 26){
        std::cout << static_cast<char>(j+i) << "\t" << i+97 << std::endl;
        i++;
    }
}