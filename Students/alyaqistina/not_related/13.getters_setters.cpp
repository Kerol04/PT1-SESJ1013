//GETTERS AND SETTERS

//public can be access by any code
//private is opposite


#include <iostream>
using namespace std;

class Clothes
{
    private :
        char size;

    public :
        string color;
        string brands;

    Clothes(string aColor, char aSize, string aBrands)
    {
        color = aColor;
        setSize(aSize)
        brands = aBrands;
    }

    void setSize(char aSize)
    {
        if(size=='S'||size=='M'||size=='L')
        {
            size = aSize;
        }
        else
        {
            size = 'X';
        }

    }

    char getSize(){
        return size;
    }

};

int main ()
{
    
    Clothes C1("Black", 'M', "VANS" );
    Clothes C2("Pink", 'L', "Siti Khadijah");

    C1.setSize('K');
       //EX : if kita update size tapi tak invalid, dia akan pergi function getSize

    cout << C2.brands;
         //OUTPUT = Siti Khadijah

    cout << C1.getSize();



    return 0;
}