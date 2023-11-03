// Created by nehae on 10/18/2023.
// The Card class represents a card with a value and a suit.

#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Part A: Card class
class Card {
    // Member variables for storing the value and suit of a card
    std::string value;
    std::string suit;

public:
    // Constructor with default values for the card
    Card(std::string v = "", std::string s = "") : value(v), suit(s) {}

    void setValue(std::string v);     // Setter for value
    void setSuit(std::string s);      // Setter for suit

    std::string getValue() const;  // Getter for value
    std::string getSuit() const;     // Getter for suit

    // Overloaded << operator to print a card's value and suit
    friend std::ostream& operator<<(std::ostream& os, const Card& card);
};


#endif //CARD_H
