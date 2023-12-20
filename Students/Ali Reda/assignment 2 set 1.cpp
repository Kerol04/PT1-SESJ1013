#include <iostream>
using namespace std;
int main()
{
    char c;

    do
    {
        double w, h, BMR;
        int a;
        char g;
        cout << "Enter the weight: ";
        cin >> w;
        cout << "Enter the hight: ";
        cin >> h;
        cout << "Enter the gender 'M' or 'F': ";
        cin >> g;
        cout << "Enter the age: ";
        cin >> a;
        while (a < 15 || a > 80)
        {
            cout << "Enter the age again: ";
            cin >> a;
        }
        if (g == 'M')
        {
            BMR = 88.362 + (13.397 * w) + (4.799 * h) - (5.677 * a);
        }
        else
        {
            BMR = 447.593 + (9.247 * w) + (3.098 * h) - (4.33 * a);
        }
        cout << BMR << endl;
        cout << "Calculate another BMR? (Y,N) ";
        cin >> c;
    } while (c == 'Y');
    cout << "END";
}