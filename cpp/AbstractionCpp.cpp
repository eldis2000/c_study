#include <iostream>
using namespace std;

class Smartphone {
    public:
        virtual void TakeSelfie() = 0;
};

class Android:public Smartphone {
    public:
        void TakeSelfie() {
            cout << "Android selfie\n" << endl;
        }
};

class Iphone:public Smartphone {
    public:
        void TakeSelfie() {
            cout << "Iphone selfie\n" << endl;
        }
};

int main() {
    Smartphone* s1 = new Android();
    Smartphone* s2 = new Iphone();
    s1->TakeSelfie();
    s2->TakeSelfie();
}
