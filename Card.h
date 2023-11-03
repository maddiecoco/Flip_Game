// Created by nehae on 10/18/2023.
// The Card class represents a card with a value and a suit.

#ifndef FLIP_CARD_H
#define FLIP_CARD_H

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

    void setValue(std::string v) { value = v; }     // Setter for value
    void setSuit(std::string s) { suit = s; }       // Setter for suit

    std::string getValue() const { return value; }    // Getter for value
    std::string getSuit() const { return suit; }      // Getter for suit

    // Overloaded << operator to print a card's value and suit
    friend std::ostream& operator<<(std::ostream& os, const Card& card);
};

// Implementation of the overloaded << operator for the Card class
std::ostream& operator<<(std::ostream& os, const Card& card) {
    os << card.value << " of " << card.suit;
    return os;
}

// Node for the linked list implementation of the Deck
struct Node {
    Card card;
    Node* next;
};





#endif //FLIP_CARD_H
