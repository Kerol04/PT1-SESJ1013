#include <iostream>
using namespace std;

int calc(int a, int w, int h)
{
    int g;
    double bmr;
    cout << "Enter gender (M/F): ";
    cin >> g;
    //option of gender
    if (g==M)
    {
      bmr =  (10*w) + (6.25*h) - (5*a) + 5;
    }
    else
    {
        bmr = (10*w) + (6.25*h) - (5*a) - 161;
    }
    
    return bmr;

}

int main()
{
    int a;
    int w;
    int h;

    cout << "Enter age: ";
    cin >> a;
    cout << "Your age is: "<< a;

    while ((a>14) && (a<81))
    {
        cout << "\nEnter weight: ";
        cin >> w;
        cout << "\nEnter height: ";
        cin >> h;
        calc(w, h);

        



    }
    



    return 0;

}