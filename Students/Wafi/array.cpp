#include <iostream>
#include <limits>
using namespace std;

const int COUNTRIES = 4; // Number of countries
const int MEDAL_TYPES = 3; // Number of medal types (Gold, Silver, Bronze)

// Function to read medals for each country
void readMedals(int medals[COUNTRIES][MEDAL_TYPES]) {
    for (int i = 0; i < COUNTRIES; ++i) {
        cout << "Enter medals for Country " << i + 1 << " (Gold Silver Bronze): ";
        for (int j = 0; j < MEDAL_TYPES; ++j) {
            cin >> medals[i][j];
        }
    }
}

// Function to return total medals won by a specific country
int totalMedalsByCountry(int medals[COUNTRIES][MEDAL_TYPES], int countryIndex) {
    int total = 0;
    for (int i = 0; i < MEDAL_TYPES; ++i) {
        total += medals[countryIndex][i];
    }
    return total;
}

// Function to return the largest number of medals won
int largestNumberOfMedals(int medals[COUNTRIES][MEDAL_TYPES]) {
    int largest = numeric_limits<int>::min();
    for (int i = 0; i < COUNTRIES; ++i) {
        for (int j = 0; j < MEDAL_TYPES; ++j) {
            largest = max(largest, medals[i][j]);
        }
    }
    return largest;
}

// Function to return the smallest number of medals won
int smallestNumberOfMedals(int medals[COUNTRIES][MEDAL_TYPES]) {
    int smallest = numeric_limits<int>::max();
    for (int i = 0; i < COUNTRIES; ++i) {
        for (int j = 0; j < MEDAL_TYPES; ++j) {
            smallest = min(smallest, medals[i][j]);
        }
    }
    return smallest;
}

// Function to return the highest number of gold medals won
int highestGoldMedal(int medals[COUNTRIES][MEDAL_TYPES]) {
    int highestGold = numeric_limits<int>::min();
    for (int i = 0; i < COUNTRIES; ++i) {
        highestGold = max(highestGold, medals[i][0]);
    }
    return highestGold;
}

// Function to return the total number of bronze medals won
int totalBronzeMedals(int medals[COUNTRIES][MEDAL_TYPES]) {
    int totalBronze = 0;
    for (int i = 0; i < COUNTRIES; ++i) {
        totalBronze += medals[i][2];
    }
    return totalBronze;
}

int main() {
    int medals[COUNTRIES][MEDAL_TYPES];

    // Read medals data
    readMedals(medals);

    // Display results
    cout << "Total medals won by Country 3: " << totalMedalsByCountry(medals, 2) << endl;
    cout << "Largest number of medals won: " << largestNumberOfMedals(medals) << endl;
    cout << "Smallest number of medals won: " << smallestNumberOfMedals(medals) << endl;
    cout << "Highest number of gold medals won: " << highestGoldMedal(medals) << endl;
    cout << "Total number of bronze medals won: " << totalBronzeMedals(medals) << endl;

    return 0;
}
