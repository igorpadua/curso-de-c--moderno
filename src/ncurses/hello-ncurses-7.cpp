#include <ncurses.h>
#include <string>
#include <unistd.h>

int main( int argc , char **argv ){

  std::string ola = "Olá, ncurses!";
  char * hello = &ola[0];
  const int delay = 90000;
  int y, x;
  x = y = 0;

  if( argc > 1 ){
    hello = argv[1];
  }
  
  initscr(); 

  noecho();
  curs_set(FALSE);
  
  while( 1 ){
    clear();
    mvprintw( y, x, "o" );
    getch();
    refresh();
    usleep(delay);
    ++x;
  }

  move(10, 50);
  printw( hello ); 
  
  refresh();
  
  getch(); 
  
  endwin(); 

  return 0;
}

