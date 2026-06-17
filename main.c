#include <stdio.h>
#include <stdlib.h>

int main() {
    int option = 0;
    printf(" /$$$$$$$                                               /$$          /$$$$$$$  /$$                                     /$$           /$$ /$$\n");
    printf("| $$__  $$                                             | $$         | $$__  $$|__/                                    | $$          | $$| $$\n");
    printf("| $$  \\ $$ /$$$$$$   /$$$$$$  /$$  /$$$$$$   /$$$$$$$ /$$$$$$       | $$  \\ $$ /$$ /$$    /$$ /$$$$$$  /$$$$$$$   /$$$$$$$  /$$$$$$ | $$| $$\n");
    printf("| $$$$$$$//$$__  $$ /$$__  $$|__/ /$$__  $$ /$$_____/|_  $$_/       | $$$$$$$/| $$|  $$  /$$//$$__  $$| $$__  $$ /$$__  $$ /$$__  $$| $$| $$\n");
    printf("| $$____/| $$  \\__/| $$  \\ $$ /$$| $$$$$$$$| $$        | $$         | $$__  $$| $$ \\  $$/$$/| $$$$$$$$| $$  \\ $$| $$  | $$| $$$$$$$$| $$| $$\n");
    printf("| $$     | $$      | $$  | $$| $$| $$_____/| $$        | $$ /$$     | $$  \\ $$| $$  \\  $$$/ | $$_____/| $$  | $$| $$  | $$| $$_____/| $$| $$\n");
    printf("| $$     | $$      |  $$$$$$/| $$|  $$$$$$$|  $$$$$$$  |  $$$$/     | $$  | $$| $$   \\  $/  |  $$$$$$$| $$  | $$|  $$$$$$$|  $$$$$$$| $$| $$\n");
    printf("|__/     |__/       \\______/ | $$ \\_______/ \\_______/   \\___//$$$$$$|__/  |__/|__/    \\_/    \\_______/|__/  |__/ \\_______/ \\_______/|__/|__/\n");
    printf("                        /$$  | $$                           |______/                                                                        \n");
    printf("                       |  $$$$$$/                                                                                                           \n");
    printf("                        \\______/                                                                                                            \n");
    
    printf("\n\n");
    printf("1. Start Game\n");
    printf("  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·\n");
    printf("2. Load Savefile\n");
    printf("  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·\n");
    printf("3. Stats\n");
    printf("  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·\n");
    printf("4. Credits\n");
    printf("  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·\n");
    printf("5. Exit\n");
    printf("  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·  ·\n");
    printf("Choose option by inputting number: ");
    scanf("%d",&option);
    switch(option) {
        case 1:
            printf("Starting game...\n");
            break;
        case 2:
            printf("Loading savefile...\n");
            break;
        case 3:
            printf("Displaying stats...\n");
            break;
        case 4:
            printf("Showing credits...\n");
            break;
        case 5:
            printf("Exiting...\n");
            exit(0);
            break;
        default:
            printf("Invalid option. Please try again.\n");
    }
    
    
    
    
    
    
    return 0;
}

