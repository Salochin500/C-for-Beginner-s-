#include <iostream>

// C++ For Beginner's

// this how to remove the std
using namespace std;

int main() {
    // how to make hello world
    // you can remove the std by adding a name space to the top of the file like this
         cout << "Hello World!";

         string hello[] = "Look at my string!";

         return 0;
}

class Human {

    float dna;

// if you want to make it privite by deleting it or make the text privite
    public:
    string face;
    void walk() {
        cout << "Walking...";
    }
}

class Human {

    public:

    void walk(int speed) {
        // ...
    }

    void walk(float speed) {
        // ...
    }
}

class Human {

    public:

    Human() {
        // constructor
    }

    ~Human() {
        // destructor
    }
}

// for game dev's out the if you want your player to be super fast non tested
class Human {
    class SuperHero: public Human {
        public:
        string weapon = "Legs";
        void fastrun() {
                cout << "Runing...";
        }
    }
}

// if you want your player to fly non tested
class Human {
    class SuperHero: public Human {
        public:
        string weapon = "Cape";
        void fly() {
            cout << "Flying...";
        }
    }
}

// Objets
// name of your objet
Human E;
// Pointer
Human* myPointer = new Human;
// Deallocate
delete myPointer;


//Smart Pointer

unique_ptr<Human> ptrE(new Human);
cout << ptrE;

return 0;
