#include <stdio.h>
#include <conio.h>  // Solo para Windows, si estás en un sistema operativo diferente, puedes usar alternativas.

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

int main() {
    int shipX = 40, shipY = 20;
    int bulletX = -1, bulletY = -1;
    char input;

    while (1) {
        system("cls");  // Solo para Windows, si estás en un sistema operativo diferente, puedes usar alternativas.
        
        if (_kbhit()) {
            input = _getch();

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

        Sleep(100);  // Solo para Windows, si estás en un sistema operativo diferente, puedes usar alternativas.
    }

    return 0;
}

