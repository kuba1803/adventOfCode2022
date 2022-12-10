//
// Created by Dorota on 10.12.2022.
//

#ifndef ADVENTOFCODE_Z4_1_H
#define ADVENTOFCODE_Z4_1_H

#include <iostream>
class Z4_1 {
public:
    static void solve(){
        std::string pair;
        std::string firstPair;
        std::string secondPair;
        int count = 0;
        while (true) {
            std::cin >> pair;
            if (pair == "END") {
                break;
            }
            std::string::size_type n = pair.find(',');
            firstPair = pair.substr(0,n);
            secondPair = pair.substr(n+1);
            n = firstPair.find('-');
            int a = std::stoi(firstPair.substr(0,n));
            int b = std::stoi(firstPair.substr(n + 1));

            n = secondPair.find('-');
            int c = std::stoi(secondPair.substr(0,n));
            int d = std::stoi(secondPair.substr(n + 1));
            if( a <= c && b >= d )count++;
            else if ( a >= c && b <= d)count++;

        }
        std::cout<<count<<std::endl;
    }
};


#endif //ADVENTOFCODE_Z4_1_H
