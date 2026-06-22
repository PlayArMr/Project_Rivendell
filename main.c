#include <ncurses.h>
#include <stdlib.h>
#include "credits.h"

const char *title[] = {
    "      :::::::::  :::::::::   ::::::::  ::::::::::: :::::::::: :::::::: :::::::::::          :::::::::  ::::::::::: :::     ::: :::::::::: ::::    ::: :::::::::  :::::::::: :::        :::  ",
    "     :+:    :+: :+:    :+: :+:    :+:     :+:     :+:       :+:    :+:    :+:              :+:    :+:     :+:     :+:     :+: :+:        :+:+:   :+: :+:    :+: :+:        :+:        :+:   ",
    "    +:+    +:+ +:+    +:+ +:+    +:+     +:+     +:+       +:+           +:+              +:+    +:+     +:+     +:+     +:+ +:+        :+:+:+  +:+ +:+    +:+ +:+        +:+        +:+    ",
    "   +#++:++#+  +#++:++#:  +#+    +:+     +#+     +#++:++#  +#+           +#+              +#++:++#:      +#+     +#+     +:+ +#++:++#   +#+ +:+ +#+ +#+    +:+ +#++:++#   +#+        +#+     ",
    "  +#+        +#+    +#+ +#+    +#+     +#+     +#+       +#+           +#+              +#+    +#+     +#+      +#+   +#+  +#+        +#+  +#+#+# +#+    +#+ +#+        +#+        +#+      ",
    " #+#        #+#    #+# #+#    #+# #+# #+#     #+#       #+#    #+#    #+#              #+#    #+#     #+#       #+#+#+#   #+#        #+#   #+#+# #+#    #+# #+#        #+#        #+#       ",
    "###        ###    ###  ########   #####      ########## ########     ###              ###    ### ###########     ###     ########## ###    #### #########  ########## ########## ########## "
};
int num_lines = 7;
int title_width = 184;

void draw_title(int start_y, int start_x) {
    attron(COLOR_PAIR(1));
    for (int i = 0; i < num_lines; i++) {
        mvprintw(start_y + i, start_x, "%s", title[i]);
    }
    attroff(COLOR_PAIR(1));
}

int main()
{
    // --- INITIALIZATION ---
    initscr();
    start_color();
    use_default_colors();
    cbreak();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    init_pair(1, COLOR_YELLOW, -1);
    init_pair(2, COLOR_WHITE, -1);

    // --- GET TERMINAL SIZE ---
    int screen_rows, screen_cols;
    getmaxyx(stdscr, screen_rows, screen_cols);

    // --- CENTER THE TITLE ---
    int start_x = (screen_cols - title_width) / 2;
    int start_y = (screen_rows - num_lines) / 4;
    if (start_x < 0) start_x = 0;
    if (start_y < 0) start_y = 0;

    // --- MENU SETUP ---
    char *options[] = {"Start Game", "Load Game", "Credits", "Quit"};
    int n = 4;
    int selected = 0;

    int menu_y = start_y + num_lines + 2;
    int menu_x = (screen_cols - 10) / 2;

    // --- MAIN LOOP ---
    while (1) {
        clear();           // wipe screen every frame
        draw_title(start_y, start_x);  // redraw title every frame

        // render menu
        for (int i = 0; i < n; i++) {
            if (i == selected) attron(A_REVERSE | COLOR_PAIR(2));
            else attron(COLOR_PAIR(2));
            mvprintw(menu_y + i, menu_x, "%s", options[i]);
            attroff(A_REVERSE | COLOR_PAIR(2));
        }

        refresh();

        // input
        int ch = getch();
        if (ch == KEY_UP)   selected = (selected - 1 + n) % n;
        if (ch == KEY_DOWN) selected = (selected + 1) % n;
        if (ch == '\n') {
            switch (selected) {
                case 0: /* start_game() */ break;
                case 1: /* load_game() */ break;
                case 2: credits(); break;  // clear() not needed here anymore
                case 3: endwin(); return 0;
            }
        }
    }
}