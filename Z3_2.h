//
// Created by Dorota on 10.12.2022.
//

#ifndef ADVENTOFCODE_Z3_2_H
#define ADVENTOFCODE_Z3_2_H

#include <iostream>

class Z3_2 {
public:
    static void solve(){
        std::string firstString;
        std::string secondPart;
        std::string lastPart;
        int sum = 0;
        while( true ){
            std::getline(std::cin, firstString);
            if(firstString == "END"){
                break;
            }
            std::getline(std::cin, secondPart);
            std::getline(std::cin, lastPart);
            for( char c : firstString){
                if(secondPart.find(c) != std::string::npos && lastPart.find(c) != std::string::npos){
                    if( c >= 'a' && c <= 'z'){
                        sum += c - 'a' + 1;
                    } else{
                        sum += c - 'A' + 27;
                    }
                    break;
                }
            }


        }
        std::cout<<sum<<std::endl;
    }
};


#endif //ADVENTOFCODE_Z3_2_H
