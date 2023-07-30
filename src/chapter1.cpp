#include <iostream>
#include "globals.h"

void chapter()
{
    std::string action;
    std::cout << ("You wake up. \n");
    std::cout << ("With no memories of where you are, who you are and how you ended up here, you look around.\n");
    std::cout << ("You identify yourself to be on the floor inside a small structure.\n");
    std::cout << ("What do you do?\n");

    std::vector<std::string> verb = {"stand", "look", "search"};
    std::vector<std::string> objects = {"table", "flashlight"};

    std::getline(std::cin, action);

    WordSeparator(action);

    if (action == "stand")
    {
        std::cout << ("You stand up.");
    }
    else
    {
        std::cout << "This doesn't seem to be a valid choice.";
    }
}