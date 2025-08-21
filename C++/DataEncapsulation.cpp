

#include <iostream>

using namespace std;


class BankBalance{
    private:
    double bankBalance;

    public:

    void setbalance(double balance){
        if(balance == 0){
            cout << "invalid amount" << endl;
            bankBalance=0;
        }else {
            bankBalance = balance;
        }
    }

    void getbalance(){
        cout << "total available amount " << bankBalance << endl;
    }
};


int main(){

    BankBalance b1;

    b1.setbalance(0);

    b1.getbalance();


    return 0;

}