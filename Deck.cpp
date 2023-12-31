#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Card.h"
#include "Deck.h"
    
// Constructor that initializes a deck with all cards in order
Deck::Deck() : head(nullptr) {
    std::string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    std::string values[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    // Nested loops to populate the deck with cards
    for (auto& suit : suits) {
        for (auto& value : values) {
            addCardToEnd(value, suit);
        }
    }
}

// Destructor to clean up memory by deleting all nodes in the linked list
Deck::~Deck() {
    while (head) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

// Utility function to add a card to the end of the deck (linked list)
void Deck::addCardToEnd(std::string value, std::string suit) {
    Node* newNode = new Node{Card(value, suit), nullptr};

    if (!head) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->next) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

// Function to shuffle the cards in the deck
void Deck::shuffle() {
    int n = 52;
    Card arr[n];

    // Transfer cards from linked list to an array
    Node* tmp = head;
    int i = 0;
    while (tmp) {
        arr[i++] = tmp->card;
        tmp = tmp->next;
    }

    // Shuffle the cards in the array using the Fisher-Yates shuffle
    std::srand(std::time(nullptr));
    for (int i = n - 1; i > 0; i--) {
        int j = std::rand() % (i + 1);
        std::swap(arr[i], arr[j]);
    }

    // Transfer shuffled cards back to the linked list
    tmp = head;
    i = 0;
    while (tmp) {
        tmp->card = arr[i++];
        tmp = tmp->next;
    }
}

// Implementation of the overloaded << operator for the Deck class
std::ostream& operator<<(std::ostream& os, const Deck& deck) {
    Deck::Node* tmp = deck.head;
    while (tmp) {
        os << tmp->card << std::endl;
        tmp = tmp->next;
    }
    return os;
}

