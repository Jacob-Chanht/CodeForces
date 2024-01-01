#include <iostream>
#include <vector>
int main(){
    std::string n;
    char c;
    std::vector<char> word;
    std::getline(std::cin, n);
    for(int i = 0; i < n.length(); i++){
        c = n[i];
        if (c >= 97 && c <= 122){
            word.push_back(c);
        }
    }
    if(word.size() > 10){
        std::cout << word[0] << word.size() - 2 << word[word.size()-1];
    }else{
        for(char c : word){
            std::cout << c;
        }
    }
}