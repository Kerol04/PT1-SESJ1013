#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<double> monthlyRainfall(12);
    double totalRainfall = 0.0;
    int monthWithMostRain = 0;
    int monthWithLeastRain = 0;
    double maxRainfall = 0.0;
    double minRainfall = 0.0;

    // Input
    for (int i = 0; i < 12; i++) {
        std::cout << "Enter the total rainfall for month " << (i + 1) << ": ";
        while (!(std::cin >> monthlyRainfall[i])) {
            std::cout << "Error: Enter a non-negative number. Try again: ";
            std::cin.clear();
            std::cin.ignore(123, '\n');
        }

        if (monthlyRainfall[i] > maxRainfall) {
            maxRainfall = monthlyRainfall[i];
            monthWithMostRain = i + 1;
        }

        if (monthlyRainfall[i] < minRainfall || i == 0) {
            minRainfall = monthlyRainfall[i];
            monthWithLeastRain = i + 1;
        }

        totalRainfall += monthlyRainfall[i];
    }

    // Calculate average monthly rainfall
    double averageMonthlyRainfall = totalRainfall / 12;

    // Output
    std::cout << "Total rainfall for the year: " << totalRainfall << std::endl;
    std::cout << "Average monthly rainfall: " << averageMonthlyRainfall << std::endl;
    std::cout << "Month with the most rainfall: " << monthWithMostRain << " with " << maxRainfall << " mm" << std::endl;
    std::cout << "Month with the least rainfall: " << monthWithLeastRain << " with " << minRainfall << " mm" << std::endl;

    return 0;
}
