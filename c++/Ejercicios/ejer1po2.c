#include <stdio.h>


//Funciones
void teamDistributor();
int createTeams();

//Variables globales

double optimalTeamStrength;
double bestTeamStrengthDifference;
//int bestTeam[];



int main() {

    int players[] = {8, 8, 9, 6, 1, 7, 1, 3, 7, 5};
    int longitud = sizeof(players) / sizeof(players[0]);
    teamDistributor(players, longitud);
    createTeams(longitud);

    return 0;
}


void teamDistributor(int players[], int longitud){

        //calculate the total strength of all players combined
        double totalStrength = 0;
        for (int i=0; i<longitud; i++) {
            totalStrength += i;
        }
        //calculate the optimal strength for a team
        optimalTeamStrength = totalStrength / 2;
        printf("Optimal: %f", optimalTeamStrength);
}


int createTeams(int longuitud){

        int playersPerTeam = longuitud / 2;
        //find the optimal team
        bestTeamStrengthDifference = 0;
        createOptimalTeam(new int[playersPerTeam], 0);

        //the best team1 is in the global variable bestTeam
        //now create team2
        int team2[] = new int[playersPerTeam];
        int index = 0;
        for (int i = 0; i < players.length; i++) {
            if (!containsPlayer(bestTeam, i)) {
                team2[index] = i;
                index++;
            }
        }

        //return team 1 and 2 as int[2][players/2]
        return new int[][] {bestTeam, team2};
}
