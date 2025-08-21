
#include <iostream>
#include <string>
using namespace std;



class Car{
    public:
    string brand;
    int speed;

    void displayCarInfo(){
        cout << "i have this brand " << brand << " it can achieve top speed of " << speed << endl;

    }
    
};


int main(){


    Car c1;

    c1.brand="BMW";

    c1.speed=350;

    c1.displayCarInfo();

    Car c2;

    
    c2.brand="mercedes";

    c2.speed=400;

    c2.displayCarInfo();



    return 0;


}
