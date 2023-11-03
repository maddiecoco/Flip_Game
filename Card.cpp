// Implementation for Card class functions

#include "Card.h"

void Card::setValue(std::string v) { 
    value = v; 
    }     // Setter for value
void Card::setSuit(std::string s) { 
    suit = s; 
    }       // Setter for suit

// Getter for value
std::string Card::getValue() const { 
    return value; 
    }  

// Getter for suit 
std::string Card::getSuit() const { 
    return suit; 
    }


// Implementation of the overloaded << operator for the Card class
std::ostream& operator<<(std::ostream& os, const Card& card) {
os << card.value << " of " << card.suit;
return os;
}



