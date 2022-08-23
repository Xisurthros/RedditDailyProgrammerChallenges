// https://www.reddit.com/r/dailyprogrammer/comments/qlwrc/372012_challenge_19_easy/

#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    int alph = 0;

    std::vector<std::string> skip = {"II.",
        "ADVENTURE IV. THE BOSCOMBE VALLEY MYSTERY",
        "ADVENTURE V. The Five Orange Pips",
        "ADVENTURE VI. The Man with the Twisted Lip",
        "ADVENTURE IX. The Adventure of the Engineer's Thumb",
        "ADVENTURE X. The Adventure of the Noble Bachelor",
        "ADVENTURE XI. The Adventure of the Beryl Coronet"};
    std::fstream newfile;
    int line = 0;
    newfile.open("sherlock.txt",std::ios::in);
    if (newfile.is_open()){
        std::string output;
        while (getline(newfile, output)){
            if (std::find(skip.begin(), skip.end(), output) != skip.end()){
                ;
            } else {
                while (61 <= line & line <= 12682){
                    for (int x = 0; x < output.size(); x++){
                        if (iswalnum(output[x])){
                            alph++;
                        }
                    }
                break;
                }
            }
            line+=1;
        }
        newfile.close();
    }
    std::cout << "There are " << alph << " alphanumeric characters!" << std::endl;
    return 0;
}