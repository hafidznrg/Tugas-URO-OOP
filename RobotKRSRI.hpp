#include "Robot.hpp"
using namespace std;

class RobotKRSRI : public Robot{
    public:
        ~RobotKRSRI();
        void padamkanApi();
        void ambilBoneka();
        void jalan();
};

RobotKRSRI::~RobotKRSRI(){}

void RobotKRSRI::padamkanApi(){
    if (getStatus()) {
        cout << "padamkanApi" << endl;
    } else {
        cout << "Robot belum menyala" << endl;
    }
}

void RobotKRSRI::ambilBoneka(){
    if (getStatus()) {
        cout << "ambilBoneka" << endl;
    } else {
        cout << "Robot belum menyala" << endl;
    }
}

void RobotKRSRI::jalan() {
    if (getStatus()) {
        cout << "jalan" << endl;
    } else {
        cout << "Robot belum menyala" << endl;
    }
}
