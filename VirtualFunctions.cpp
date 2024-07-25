#include <iostream>

using namespace std;

class Instrument { // This is an abstract class because it has at least one pure virtual function
public:
    virtual void MakeSound() = 0; // This function here forces all the derived functions to implement it
};

class Accordion : public Instrument {
public:
    void MakeSound() {
        cout<<"Accordion playing...\n";
    }
};

class Piano : public Instrument {
    void MakeSound() {
        cout<<"Piano playing...\n";
    }
};

int main() {
    Instrument *i1 = new Accordion();
    i1->MakeSound();

    Instrument *i2 = new Piano();
    i2->MakeSound();

    Instrument *instruments[2] = {i1,i2};

    for(int i = 0; i < 2; i++) {
        instruments[i]->MakeSound();
    }

    return 0;
}