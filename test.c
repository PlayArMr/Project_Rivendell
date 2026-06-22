#include <ncurses.h>

int main() {
    // 1. Initialize the screen and take over the terminal
    initscr();            

    // 2. Print to our virtual screen buffer (stdscr) at coordinates: y=10, x=20
    mvprintw(10, 20, "Hello, World!"); 

    // 3. Push the virtual screen changes to the actual physical screen
    refresh();            

    // 4. Pause and wait for a single key press so the program doesn't instantly close
    getch();              

    // 5. Clean up memory and restore the original terminal state
    endwin();             

    return 0;
}