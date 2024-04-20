#include "Animal.h"
#include <string>
using namespace std;


// Constructor of the class
Animal :: Animal (string name, double weight) {
    this->name = name;
    this->weight = weight;
}

/*
    Another way to do the constructor is the following:

    Animal::Animal(string name, double weight) : name(name), weight(weight) {}

*/

// ---------- Getters ----------
string Animal::getName() const {
    return name;
}

double Animal::getWeight() const {
    return weight;
}

// ---------- Setters ----------
void Animal::setName(string name) {
    this->name = name;
}

void Animal::setWeight(double weight) {
    this->weight = weight;
}


