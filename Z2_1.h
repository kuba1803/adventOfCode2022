
#ifndef ADVENTOFCODE_Z2_1_H
#define ADVENTOFCODE_Z2_1_H

#include <iostream>

class Z2_1 {
public:
    static void solve(){
        char you, oponent;
        int score = 0;
        int roundNumber=0;
        while (true){
            std::cin>>oponent;
            if(oponent == 'E'){
                break;
            }
            std::cin>>you;
            oponent -= 'A';
            you -= 'X';
            score += you  + 1;
            if (you == oponent){
                score += 3;
            } else if (you == (oponent + 1)%3){
                score += 6;
            }
        }
        std::cout<<score;
    }
};


#endif //ADVENTOFCODE_Z2_1_H
