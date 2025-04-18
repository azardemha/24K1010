#include<iostream>

using namespace std;

class Car {
private:
    int carID;
    string model;
    int year;

public:
    bool isRented;

    Car()
        : isRented(false) 
    {}

    Car(int cID, string m, int y, bool rented = false) 
        : carID(cID), model(m), year(y), isRented(rented) 
    {}

    void rentCar() {
        isRented = true;
    }

    void returnCar() {
        isRented = false;
    }

    bool isVintage() {
        return year < 2000;
    }
};

int main() {
    Car car1(01, "Nissan GTR", 2016);
    Car car2(02, "Toyota Supra", 2005);

    cout << "Car 1 is vintage: " << (car1.isVintage() ? "Yes" : "No") << endl;
    cout << "Car 2 is vintage: " << (car2.isVintage() ? "Yes" : "No") << endl;

    cout << "Renting Car 1..." << endl;
    car1.rentCar();
    cout << "Car 1 rented status: " << (car1.isRented ? "Yes" : "No") << endl;

    cout << "Returning Car 1..." << endl;
    car1.returnCar();
    cout << "Car 1 rented status: " << (car1.isRented ? "Yes" : "No") << endl;

    return 0;
}
