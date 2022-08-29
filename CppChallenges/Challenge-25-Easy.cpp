// https://www.reddit.com/r/dailyprogrammer/comments/qxuug/3152012_challenge_25_easy/

#include <bits/stdc++.h>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string voteWinner(std::vector<std::string>& votes); // Declare function

int main(int argc, char const *argv[])
{
    std::vector<std::string> votes = { "john", "johnny", "john",
                                       "johnny", "john", "jackie",
                                       "jamie", "john", "john",
                                       "johnny", "jamie", "johnny",
                                       "john", "john", "john"};

    std::cout << voteWinner(votes) << std::endl;
    return 0;
}

std::string voteWinner(std::vector<std::string>& votes)
{
    std::unordered_map<std::string, int> mapObj; // Insert all votes in a hashmap
    for (auto& str: votes){
        mapObj[str]++;
    }

    // Traverse through map to get total number of votes
    int totalVotes = 0;
    std::stringstream ss;
    for (auto& entry: mapObj){
        std::string key = entry.first;
        int val = entry.second;
        std::cout << "Name: " << key << "\tVotes: " << val << std::endl;
        totalVotes += val;
    }

    std::cout << "Total Votes: " << totalVotes << std::endl; // Print total votes

    // Traverse through map to get find the winner
    for (auto& entry: mapObj){
        if (entry.second > totalVotes/2){
            ss << "The winnder is...." << entry.first << 
            " with " << entry.second << " votes!" << std::endl;
            std::string winner = ss.str();
            return winner;
        } 
    }

    // Return statement if there is no majority winner
    return "There is no majority winner.";
}