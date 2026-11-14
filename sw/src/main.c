#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>
#include <panel.h>

int main(int argn, char **argv){
  initscr();
  noecho();
  cbreak();
  curs_set(0); //hides the cursor
  keypad(stdscr, TRUE);

  int ymax, xmax;
  getmaxyx(stdscr, ymax, xmax);

  const char *message = "Hello, World! HOLaf.";
  int message_len = strlen(message);
  int y = ymax / 2;
  int x = (xmax - message_len) / 2;

  int ch;

  for(;;){
    mvprintw(y, x, message);
    ch = getch();

    if(ch == 'q'){
      break;
    }

    mvprintw(y, x, "                    ");
    switch(ch){
      case KEY_UP:
        y--;
        break;
      case KEY_DOWN:
        y++;
        break;
      case KEY_LEFT:
        x--;
        break;
      case KEY_RIGHT:
        x++;
        break;
      default:

    }
    if (y < 0 ) y = 0;
    if (y >= ymax) y = ymax - 1;
    if (x < 0 ) x = 0;
    if (x + message_len >= xmax) x = xmax - message_len;
  }

  endwin();

  return 0;
}
