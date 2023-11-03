// Created by nehae on 10/18/2023.
// The Deck class represents a deck of cards using a linked list.
// This class has a shuffle method to shuffle the cards randomly.

#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Card.h"


// Deck class using linked list
class Deck {
    // Node for the linked list implementation of the Deck
    struct Node {
        Card card;
        Node* next;
    };
    Node* head; // Head of the linked list storing the cards

public:
    // Constructor that initializes a deck with all cards in order
    Deck();
    // Destructor to clean up memory by deleting all nodes in the linked list
    ~Deck();

    void addCardToEnd(std::string value, std::string suit);

    void shuffle();

    friend std::ostream& operator<<(std::ostream& os, const Deck& deck);
};


#endif //DECK_H
