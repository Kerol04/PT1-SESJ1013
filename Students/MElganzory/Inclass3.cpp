#include <iostream>
using namespace std;
const int NUM_COUNTRIES = 4;
const int NUM_MEDAL_TYPES = 3;

void readMedals(int medals[NUM_COUNTRIES][NUM_MEDAL_TYPES]) {
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        cout << "Enter medals for country " << (i + 1) << " (Gold Silver Bronze): ";
        for (int j = 0; j < NUM_MEDAL_TYPES; ++j) {
            cin >> medals[i][j];
        }
    }
}

int totalMedalsCountry3(const int medals[NUM_COUNTRIES][NUM_MEDAL_TYPES]) {
    int total = 0;
    for (int i = 0; i < NUM_MEDAL_TYPES; ++i) {
        total += medals[2][i];
    }
    return total;
}

int largestMedals(const int medals[NUM_COUNTRIES][NUM_MEDAL_TYPES]) {
    int largest = medals[0][0];
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        for (int j = 0; j < NUM_MEDAL_TYPES; ++j) {
            largest = (medals[i][j] > largest) ? medals[i][j] : largest;
        }
    }
    return largest;
}

int smallestMedals(const int medals[NUM_COUNTRIES][NUM_MEDAL_TYPES]) {
    int smallest = medals[0][0];
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        for (int j = 0; j < NUM_MEDAL_TYPES; ++j) {
            smallest = (medals[i][j] < smallest) ? medals[i][j] : smallest;
        }
    }
    return smallest;
}

int highestGoldMedal(const int medals[NUM_COUNTRIES][NUM_MEDAL_TYPES]) {
    int highestGold = medals[0][0];
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        highestGold = (medals[i][0] > highestGold) ? medals[i][0] : highestGold;
    }
    return highestGold;
}

int totalBronzeMedals(const int medals[NUM_COUNTRIES][NUM_MEDAL_TYPES]) {
    int totalBronze = 0;
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        totalBronze += medals[i][2];
    }
    return totalBronze;
}

int main() {
    int medals[NUM_COUNTRIES][NUM_MEDAL_TYPES];

    readMedals(medals);

    cout << "Total medals for country 3: " << totalMedalsCountry3(medals) <<endl;
    cout << "Largest number of medals won: " << largestMedals(medals) << endl;
    cout << "Smallest number of medals won: " << smallestMedals(medals) <<endl;
    cout << "Highest number of gold medals won: " << highestGoldMedal(medals) <<endl;
   cout << "Total number of bronze medals won: " << totalBronzeMedals(medals) <<endl;

    return 0;
}
