#include <iostream>
#include <string>
using namespace std;

class Robot{
    public:
        Robot();
        Robot(string name, int kaki);
        ~Robot();
        void nyala();
        void mati();
        virtual void jalan() = 0;
        void setStatus(bool statusUpdate);
        bool getStatus();
        string getName();
        
    private:
    string name;
    int jumlahKaki;
    bool status;
};

Robot::Robot() {
    this->name = "Mechamaru";
    this->jumlahKaki = 6;
    this->status = true;
}

Robot::Robot(string name, int kaki){
    this->name = name;
    this->jumlahKaki = kaki;
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

string Robot::getName(){
    return this->name;
}