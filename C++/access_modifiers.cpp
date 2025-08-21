

#include <iostream>

using namespace std;


class Student{
    private:
    int GeneralId;

    public:

    void setGeneralId( int id){
        GeneralId=id;
    }


    void getStudentGeneralId(){
        
        cout << "student general id " << GeneralId << endl;
        
    }



};


int main(){

    Student s1;
    


    s1.setGeneralId(24);

    s1.getStudentGeneralId();

    return 0;

}