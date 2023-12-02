#include <ncurses.h>

int main() {
  /* Inicializa la biblioteca `curses` */
  initscr();

  /* Creamos el gusano */
  int n = 10; // Número de puntos del gusano
  int x[n], y[n]; // Posiciones de los puntos del gusano
  for (int i = 0; i < n; i++) {
    x[i] = rand() % COLS; // Posición x aleatoria
    y[i] = rand() % LINES; // Posición y aleatoria
  }

  /* Bucle principal del juego */
  while (1) {
    /* Limpiamos la pantalla */
    clear();

    /* Dibujamos el gusano */
    for (int i = 0; i < n; i++) {
      /* Imprimimos un círculo en la posición del punto */
      mvprintw(y[i], x[i], "o");
    }

    /* Actualizamos la dirección del gusano */
    int dir = 0; // Dirección del gusano
    /* Comprobamos si se ha pulsado alguna tecla */
    if (kbhit()) {
      /* Leemos la siguiente tecla pulsada */
      int tecla = getch();
      /* Actualizamos la dirección del gusano en función de la tecla pulsada */
      switch (tecla) {
        case 'w':
          dir = 1; // Arriba
          break;
        case 'a':
          dir = 2; // Izquierda
          break;
        case 's':
          dir = 3; // Abajo
          break;
        case 'd':
          dir = 4; // Derecha
          break;
      }
    }

    /* Movemos el gusano */
    for (int i = n - 1; i > 0; i--) {
      /* El punto actual se mueve a la posición del punto anterior */
      x[i] = x[i - 1];
      y[i] = y[i - 1];
    }
    /* El primer punto se mueve en la dirección `dir` */
    x[0] += dir;
    y[0] += dir;

    /* Comprobamos si el gusano choca con los bordes de la pantalla */
    for (int i = 0; i < n; i++) {
      /* Si un punto está fuera de los límites de la pantalla, el juego termina */
      if (x[i] < 0 || x[i] >= COLS || y[i] < 0 || y[i] >= LINES) {
        break;
      }
    }

    /* Comprobamos si el gusano choca consigo mismo */
    for (int i = 1; i < n; i++) {
      /* Si el primer punto coincide con la posición de otro punto, el juego termina */
      if (x[0] == x[i] && y[0] == y[i]) {
        break;
      }
    }

    /* Actualizamos la pantalla */
    refresh();
  }

  /* Finalizamos la biblioteca `curses` */
  endwin();

  return 0;
}

