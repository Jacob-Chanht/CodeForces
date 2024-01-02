#include <iostream>

int main(){
    int n, counter, output = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        counter = 0;
        for (int j = 0; j < 3; j++){
            int input;
            std::cin >> input;
            counter += input;
        }
        if(counter >= 2){
            output +=1;
        }
    }
    std::cout << output;
}