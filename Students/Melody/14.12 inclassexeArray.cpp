#include <iostream>
#include <limits>

const int NUM_COUNTRIES = 5;
const int NUM_MEDALS = 3;


void readMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        std::cout << "Enter medals for Country " << (i + 1) << " (Gold Silver Bronze): ";
        for (int j = 0; j < NUM_MEDALS; ++j) {
            std::cin >> medals[i][j];
        }
                if (i == 3) {
            break;
        }

    }
}


int totalMedalsCountry3(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int total = 0;
    for (int j = 0; j < NUM_MEDALS; ++j) {
        total += medals[2][j];  
    }
    return total;
}


int largestMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int largest = std::numeric_limits<int>::min();
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        for (int j = 0; j < NUM_MEDALS; ++j) {
            if (medals[i][j] > largest) {
                largest = medals[i][j];
            }
        }
    }
    return largest;
}


int smallestMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int smallest = std::numeric_limits<int>::max();
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        for (int j = 0; j < NUM_MEDALS; ++j) {
            if (medals[i][j] < smallest) {
                smallest = medals[i][j];
            }
        }
    }
    return smallest;
}


int highestGoldMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int highestGold = std::numeric_limits<int>::min();
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        if (medals[i][0] > highestGold) {
            highestGold = medals[i][0];
        }
    }
    return highestGold;
}


int totalBronzeMedals(int medals[NUM_COUNTRIES][NUM_MEDALS]) {
    int totalBronze = 0;
    for (int i = 0; i < NUM_COUNTRIES; ++i) {
        totalBronze += medals[i][2];  
    }
    return totalBronze;
}

int main() {
    int medals[NUM_COUNTRIES][NUM_MEDALS];

   
    readMedals(medals);

   
    std::cout << "Total Medals for Country 3: " << totalMedalsCountry3(medals) << std::endl;
    std::cout << "Largest Number of Medals: " << largestMedals(medals) << std::endl;
    std::cout << "Smallest Number of Medals: " << smallestMedals(medals) << std::endl;
    std::cout << "Highest Number of Gold Medals: " << highestGoldMedals(medals) << std::endl;
    std::cout << "Total Number of Bronze Medals: " << totalBronzeMedals(medals) << std::endl;

    return 0;
}