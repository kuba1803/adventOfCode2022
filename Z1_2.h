

#ifndef ADVENTOFCODE_Z1_2_H
#define ADVENTOFCODE_Z1_2_H

#include <iostream>
#include <vector>

class Z1_2 {

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
        std::vector<int> max3Elves;
        int maxElves = 0;
        for( std::string & value:values){
            if(value.empty() || value == "END"){
                if(max3Elves.size() < 3)
                {
                    max3Elves.push_back(currentElves);
                    std::sort(max3Elves.begin(), max3Elves.end(),[](int a, int b){ return a > b;});
                }
                else if(currentElves > max3Elves.back()){
                    max3Elves[2] = currentElves;
                    std::sort(max3Elves.begin(), max3Elves.end(),[](int a, int b){ return a > b;});
                }
                currentElves = 0;
                continue;
            }
            currentElves += stoi(value);
        }
        for(int i:max3Elves)
        {
            maxElves += i;
        }
        std::cout<<maxElves;
    }
};
#endif //ADVENTOFCODE_Z1_2_H
