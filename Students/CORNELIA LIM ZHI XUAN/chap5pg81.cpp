#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

const int COUNTRIES = 4;
const int MEDAL_TYPES = 3;

// Function to read the number of medals for each country
void readMedals(int medals[COUNTRIES][MEDAL_TYPES]) {
    for (int i = 0; i < COUNTRIES; ++i) {
        cout << "Enter medals for Country " << i + 1 << " (Gold Silver Bronze): ";
        for (int j = 0; j < MEDAL_TYPES; ++j) {
            cin >> medals[i][j];
        }
    }
}

// Function to return the total number of medals won by country 3
int totalMedalsCountry3(const int medals[COUNTRIES][MEDAL_TYPES]) {
    return medals[2][0] + medals[2][1] + medals[2][2];
}

// Function to return the largest number of medals won
int largestMedals(const int medals[COUNTRIES][MEDAL_TYPES]) {
    return *max_element(&medals[0][0], &medals[0][0] + COUNTRIES * MEDAL_TYPES);
}

// Function to return the smallest number of medals won
int smallestMedals(const int medals[COUNTRIES][MEDAL_TYPES]) {
    int minMedals = numeric_limits<int>::max();
    for (int i = 0; i < COUNTRIES; ++i) {
        for (int j = 0; j < MEDAL_TYPES; ++j) {
            minMedals = min(minMedals, medals[i][j]);
        }
    }
    return minMedals;
}

// Function to return the highest number of gold medals won
int highestGoldMedals(const int medals[COUNTRIES][MEDAL_TYPES]) {
    int maxGold = numeric_limits<int>::min();
    for (int i = 0; i < COUNTRIES; ++i) {
        maxGold = max(maxGold, medals[i][0]);  // Assuming gold is always at index 0
    }
    return maxGold;
}

// Function to return the total number of bronze medals won
int totalBronzeMedals(const int medals[COUNTRIES][MEDAL_TYPES]) {
    int totalBronze = 0;
    for (int i = 0; i < COUNTRIES; ++i) {
        totalBronze += medals[i][2];  // Assuming bronze is always at index 2
    }
    return totalBronze;
}

int main() {
    // Example data
    int medalsData[COUNTRIES][MEDAL_TYPES];

    // Uncomment the following line to take input from the user
    // readMedals(medalsData);

    // Example data for testing
    int exampleData[COUNTRIES][MEDAL_TYPES] = {
        {129, 257, 590},
        {120, 279, 394},
        {115, 290, 123},
        {98, 209, 112},
    };

    cout << "Total number of medals won by Country 3: " << totalMedalsCountry3(exampleData) << endl;
    cout << "Largest number of medals won: " << largestMedals(exampleData) << endl;
    cout << "Smallest number of medals won: " << smallestMedals(exampleData) << endl;
    cout << "Highest number of gold medals won: " << highestGoldMedals(exampleData) << endl;
    cout << "Total number of bronze medals won: " << totalBronzeMedals(exampleData) << endl;

    return 0;
}

