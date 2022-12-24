//facade
#include <iostream>
using namespace std;

class IndoorLights {
public:
    void on() {
        cout << "IndoorLights ON\n";
    }
    void off() {
        cout << "IndoorLights OFF\n";
    }
};

class OutdoorLights {
public:
    void on() {
        cout << "OutdoorLights ON\n";
    }
    void off() {
        cout << "OutdoorLights OFF\n";
    }
};

class Amplifier {
public:
    void on() {
        cout << "Amplifier ON\n";
    }
    void off() {
        cout << "Amplifier OFF\n";
    }
};


class ElectricPanel {

private:
    IndoorLights* pOne;
    OutdoorLights* pTwo;
    Amplifier* pThree;

public:
    ElectricPanel() {
        pOne = new IndoorLights();
        pTwo = new OutdoorLights();
        pThree = new Amplifier();

    }

    void turnOnAll() {
        cout << "turnOnAll\n";
        pOne->on();
        pTwo->on();
        pThree->on();

    }

    void turnOffAll() {
        cout << "turnOffAll\n";
        pOne->off();
        pTwo->off();
        pThree->off();

    }
};