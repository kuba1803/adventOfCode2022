//
// Created by Dorota on 10.12.2022.
//

#ifndef ADVENTOFCODE_Z3_1_H
#define ADVENTOFCODE_Z3_1_H

#include <iostream>
class Z3_1 {
public:
    static void solve(){
        std::string value;
        std::string firstPart;
        std::string lastPart;
        int sum = 0;
        while( true ){
            std::getline(std::cin, value);
            if(value == "END"){
                break;
            }
            firstPart = value.substr(0,value.size()/2);
            lastPart = value.substr(value.size()/2,value.size()/2);
            for( char c : firstPart){
                if(lastPart.find(c) != std::string::npos){
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


#endif //ADVENTOFCODE_Z3_1_H
