#include <ncurses.h>
#include "credits.h"

void credits()
{
    clear();

    int rows, cols;
    getmaxyx(stdscr, rows, cols);

    mvprintw(rows/2 - 3, (cols - 15) / 2, "=== CREDITS ===");
    mvprintw(rows/2 - 1, (cols - 34) / 2, "Made by Mrudul Kulkarni (PlayArMr)");
    mvprintw(rows/2,     (cols - 35) / 2, "Github: https://github.com/PlayArMr");
    mvprintw(rows/2 + 1, (cols - 43) / 2, "Website: https://mrudulkulkarni.vercel.app");
    mvprintw(rows/2 + 2, (cols - 30) / 2, "access the links by pressing ctrl + click :]");
    mvprintw(rows/2 + 3, (cols - 27) / 2, "<Press any key to go back>");

    refresh();
    getch();
    clear();
}