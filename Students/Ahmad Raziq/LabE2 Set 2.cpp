#include <iostream>

using namespace std;

int main(){
    int apea,ape = 0,sum = 0;

    cout << "Enter an integer number: ";
    cin >> apea;

    while (apea > 0)
    {
        ape = apea%10;
        apea = apea/10;

        sum = sum + ape;
    }
    cout << "Sum = " << sum;
    cout << endl;
    
    if (sum %2 == 0){
        cout << sum << " is an even number";
    } else{
        cout << sum << " is an odd number";
    }

    cout << endl;

    if (sum %4 == 0){
        cout << sum << " can be divided with 4 \n";
    }

    if (sum %5 == 0){
        cout << sum << " can be divided with 5 \n";
    }

    cout<<endl;
    system("pause");

    return 0;
}