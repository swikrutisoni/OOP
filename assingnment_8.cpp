
#include <iostream>
using namespace std;

class Vehicles {
public:
    virtual void gearChange() = 0;
    virtual void speedChange() = 0;
    virtual void applyBrake() = 0;
};

class Bicycle : public Vehicles {
public:
    void gearChange() override {
        cout << "Bicycle gear changed" << endl;
    }

    void speedChange() override {
        cout << "Bicycle speed changed" << endl;
    }

    void applyBrake() override {
        cout << "Bicycle brake applied" << endl;
    }
};

class Car : public Vehicles {
public:
    void gearChange() override {
        cout << "Car gear changed" << endl;
    }

    void speedChange() override {
        cout << "Car speed changed" << endl;
    }

    void applyBrake() override {
        cout << "Car brake applied" << endl;
    }
};

class Bike : public Vehicles {
public:
    void gearChange() override {
        cout << "Bike gear changed" << endl;
    }

    void speedChange() override {
        cout << "Bike speed changed" << endl;
    }

    void applyBrake() override {
        cout << "Bike brake applied" << endl;
    }
};

int main() {
    Bike b;
    Car c;
    Bicycle bc;

    b.gearChange();
    b.speedChange();
    b.applyBrake();

    c.gearChange();
    c.speedChange();
    c.applyBrake();

    bc.gearChange();
    bc.speedChange();
    bc.applyBrake();

    return 0;
}