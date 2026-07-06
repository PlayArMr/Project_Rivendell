#include <stdio.h>
#include <stdlib.h>
#include "game.h"

void goto_forest()
{
    printf("You see the forest at its outskirts, great trees on the border with the darkness inside. The sunlight dies.\n");
    printf("1. Enter forest \n 2. Explore Outskirts of Forest \n 3. Explore Temple on a hill surrounded by the forest \n");
    int choice = 0;
    scanf("%i",&choice);
    switch(choice)
    {
        case 1:
        enter_forest();
        break;
        case 2:
        explore_outskirts();
        break;
        case 3:
        explore_temple();
        break;
        default:
        printf("Invalid Choive\n"); goto_forest();
        break;
    }
}
void explore_outskirts()
{
    printf("You walk on the outskirts of the forest, and you find a door. Standing in the middle of nowhere.\n");
    printf("You look around, nothing suspicious. The door is pink, with a yellow brass handle\n");
    printf("Behind the door, you see nothing. You choose to open it. the door opens into a room. And inside the room is..a heart shaped ornament.\n");
    printf("On the walls, with pink ink, is written the same word, Tinuviel, Tinuviel, again and again.\n");
    printf("evidently the man who made this loved a person whom they called affectionately, \'Tinuviel\'\n");
    goto_forest();
}
void explore_temple()
{
    printf("You see the temple where the stone was orignally kept. It is an old temple, made by the elves of the past. Its arches have given up, but the bricks refuse to die.\n");
    printf("You carefully survey the area. A flock of sheep have been here, trampling all the tracks. But yet, you use your sword to cast a spell and you see 3 marks. Two of them were strange, largely spaced, evidently goblins.\n");
    printf("The third, however was most interesting. It was of a man's. A humans. the tracks were made with a quality leather shoe, and evidently had slipped thrice on the way down. So probably old. Or blind, maybe both?\n");
    printf("You enter the forest now to explore within.\n");
    enter_forest();
}
void enter_forest()
{
    printf("hi\n");
}