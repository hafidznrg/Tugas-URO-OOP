#include <iostream>
#include <string>
using namespace std;

class Robot{
    public:
        Robot();
        ~Robot();
        void nyala();
        void mati();
        virtual void jalan() = 0;
        void setStatus(bool statusUpdate);
        bool getStatus();
        
    protected:
    string name;
    int jumlahKaki;
    bool status;
};

Robot::Robot() {
    this->name = "name";
    this->jumlahKaki = 6;
    this->status = true;
}

Robot::~Robot() {}

void Robot::setStatus(bool statusUpdate) {
    this->status = statusUpdate;
}

bool Robot::getStatus() {
    return this->status;
}

void Robot::nyala(){
    cout << "Nyala" << endl;
    setStatus(true);
}

void Robot::mati(){
    cout << "Mati" << endl;
    setStatus(false);
}