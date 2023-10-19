#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Card class: stores a single card object, with a value and a suit
class Card
{
    public:
    Card();
    Card(int value, string suit);
    ~Card(){};

    //Member functions for card class, friend function for << operator
    void setValue(int value);
    void setSuit(string suit);
    int getValue();
    string getSuit();
    friend ostream& operator<<(ostream& ostr, const Card& c);

    private:
    int _value;
    string _suit;
};

//Default constructor: Sets card object as ace of diamonds
Card::Card()
{
    _value = 1;
    _suit = "Diamonds";
}

Card::Card(int value, string suit)
{
    _value = value;
    _suit = suit;
}

void Card::setValue(int value)
{
    _value = value;
}

void Card::setSuit(string suit)
{
    _suit = suit;
}

int Card::getValue()
{
    return _value;
}

string Card::getSuit()
{
    return _suit;
}

// Overloaded operator << that prints a card's
// value and suit 
ostream& operator<<(ostream& ostr, const Card& c)
{
    ostr << "This card is a " << c._value << " of " << c._suit;
    return ostr;
}


#endif
