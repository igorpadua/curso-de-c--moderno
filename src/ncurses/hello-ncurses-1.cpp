// inclui a biblioteca
#include <ncurses.h>

int main( int argc , char **argv ){
  
  // inicializar a ncurses
  initscr(); // init screen

  // exibe dados na tela
  printw("Hello, ncurses!"); // print window

  // atualiza a "janela do terminal"
  refresh();

  // capta dados que o usuário digitar
  getch(); // get char

  // desalocar o espaço de memória
  endwin(); //end window

  return 0;
}
// g++ hello-nucurses-1.cpp -lncurses -ltinfo
