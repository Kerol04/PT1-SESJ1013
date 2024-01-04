#include <iostream>
#include <fstream>

using namespace std;

const int NUM_TEAMS = 3;
const int NUM_PARTICIPANTS_PER_TEAM = 4;
const int NUM_EVENTS = 5;


void displayLine() {
    cout << "----------------------------------------" << endl;
}


int calculateParticipantTotalScore(int marks[][NUM_EVENTS], int teamId, int participantId) {
    int totalScore = 0;
    for (int i = 0; i < NUM_EVENTS; i++) {
        totalScore += marks[teamId][participantId * NUM_EVENTS + i];
    }
    return totalScore;
}


int calculateTeamTotalScore(int marks[][NUM_EVENTS], int teamId) {
    int totalScore = 0;
    for (int i = 0; i < NUM_PARTICIPANTS_PER_TEAM; i++) {
        totalScore += calculateParticipantTotalScore(marks, teamId, i);
    }
    return totalScore;
}


void findIndWinner(int marks[][NUM_EVENTS]) {
    int maxScore = -1;
    int maxParticipantId = -1;
    for (int i = 0; i < NUM_TEAMS; i++) {
        for (int j = 0; j < NUM_PARTICIPANTS_PER_TEAM; j++) {
            int totalScore = calculateParticipantTotalScore(marks, i, j);
            if (totalScore > maxScore) {
                maxScore = totalScore;
                maxParticipantId = j;
            }
        }
    }
    cout << "Winner for the individual category: Participant " << maxParticipantId + 1 << " of Team " << maxParticipantId / NUM_PARTICIPANTS_PER_TEAM + 1 << endl;
}


void findTeamWinner(int marks[][NUM_EVENTS]) {
    int maxScore = -1;
    int maxTeamId = -1;
    for (int i = 0; i < NUM_TEAMS; i++) {
        int totalScore = calculateTeamTotalScore(marks, i);
        if (totalScore > maxScore) {
            maxScore = totalScore;
            maxTeamId = i;
        }
    }
    cout << "Winner for the group category: Team " << maxTeamId + 1 << endl;
}

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Error: Failed to open the input file." << endl;
        return 1;
    }

    int marks[NUM_TEAMS * NUM_PARTICIPANTS_PER_TEAM][NUM_EVENTS];

    for (int i = 0; i < NUM_TEAMS * NUM_PARTICIPANTS_PER_TEAM; i++) {
        for (int j = 0; j < NUM_EVENTS; j++) {
            inputFile >> marks[i][j];
        }
    }

    inputFile.close();

   
    for (int i = 0; i < NUM_TEAMS * NUM_PARTICIPANTS_PER_TEAM; i++) {
        int teamId = i / NUM_PARTICIPANTS_PER_TEAM + 1;
        int participantId = i % NUM_PARTICIPANTS_PER_TEAM + 1;

        cout << "Team ID: " << teamId << endl;
        cout << "Participant ID: " << participantId << endl;

        cout << "Scores for the events (E1, E2, E3, E4, E5): ";
        for (int j = 0; j < NUM_EVENTS; j++) {
            cout << marks[i][j] << " ";
        }
        cout << endl;

        int totalScore = calculateParticipantTotalScore(marks, teamId - 1, participantId - 1);
        cout << "Total score for the participant: " << totalScore << endl;

        displayLine();
    }


    for (int i = 0; i < NUM_TEAMS; i++) {
        int teamId = i + 1;
        int totalScore = calculateTeamTotalScore(marks, i);
        cout << "Total score for Team " << teamId << ": " << totalScore << endl;
    }

    displayLine();


    findIndWinner(marks);
    findTeamWinner(marks);

    return 0;
}
