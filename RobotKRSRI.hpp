#include "Robot.hpp"
#include "Boneka.hpp"
using namespace std;

class RobotKRSRI : public Robot{
    private:
        Boneka boneka;
    public:
        ~RobotKRSRI();
        void padamkanApi();
        void ambilBoneka();
        void ambilBoneka(Boneka& boneka);
        void setBoneka(Boneka& boneka);
        // string getBoneka();
        void jalan();

        RobotKRSRI operator+ (Boneka& boneka){
            RobotKRSRI robotBaru;
            robotBaru.boneka = boneka;
            return robotBaru;
        }
};

RobotKRSRI::~RobotKRSRI(){}

void RobotKRSRI::setBoneka(Boneka& boneka){
    this->boneka = boneka;
}


void RobotKRSRI::padamkanApi(){
    if (getStatus()) {
        cout << "Padamkan Api" << endl;
    } else {
        cout << "Robot belum menyala" << endl;
    }
}

void RobotKRSRI::ambilBoneka() {
    if (getStatus()) {
        cout << "Ambil Boneka" << endl;
    } else {
        cout << "Robot belum menyala" << endl;
    }
}

void RobotKRSRI::ambilBoneka(Boneka& boneka){
    if (getStatus()) {
        setBoneka(boneka);
        cout << "Robot bernama " << getName() << " telah mengambil boneka bernama " << boneka.name << endl;
    } else {
        cout << "Robot belum menyala" << endl;
    }
}

void RobotKRSRI::jalan() {
    if (getStatus()) {
        cout << "Jalan" << endl;
    } else {
        cout << "Robot belum menyala" << endl;
    }
}
