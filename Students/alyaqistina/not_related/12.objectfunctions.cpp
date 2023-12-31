//OBJECT FUNCTIONS 

#include <iostream>
using namespace std;

class Students
{
    public:
        string name;
        string major;
        double gpa;

        Students(string aName, string aMajor, double aGpa)//this is constructor
        {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool firstClass()
        {
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }


};

int main()
{
    Students S1("Sarah","Math",3.99);
    Students S2("Kal", "Science", 3.49);

    cout << S1.firstClass();
         //OUTPUT = 1 [means true, Sarah is first class bcs gpa Sarah >= 3.5]



    return 0;
}