// Created by nehae on 10/18/2023.
// The Main file demonstrates creating a deck, printing it, shuffling it, and then printing the shuffled deck.


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Deck.h"

int main() {
    Deck deck;

    std::cout << "Deck before shuffle:\n";
    std::cout << deck << std::endl;

    deck.shuffle();

    std::cout << "Deck after shuffle:\n";
    std::cout << deck << std::endl;

    return 0;
}
