#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

const int Countries = 4;
const int typeMedal = 3;

// Function prototypes
void readMedals(int medals[Countries][typeMedal]);
int totalMedalsCountry3(const int medals[Countries][typeMedal]);
int largestMedals(const int medals[Countries][typeMedal]);
int smallestMedals(const int medals[Countries][typeMedal]);
int highestGoldMedals(const int medals[Countries][typeMedal]);
int totalBronzeMedals(const int medals[Countries][typeMedal]);

int main() {
    int medalsData[Countries][typeMedal];
    readMedals(medalsData);

    cout << "Total number of medals won by Country 3: " << totalMedalsCountry3(medalsData) << endl;
    cout << "Largest number of medals won: " << largestMedals(medalsData) << endl;
    cout << "Smallest number of medals won: " << smallestMedals(medalsData) << endl;
    cout << "Highest number of gold medals won: " << highestGoldMedals(medalsData) << endl;
    cout << "Total number of bronze medals won: " << totalBronzeMedals(medalsData) << endl;

 system("pause");
    return 0;
}

// Function to read the number of medals for each country
void readMedals(int medals[Countries][typeMedal]) {
    for (int i = 0; i < Countries; ++i) {
        cout << "Enter medals for Country " << i + 1 << " (Gold Silver Bronze): ";
        for (int j = 0; j < typeMedal; ++j) {
            cin >> medals[i][j];
        }
    }
}

// Function to return the total number of medals won by country 3
int totalMedalsCountry3(const int medals[Countries][typeMedal]) {
    return medals[2][0] + medals[2][1] + medals[2][2];
}

// Function to return the largest number of medals won
int largestMedals(const int medals[Countries][typeMedal]) {
    return *max_element(&medals[0][0], &medals[0][0] + Countries * typeMedal);
}

// Function to return the smallest number of medals won
int smallestMedals(const int medals[Countries][typeMedal]) {
    int minMedals = numeric_limits<int>::max();
    for (int i = 0; i < Countries; ++i) {
        for (int j = 0; j < typeMedal; ++j) {
            minMedals = min(minMedals, medals[i][j]);
        }
    }
    return minMedals;
}

// Function to return the highest number of gold medals won
int highestGoldMedals(const int medals[Countries][typeMedal]) {
    int maxGold = numeric_limits<int>::min();
    for (int i = 0; i < Countries; ++i) {
        maxGold = max(maxGold, medals[i][0]);  // Assuming gold is always at index 0
    }
    return maxGold;
}

// Function to return the total number of bronze medals won
int totalBronzeMedals(const int medals[Countries][typeMedal]) {
    int totalBronze = 0;
    for (int i = 0; i < Countries; ++i) {
        totalBronze += medals[i][2];  // Assuming bronze is always at index 2
    }
    return totalBronze;
}
