#include "RobotKRSRI.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    RobotKRSRI robot;
    robot.nyala();
    robot.jalan();
    robot.padamkanApi();
    robot.ambilBoneka();
 
    robot.mati();
    robot.jalan(); // mengeluarkan pesan error
    robot.padamkanApi(); // mengeluarkan pesan error
    robot.ambilBoneka(); // mengeluarkan pesan error

    // bonus
    robot.nyala();
    Boneka teddyBear;
    robot.ambilBoneka(teddyBear);
    robot.mati();
    return 0;
}
