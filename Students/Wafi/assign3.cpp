#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>

const int TEAMS = 3;
const int PARTICIPANTS_PER_TEAM = 4;
const int EVENTS = 5;

void displayLine() {
    for (int i = 0; i < 52; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}

void readInputFile(int marks[12][7]) {
    std::ifstream inputFile("input.1txt");

    if (!inputFile.is_open()) {
        std::cerr << "Sorry, input file does not exist! " << std::endl;
        std::cerr << "Press any key to continue... " << std::endl;
        exit(1);
    }

    for (int i = 0; i < TEAMS * PARTICIPANTS_PER_TEAM; i++) {
        for (int j = 0; j < EVENTS + 2; j++) {
            inputFile >> marks[i][j];
        }
    }

    inputFile.close();
}

void calculateTotals(int marks[][7], int participantTotals[], int teamTotals[]) {
    for (int i = 0; i < TEAMS * PARTICIPANTS_PER_TEAM; i++) {
        int total = 0;
        for (int j = 2; j < EVENTS + 2; j++) {
            total += marks[i][j];
        }
        participantTotals[i] = total;
        teamTotals[marks[i][0] - 1] += total;
    }
}

void displayResults(int marks[][7], int participantTotals[], int teamTotals[]) {
    displayLine();
    std::cout << std::setw(0) << "ID";
    std::cout << std::setw(7) << "E1" << std::setw(5) << "E2" << std::setw(5) << "E3";
    std::cout << std::setw(5) << "E4" << std::setw(5) << "E5";
    std::cout << std::setw(12) << "Total" << std::endl;

    for (int teamIndex = 0; teamIndex < TEAMS; teamIndex++) {
        displayLine();
        std::cout << "Team " << (teamIndex + 1) << std::endl;

        for (int i = teamIndex * PARTICIPANTS_PER_TEAM; i < (teamIndex + 1) * PARTICIPANTS_PER_TEAM; i++) {
            std::cout << std::setw(0) << marks[i][1];

            for (int j = 2; j < EVENTS + 2; j++) {
                std::cout << std::setw(5) << marks[i][j];
            }

            std::cout << std::setw(10) << participantTotals[i] << std::endl;
        }

        std::cout << "Total" << std::setw(35) << teamTotals[teamIndex] << std::endl;
    }

    displayLine();
    int findindWinner = std::distance(participantTotals, std::max_element(participantTotals, participantTotals + TEAMS * PARTICIPANTS_PER_TEAM));
    std::cout << "Winner for Individual Category: " << marks[findindWinner][1] << " (Team  " << marks[findindWinner][0] << ")" << std::endl;

    int findteamWinner = std::distance(teamTotals, std::max_element(teamTotals, teamTotals + TEAMS));
    std::cout << "Winner for Group Category: Team " << (findteamWinner + 1) << " (Score = " << teamTotals[findteamWinner] << ")" << std::endl;

    std::cout << "Press any key to continue... " << std::endl;
}

int main() {
    int marks[TEAMS * PARTICIPANTS_PER_TEAM][EVENTS + 2] = {0};
    int participantTotals[TEAMS * PARTICIPANTS_PER_TEAM] = {0};
    int teamTotals[TEAMS] = {0};

    readInputFile(marks);
    calculateTotals(marks, participantTotals, teamTotals);
    displayResults(marks, participantTotals, teamTotals);

    return 0;
}
