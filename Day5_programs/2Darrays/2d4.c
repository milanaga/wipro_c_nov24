/* to get output in below format

----------------------------
JERSY-NUMBER	RUNCS-SCORED
----------------------------
123				45
 31				99
  7				08
 32				28
777				87
*/

#include <stdio.h>

void readDetailsOfPlayers(int ptr[11][2])
{
    puts("Enter Jersy Number and the runs scored by the 11 players:");
    for (int i = 0; i < 11; i++)
    {
        printf("Enter Jersy Number of player-%d: ", i + 1);
        scanf("%d", &ptr[i][0]);
        printf("Enter runs scored by player-%d: ", i + 1);
        scanf("%d", &ptr[i][1]);
    }
}

void printDetailsOfPlayers(int players[11][2], int rows, int columns)
{
    printf("----------------------------\n");
    printf("JERSY-NUMBER\tRUNS-SCORED\n");
    printf("----------------------------\n");
    for (int i = 0; i < rows; i++)
    {
        printf("%-10d\t%02d\n", players[i][0], players[i][1]);
    }
}

int findSumOfRuns(int *ptr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(ptr + i * 2 + 1); // Access the "runs scored" column
    }
    return sum;
}

int main()
{
    int playerDetails[11][2] = {{0}}; // 11 rows and 2 columns
    readDetailsOfPlayers(playerDetails);
    printDetailsOfPlayers(playerDetails, 11, 2);
    
    // Calculate and display the total runs scored
    int totalRuns = findSumOfRuns((int *)playerDetails, 11);
    printf("----------------------------\n");
    printf("Total runs scored by all players: %d\n", totalRuns);

    return 0;
}
