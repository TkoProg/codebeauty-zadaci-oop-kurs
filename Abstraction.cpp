#include <iostream>

using namespace std;

class Smartphone { // We cant create instances of abstract classes, but we can create pointers of abstract classes
public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};

class Android : public Smartphone {
public:
    void TakeASelfie() {
        cout<<"Android selfie\n";
    }
    void MakeACall() {
        cout<<"Android call\n";
    }
};

class IPhone : public Smartphone{
public:
    void TakeASelfie() {
        cout<<"iPhone selfie\n";
    }
    void MakeACall() {
        cout<<"iPhone call\n";
    }
};

int main() {
    Smartphone *s1 = new Android();
    s1->TakeASelfie();
    Smartphone *s2 = new IPhone();
    s2->TakeASelfie();
    return 0;
}