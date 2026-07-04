#include <stdio.h>
#include "game.h"

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
    printf("Elderman begins,\"Greetings, Traveller. Evidently you defeated them using magic. Our town needs a young and talented wizard as you.\"\n");
    printf("Long ago, the mages gifted this town a stone, a magical stone of power, which has protected us from raids and goblin attacks in this dreadful place. This stone was kept in the temple on the town outskits, in the hillock.\n");
    printf("But Someone stole this stone, about 2 moons ago. This has removed the protection the stone had on the town. It was brought to my attention the stone was missing. And how a witness recounted that it was broken into two pieces.\n");
    printf("You must bring the stone back, or atleast the pieces of it. We can then bring it together so the town is protected again.\n");
    printf("The first half is known to be within the forests nearby. In an orc camp. I would exercise caution. Considerable Caution.\n");
    printf("The Second Half is.. a bit less vaguely known, but It is heard that it is in the mountains. in the shrine of the old gods.\n");
    printf("Go now, young adventurer, and help this old town!\"");
    printf("1. Go to Forest \n 2. Leave Town \n 3. Enter inn and Ask Around");
    int input = 0;
    scanf("%i",&input);
    switch(input)
    {
        case 1:
        //goto_forest(); 
        break;
        case 2:
        leave_town(); break;
        case 3:
        enter_inn(); break;
        default:
        printf("Invalid Choice\n"); meet_elderman(); break;
    }
}
void enter_inn()
{
    printf("You step into the tavern, the warmth of the hearth a welcome change from the road.\n\n");

    printf("Villager 1: \"...and the elderman swears he had nothing to do with the stone going missing. Convenient, that.\"\n\n");

    printf("Innkeeper: \"He was in here last week. Ordered his usual, quiet as ever. Didn't seem like a man who'd just lost the one thing he's sworn his whole life to guard.\"\n\n");

    printf("Villager 2: \"Old men misplace things. Thing's probably sitting in a drawer somewhere.\"\n\n");

    printf("Villager 1: \"It was locked in a shrine, Bren. Warded. You don't 'misplace' a warded stone.\"\n\n");

    printf("Baker: \"Maybe grief looks quiet on some men. My uncle didn't cry once at his own wife's funeral.\"\n\n");

    printf("Innkeeper: \"Thirty years that stone sat in the shrine. Walks off the one season the wardens are shorthanded. Odd, is all.\"\n\n");

    printf("Villager 2: \"You've been saying that for a moon now and nothing's come of it. Drink your ale.\"\n\n");

    printf("Baker: \"Everything's odd if you squint hard enough, friend. I've got bread rising.\"\n\n");
}
