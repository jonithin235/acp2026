#include <stdio.h>
typedef struct {
    char player_name[100];
    int jersey_number;
    float runs_scored;
} Player;

void readPlayers(int n, Player p[]);
float calculateAverageRuns(int n, Player p[]);

int main(){
    int n=11;
    Player play[n];
    readPlayers(n,play);
    float average=calculateAverageRuns(n,play);
    printf("the average runs scored by the team is %.2f",average);
    return 0;

}
void readPlayers(int n,Player p[]){
    for(int i=0;i<n;i++){
        printf("enter the players name,jersey number and runs scored:\n");
        scanf("%s %d %f", p[i].player_name, &p[i].jersey_number, &p[i].runs_scored);
    }
}

float calculateAverageRuns(int n, Player p[]){
    float total_runs=0;
    for(int i=0;i<n;i++){
        total_runs+=p[i].runs_scored;
    }
    return total_runs/n;
}