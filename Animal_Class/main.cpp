#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;

int main() {

    // Esto es un comentario de prueba para practicar git -> gitHub

    //Animal myAnimal("Sam", 100);
    Dog dog("Rover", 80, "Greyhound");
    Animal* dogPtr = new Dog("Fido", 115, "Golden Retriever"); // the * is a pointer that is pointing to a dog object (this is polymorphic reference)
                                                                // Animal is the type of pointer, Dog is the type of object

    cout << "Make noise? " << dogPtr->makeNoise() << endl;
    cout << "What do dogs eat? " << dogPtr->eat() << endl;

    /*
    cout << "Animal name: " << myAnimal.getName() << endl;
    cout << "Animal weight: " << myAnimal.getWeight() << endl;
    cout << "Animal noise: " << myAnimal.makeNoise() << endl;
    */
    
    cout << "Dog's name: " << dog.getName() << endl;
    cout << "Dog's weight: " << dog.getWeight() << endl;
    cout << "Dog's noise: " << dog.makeNoise() << endl;
    dog.digHole(); // this function already prints a string
    dog.chaseCat();

    delete dogPtr;
    dogPtr = nullptr;

return 0;
}// end of main