#include <iostream>
#define countrynum 4
#define medaltype 3

void readMedal(int Medal[countrynum][medaltype]);
int sumMedalCountry3(int Medal[countrynum][medaltype]);
int findLargestMedal(int Medal[countrynum][medaltype]);
int findSmallestMedal(int Medal[countrynum][medaltype]);
int highestGoldMedal(int Medal[countrynum][medaltype]);
int totalBronzeMedal(int Medal[countrynum][medaltype]);

using namespace std;

int main() {
    int Medal[countrynum][medaltype];

    readMedal(Medal);
    
  

    cout << "The Total Medals Won by Country 3: " << sumMedalCountry3(Medal) << endl;
    cout << "The Largest Number of Medals won: " << findLargestMedal(Medal) << endl;
    cout << "The Smallest Number of Medals won: " << findSmallestMedal(Medal) << endl;
    cout << "The Highest Number of Gold medals won: " << highestGoldMedal(Medal) << endl;
    cout << "The Total Number of Bronze medals won: " << totalBronzeMedal(Medal) << endl;

    return 0;
}

void readMedal(int Medal[countrynum][medaltype]) {
    for (int i = 0; i < countrynum; i++) {
        cout << "Enter the Number of Medal for Country " << i + 1 << endl;
        cout << "Gold: ";
        cin >> Medal[i][0];
        cout << "Silver: ";
        cin >> Medal[i][1];
        cout << "Bronze: ";
        cin >> Medal[i][2];
        cout << "\n";
    }
}


int sumMedalCountry3(int Medal[countrynum][medaltype]) {
    int sum = 0;
    for (int j = 0; j < medaltype; j++) {
        sum += Medal[2][j];
    }
    return sum;
}

int findLargestMedal(int Medal[countrynum][medaltype]) {
    int largest = Medal[0][0];
    for (int i = 0; i < countrynum; i++) {
        for (int j = 0; j < medaltype; j++) {
            if (Medal[i][j] > largest)
                largest = Medal[i][j];
        }
    }
    return largest;
}

int findSmallestMedal(int Medal[countrynum][medaltype]) {
    int smallest = Medal[0][0];
    for (int i = 0; i < countrynum; i++) {
        for (int j = 0; j < medaltype; j++) {
            if (Medal[i][j] < smallest)
                smallest = Medal[i][j];
        }
    }
    return smallest;
}

int highestGoldMedal(int Medal[countrynum][medaltype]) {
    int highest = Medal[0][0];
    for (int i = 0; i < countrynum; i++) {
        if (Medal[i][0] > highest)
            highest = Medal[i][0];
    }
    return highest;
}

int totalBronzeMedal(int Medal[countrynum][medaltype]) {
    int total = 0;
    for (int i = 0; i < countrynum; i++) {
        total += Medal[i][2];
    }
    return total;
}
