
#include <iostream>


using namespace std;


class StudentId{
    private:
    int rollNo;

    public:
    StudentId(int rollNo){
        this->rollNo = rollNo;
    }

    void displayRollNo(){
        cout << this->rollNo << endl;
    }
};

int main(){

    StudentId s1(24);
    StudentId s2(25);



    s1.displayRollNo();

    s2.displayRollNo();

    return 0;



}






