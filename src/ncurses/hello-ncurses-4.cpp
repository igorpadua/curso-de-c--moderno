#include <ncurses.h>
#include <string>

int main( int argc , char **argv ){

  std::string ola = "Olá, ncurses!";
  char * hello = &ola[0];

  if( argc > 1 ){
    hello = argv[1];
  }
  
  initscr(); 
  
  move(10, 50);
  printw( hello ); 
  
  refresh();
  
  getch(); 
  
  endwin(); 

  return 0;
}

