#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
    
    private:
        string name;
        double weight;

    
    public:
        // ---------- Constructor ----------
        Animal(string name, double weight);

        // ---------- Accessors ----------
        string getName() const;
        double getWeight() const;
        void setName(string name);
        void setWeight(double weight);

        // ---------- Member Function(s) ----------
        virtual string makeNoise() const = 0;  
        /*
        
            This is a virtual function: virtual string makeNoise() const;

            When a function is declared as virtual in a base class (in this case Animal), 
            it allows a derived class (in this project is 'Dog') to provide its own implementation of that function, 
            which is then called instead of the base class's implementation when the 
            function is invoked through a pointer or reference to the base class.

            This is a pure virtual function: virtual string makeNoise() const = 0;

            In C++, when you append = 0 to a virtual function declaration, it signifies that the function is a pure virtual function. A pure virtual function is a virtual function that has no implementation in the base class and must be overridden by any derived class.

            Here's what it means:

            No Implementation: When you declare a function as pure virtual by appending = 0, you're saying that the base class does not provide an implementation for that function.

            Override Required: Any class that derives from the base class and does not provide an implementation for the pure virtual function will itself become an abstract class, meaning it cannot be instantiated. Derived classes must provide an implementation for all pure virtual functions to be concrete classes.
        
        */

       virtual string eat() const = 0;

}; // end of Animal

#endif // ANIMAL_H