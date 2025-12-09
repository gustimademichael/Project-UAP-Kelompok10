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

    mvwprintw(w, 2, 2, "ABOUT GAME");
    mvwprintw(w, 4, 2, "KECEMPLUNG adalah sebuah game kasual yang menantang pemain untuk menangkap");
    mvwprintw(w, 5, 2, "objek yang jatuh dari atas layar. Pemain mengendalikan sebuah keranjang untuk");
    mvwprintw(w, 7, 2, "menangkap objek tersebut. Tujuan utama game ini adalah untuk menangkap sebanyak-banyaknya");
    mvwprintw(w, 8, 2, "objek yang jatuh dari atas kedalam keranjang agar mendapatkan skor tertinggi.");
    mvwprintw(w, 9, 2, "Apabila objek yang jatuh dari atas tidak tertangkap sebanyak 3 kali maka permainan selesai.");
    mvwprintw(w, 10, 2, "Game ini dibuat oleh kelompok 10, yang beranggotakan: ");
    mvwprintw(w, 11, 2, "   1. Gusti Made Michael Mahatma");
    mvwprintw(w, 12, 2, "   2. Nadia Putri Azahra");
    mvwprintw(w, 13, 2, "   3. Siti Zulaika");
    mvwprintw(w, 14, 2, "game ini terinspiasi dari minigame yang ada di game pou");

    mvwprintw(w, 18, 2, "Press any key to go back...");
    wrefresh(w);

    wgetch(w);
    delwin(w);
}
