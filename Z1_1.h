

#ifndef ADVENTOFCODE_Z1_1_H
#define ADVENTOFCODE_Z1_1_H

#include <iostream>
#include <vector>

class Z1_1 {

public:
    static void solve(){
        std::string value;
        std::vector<std::string> values;
        while( true ){
            std::getline(std::cin, value);
            values.push_back(value);
            if(value == "END"){
                break;
            }
        }

        int currentElves = 0;
        int maxElves = 0;
        for( std::string & value:values){
            if(value.empty() || value == "END")
                if(currentElves > maxElves){
                    maxElves = currentElves;
                }
                currentElves = 0;
                continue;
            }
            currentElves += stoi(value);
        }
        std::cout<<maxElves;
    }
};


#endif //ADVENTOFCODE_Z1_1_H
