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
    printf("The road leaving the village had once been paved with stone. Time had claimed most of it. Grass forced itself between the cracks, while roots from old trees pushed whole slabs from the earth. Before long, the path became little more than a trail beaten into the soil by hunters and wandering merchants. It was said that caravans once crossed these woods daily, before the wars, before the kingdoms shrank behind their walls, before the forest claimed what men abandoned.\n");
    printf("The trees grew older the farther one travelled. Their trunks widened until three men together could scarcely wrap their arms around them. Moss climbed patiently over bark blackened by rain, and vines hung from branches like forgotten banners. The afternoon light reached the forest floor only in scattered fragments, broken by leaves that had not known an axe in generations.\n");
    printf("The traveller walked alone.\n\n");
    printf("Occasionally he passed signs that another soul had travelled this way. A broken wheel left beside the road. An abandoned campfire, its ashes washed away long ago. The rusted head of a spear, almost swallowed by the earth. None were recent enough to matter.\n\n");
    printf("Birdsong drifted between the trees. Somewhere deeper within the woods a stream carried itself lazily over smooth stones. For a while, the forest appeared no different from any other.\n\n");
    printf("Only after another hour did something become apparent.\n\n");
    printf("There were no animals.\n\n");
    printf("No deer fled at the sound of footsteps.\n\n");
    printf("No squirrels leapt between branches.\n\n");
    printf("Even the birds had grown strangely quiet.\n\n");
    printf("The forest was not silent.\n\n");
    printf("It merely listened.\n\n");
    discover_orc_camp()
}
void discover_orc_camp()
{
    printf("The smell reached him before the sight did.\n\n");

printf("Woodsmoke.\n\n");

printf("Cooked meat.\n\n");

printf("The unmistakable scent of wet leather left too long in the rain.\n\n");

printf("The traveller slowed his pace and stepped carefully through a thicket until the trees began to thin. Beyond them lay a clearing where the forest had been forced back by axe and fire.\n\n");

printf("An orc camp.\n\n");

printf("It was larger than he expected.\n\n");

printf("Crude wooden stakes surrounded the clearing, though many leaned at odd angles as though built more for appearance than defence. Tents stitched from animal hides stood in uneven rows, while warriors sat around great fires sharpening axes, arguing loudly, or tearing apart roasted game with little concern for manners.\n\n");

printf("Children ran between the tents carrying bundles of wood.\n\n");

printf("Old women stirred great iron pots suspended above the flames.\n\n");

printf("The sight was almost... ordinary.\n\n");

printf("Had one ignored the tusks, the scars, and the weapons.\n\n");

printf("A great tent stood apart from the others.\n\n");

printf("Its entrance was marked by banners stained dark with age.\n\n");

printf("If there was a leader here, he slept beneath that roof.\n\n");

printf("From here, several choices presented themselves.\n\n");

printf("One could attempt to sneak into the camp unnoticed, hoping that fortune favoured the careful.\n\n");

printf("Or one could step into the open, steel in hand, and let the forest witness another battle.\n\n");

}
explore_camp_stealth()
{
    printf("Patience had spared more lives than bravery.\n\n");

printf("The traveller waited until the sun sank lower behind the trees. Shadows stretched across the clearing, swallowing much of the camp beneath them. One guard wandered away from the entrance carrying a wineskin. Another had already fallen asleep against a stack of logs, his axe resting forgotten beside him.\n\n");

printf("Slowly, carefully, he crossed the outer edge of the camp.\n\n");

printf("No one looked twice.\n\n");

printf("The noise of shouting, laughter, and clattering cookware hid even the sound of cautious footsteps.\n\n");

printf("He slipped behind wagons piled high with stolen grain, past weapon racks fashioned from fresh timber, and around cages where frightened livestock huddled together.\n\n");

printf("An old orc sat beside one of the fires sharpening a rusted sword. He hummed quietly to himself, paying little attention to the world around him. Nearby, several younger warriors argued over a game played with carved bones, their voices rising louder with every passing moment.\n\n");

printf("The camp, for all its brutality, carried on much like any village at dusk.\n\n");

printf("Only the weapons reminded the traveller that these people survived by raiding others.\n\n");

printf("The largest tent grew nearer.\n\n");

printf("Unlike the others, it stood upon raised wooden planks. Wolf pelts hung over its entrance, and two great axes had been driven into the earth before it, their blades stained by age.\n\n");

printf("Someone important lived there.\n\n");

printf("The camp remained distracted.\n\n");

printf("For now.\n\n");

}
