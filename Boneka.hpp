#include <iostream>
#include <string>
using namespace std;

class Boneka {
    private:

    public:
        string name;
        Boneka();
        Boneka(string name);
        ~Boneka();
};

Boneka::Boneka() {
    this->name = "Boneka Beruang";
}

Boneka::Boneka(string name){
    this->name = name;
}

Boneka::~Boneka() {}