#include <iostream>

int main(){
    char j{'a'};
    for(int i = 0; i < 26; ++i)
        std::cout << static_cast<char>(j+i) << "\t" << i+97 << std::endl;
}