#ifndef ADVENTOFCODE_Z2_2_H
#define ADVENTOFCODE_Z2_2_H

#include <iostream>

class Z2_2 {
public:
    static void solve(){
        char you, oponent;
        int score = 0;
        int roundNumber=0;
        while (true){
            std::cin>>oponent;
            if(oponent == 'E') {
                break;
            }
            std::cin>>you;
            oponent -= 'A';
            you -= 'X' ;
            if (you == 0){
                score += 0;
                score += (oponent + 2)%3 + 1;
            } else if (you == 1){
                score += 3;
                score += oponent + 1;
            } else{
                score += 6;
                score += (oponent + 1)%3 + 1;
            }
        }
        std::cout<<score;
    }
};



#endif //ADVENTOFCODE_Z2_2_H
