#include <iostream>
using namespace std;

void read_medals(int medals[4][3]) {
    for (int i = 0; i < 4; i++) {
        cout << "Enter the number of medals for Country " << i + 1 << endl;
        cout << "Gold: ";
        cin >> medals[i][0];
        cout << "Silver: ";
        cin >> medals[i][1];
        cout << "Bronze: ";
        cin >> medals[i][2];
    }
}

int total_medals_country3(const int medals[4][3]) {
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += medals[2][i];
    }
    return total;
}

int largest_medal_count(const int medals[4][3]) {
    int largest = 0;
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += medals[i][j];
        }
        if (total > largest) {
            largest = total;
        }
    }
    return largest;
}

int smallest_medal_count(const int medals[4][3]) {
    int smallest = INT_MAX;
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += medals[i][j];
        }
        if (total < smallest) {
            smallest = total;
        }
    }
    return smallest;
}

int highest_gold_medals(const int medals[4][3]) {
    int highest = 0;
    for (int i = 0; i < 4; i++) {
        if (medals[i][0] > highest) {
            highest = medals[i][0];
        }
    }
    return highest;
}

int total_bronze_medals(const int medals[4][3]) {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += medals[i][2];
    }
    return total;
}

int main() {
    int medals[4][3];
    read_medals(medals);

    cout << "Total medals won by Country 3: " << total_medals_country3(medals) << endl;
    cout << "Largest number of medals won: " << largest_medal_count(medals) << endl;
    cout << "Smallest number of medals won: " << smallest_medal_count(medals) << endl;
    cout << "Highest number of gold medals won: " << highest_gold_medals(medals) << endl;
    cout << "Total number of bronze medals won: " << total_bronze_medals(medals) << endl;

    return 0;
}
