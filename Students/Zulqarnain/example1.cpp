#include <iostream>
#include <string>

using namespace std;

void setType(string &type) {      //1st mistake
   // only exit the loop after user enter valid
   // car type that are "sedan" or "mpv"
   do {
        cout << "\nEnter car type (sedan/mpv): ";
        cin >> type;

   } while (type.compare("sedan") && type.compare("mpv"));

   cout << endl;
}
int main() {
    // car type
    string carType;

    // car wash service package
    int wsPkg;

    // total service charge based on car type and
    // wash service package
    float totalCharge;

    setType(carType);
    cout<<carType;

    return 0;
}