using namespace std;

int main() {
    int number, digit, sum = 0;

    cout << "Enter an integer number: ";
    cin >> number;

    // kira Hasil tambah
    digit = number % 10;
    cout << digit;
    sum = sum + digit;
    number = number / 10;

    do {
        digit = number % 10;
        cout << " + " << digit;
        sum = sum + digit;
        number = number / 10;
    } while (number != 0);

    cout << " = " << sum << endl;

    // check sama ada odd atau even number
    if (sum % 2 == 0){
        cout << sum << " is even number" << endl;
    }

    else{ 
        cout << sum << " is odd number" << endl;
    }

    // check sama ada multiple(s) of 4 dan/atau 5
    if (sum % 4 == 0 && sum % 5 == 0){
        cout << sum << " is multiples of 4 and 5" << endl;
    }

    else if (sum % 4 == 0){
        cout << sum << " is multiples of 4" << endl;
    }

    else if (sum % 5 == 0) {
        cout << sum << " is multiples of 5" << endl;
    }
  
      
    



    return 0;
}