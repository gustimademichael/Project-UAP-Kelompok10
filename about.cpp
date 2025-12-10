#include <ncurses/curses.h>
#include <cstdlib>
#include <ctime>

void about() {

    int winH = 20;
    int winW = 50;
    int startY = (LINES - winH) / 2;
    int startX = (COLS - winW) / 2;

    WINDOW* w = newwin(winH, winW, startY, startX);
    box(w, 0, 0);
    keypad(w, TRUE);

    mvwprintw(w, 1, 2, "ABOUT GAME");
    mvwprintw(w, 3, 2, "KECEMPLUNG adalah sebuah game kasual yang");
    mvwprintw(w, 4, 2, "menantang pemain untuk menangkap objek");
    mvwprintw(w, 5, 2, "yang jatuh dari atas layar. Pemain");
    mvwprintw(w, 6, 2, "mengendalikan sebuah keranjang untuk");
    mvwprintw(w, 7, 2, "menangkap objek tersebut. Tujuan utama game");
    mvwprintw(w, 8, 2, "ini adalah untuk menangkap sebanyak-banyaknya");
    mvwprintw(w, 9, 2, "objek yang jatuh dari atas kedalam keranjang");
    mvwprintw(w, 10, 2, "agar mendapatkan skor tertinggi.");
    mvwprintw(w, 11, 2, "Apabila objek yang jatuh dari atas tidak");
    mvwprintw(w, 12, 2, "tertangkap sebanyak 3 kali maka");
    mvwprintw(w, 13, 2, "permainan selesai.");
    mvwprintw(w, 15, 2, "game ini terinspiasi dari mini game");
    mvwprintw(w, 16, 2, "yang ada di game pou.");

    mvwprintw(w, 18, 2, "Press any key to go back...");
    wrefresh(w);

    wgetch(w);
    delwin(w);
}
