#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "raining.hpp"

std::vector<std::string> readBusinesses() {
    std::string input, response;
    bool in_progress = true;
    std::vector<std::string> business;

    std::cout << "Welcome to the Business Sorting Program!" << std::endl;
    while (in_progress) {
        std::getline(std::cin, input);
        business.push_back(input);
        std::cout << "Would you like to add another business? (y/n)" << std::endl;
        std::getline(std::cin, response);
        if (response == "y" || response == "Y" || response == "yes" || response == "Yes") {
        } else {
            in_progress = false;
        }
    }
    return business;
}
    std::vector<std::string> sortBusinesses(std::vector<std::string> business)
    {
    std::sort(business.begin(), business.end());
    for (int i = 0; i < business.size(); i++) {
        std::cout << business[i] << std::endl;
        }
    return business;
    }


