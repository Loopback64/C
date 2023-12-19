#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void drawShip(int x, int y) {
    gotoxy(x, y);
    printf("  |  ");
    gotoxy(x, y + 1);
    printf("/o\\");
}

void drawBullet(int x, int y) {
    gotoxy(x, y);
    printf("^");
}

int kbhit(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

int getch() {
    struct termios oldt, newt;
    int ch;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    return ch;
}

int main() {
    int shipX = 40, shipY = 20;
    int bulletX = -1, bulletY = -1;
    char input;

    while (1) {
        system("clear");  // Limpiar pantalla en sistemas UNIX

        if (kbhit()) {
            input = getch();

            switch (input) {
                case 'a':
                    shipX--;
                    break;
                case 'd':
                    shipX++;
                    break;
                case ' ':
                    if (bulletY == -1) {
                        bulletX = shipX + 2;
                        bulletY = shipY - 1;
                    }
                    break;
            }
        }

        if (bulletY > 0) {
            drawBullet(bulletX, bulletY--);
        } else {
            bulletX = -1;
            bulletY = -1;
        }

        drawShip(shipX, shipY);

        usleep(100000);  // Espera en microsegundos para controlar la velocidad de la animación
    }

    return 0;
}

