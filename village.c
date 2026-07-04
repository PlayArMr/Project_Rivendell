#include <stdio.h>
void start();
void stay_in_inn();
void run_away();
void fight_men();
void defeat_men();
void meet_elderman();
void leave_town();


void start()
{
    printf("You are tired, your horse is weary and hungry, along with you. You Enter the Tavern.\n");
    printf("All of a sudden galloping of horses is heard outside and the populace of the town shout, as goons enter the city to raid and pillage.\n\n");
    printf("1. Fight Men \n 2. Stay in Inn \n 3. Run Away \n");
    int choice = 0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        fight_men();
        break;
        case 2:
        stay_in_inn(); break;
        case 3:
        run_away(); break;
        default:
        printf("Invalid Choice\n");
        start();
    }
}
void stay_in_inn()
{
    printf("You decide it's safer to stay inside. You bar the door and wait it out.\n");
    printf("But the goons break down the door of the tavern anyway, dragging everyone out one by one.\n");
    printf("There is nowhere to run. They kill everyone in the tavern, including you.\n\n");
    printf("YOU DIED.\n");
}

void run_away()
{
    printf("You rush outside, mount your horse, and ride hard away from the chaos.\n");
    printf("But the goons are faster, and better mounted. They catch up to you on the open road.\n");
    printf("Your horse is cut down beneath you, and moments later, so are you.\n\n");
    printf("YOU DIED.\n");
}
void fight_men()
{
    printf("You Fight the men with your magical sword, you cast spells on the archers, stunning them, and dual the sword-wielding goons\n");
    defeat_men();
}
void defeat_men()
{
    printf("the villagers come out of their homes and see the goons lying in the street. They hail you as their savior and general talk of optimism occurs.\n An old villager appears from your side and says \"You must talk to the elderman of the village, he is keen to talk to you\"\n");
    printf("1. accept \n 2. deny\n");
    int choice;
    scanf("%i",&choice);
    switch(choice)
    {
        case 1:
        meet_elderman(); break;
        case 2:
        leave_town(); break;
        default:
        printf("Wrong Choice\n"); defeat_men(); break;
    }

}
void leave_town()
{
    printf("You Leave the Town and Never Come back\n");

}
void meet_elderman()
{
    printf("you go to meet the elderman");
}
int main() {
    start();
    return 0;
}