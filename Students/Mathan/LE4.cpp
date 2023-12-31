#include <iostream>
using namespace std;

const int MONTHS = 12;

int main() {
    double rainfall[MONTHS];
    double totalRainfall = 0;
	double averageRainfall;
    for (int i = 0; i < MONTHS; ++i) {
        do {
            cout << "Enter the total rainfall for Month " << i + 1 << " : ";
            cin >> rainfall[i];

            if (rainfall[i] < 0) {
                cout << "Please enter a non-negative value for rainfall." << endl;
            }
        } while (rainfall[i] < 0);

        totalRainfall += rainfall[i];
    }

    cout << "\nTotal rainfall for the year: " << totalRainfall  << endl;
    averageRainfall = totalRainfall / MONTHS;
    cout << "Average monthly rainfall: " << averageRainfall << endl;
    
	double highestRainfall = rainfall[0];
    int highestMonth = 0;
    for (int i = 0; i < MONTHS; ++i) {
        if (rainfall[i] > highestRainfall) {
            highestRainfall = rainfall[i];
            highestMonth = i;
        }
    }
    cout << "Month with the highest rainfall: Month " << highestMonth + 1 << " (" << highestRainfall << ")" << endl;

    double lowestRainfall = rainfall[0];
    int lowestMonth = 0;
    for (int i = 0; i < MONTHS; ++i) {
        if (rainfall[i] < lowestRainfall) {
            lowestRainfall = rainfall[i];
            lowestMonth = i;
        }
    }
    cout << "Month with the lowest rainfall: Month " << lowestMonth + 1 << " (" << lowestRainfall << ")" <<endl;

    return 0;
}