#include <iostream>
using namespace std;

const int NUM_COUNTRIES = 5;
const int NUM_MEDALS = 3;

void readMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    cout << "Enter the number of medals for each country:" << endl;
    for (int i = 0; i < NUM_COUNTRIES; i++) {
        cout << "Country " << i + 1 << ":" << endl;
        for (int j = 0; j < NUM_MEDALS; j++) {
            cout << "Medal " << j + 1 << ": ";
            cin >> medals[i][j];
        }
    }
}

int getTotalMedalsCountry3(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int totalMedals = 0;
    for (int j = 0; j < NUM_MEDALS; j++) {
        totalMedals += medals[2][j];
    }
    return totalMedals;
}

int getLargestMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int largestMedals = medals[0][0];
    for (int i = 0; i < NUM_COUNTRIES; i++) {
        for (int j = 0; j < NUM_MEDALS; j++) {
            if (medals[i][j] > largestMedals) {
                largestMedals = medals[i][j];
            }
        }
    }
    return largestMedals;
}

int getSmallestMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int smallestMedals = medals[0][0];
    for (int i = 0; i < NUM_COUNTRIES; i++) {
        for (int j = 0; j < NUM_MEDALS; j++) {
            if (medals[i][j] < smallestMedals) {
                smallestMedals = medals[i][j];
            }
        }
    }
    return smallestMedals;
}

int getHighestGoldMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int highestGoldMedals = medals[0][0];
    for (int i = 0; i < NUM_COUNTRIES; i++) {
        if (medals[i][0] > highestGoldMedals) {
            highestGoldMedals = medals[i][0];
        }
    }
    return highestGoldMedals;
}

int getTotalBronzeMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int totalBronzeMedals = 0;
    for (int i = 0; i < NUM_COUNTRIES; i++) {
        totalBronzeMedals += medals[i][2];
    }
    return totalBronzeMedals;
}

int main() {
    int medals[NUM_COUNTRIES][NUM_MEDALS];

    readMedals(medals);

    int totalMedalsCountry3 = getTotalMedalsCountry3(medals);
    int largestMedals = getLargestMedals(medals);
    int smallestMedals = getSmallestMedals(medals);
    int highestGoldMedals = getHighestGoldMedals(medals);
    int totalBronzeMedals = getTotalBronzeMedals(medals);

    cout << "Total medals won by Country 3: " << totalMedalsCountry3 << endl;
    cout << "Largest number of medals won: " << largestMedals << endl;
    cout << "Smallest number of medals won: " << smallestMedals << endl;
    cout << "Highest number of gold medals won: " << highestGoldMedals << endl;
    cout << "Total number of bronze medals won: " << totalBronzeMedals << endl;

    return 0;
}

