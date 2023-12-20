#include <stdio.h>
#include <time.h>

void mostrar_reloj(struct tm *tiempo_actual);
void establecer_hora(struct tm *tiempo);
void establecer_alarma(struct tm *alarma);
int comparar_tiempo(struct tm *tiempo1, struct tm *tiempo2);

int main() {
    time_t tiempo_actual;
    struct tm *tiempo_info;

    struct tm hora_alarma;
    hora_alarma.tm_hour = 0;
    hora_alarma.tm_min = 0;
    hora_alarma.tm_sec = 0;

    char opcion;

    do {
        // Obtener la hora actual
        time(&tiempo_actual);
        tiempo_info = localtime(&tiempo_actual);

        // Mostrar reloj y menú
        mostrar_reloj(tiempo_info);
        printf("\nMenu:\n");
        printf("1. Establecer hora\n");
        printf("2. Establecer alarma\n");
        printf("3. Salir\n");

        scanf(" %c", &opcion); // Leemos un carácter, ignorando espacios en blanco

        switch(opcion) {
            case '1':
                establecer_hora(tiempo_info);
                break;
            case '2':
                establecer_alarma(&hora_alarma);
                break;
        }

    } while (opcion != '3');

    return 0;
}

// Función para mostrar la hora actual en la consola
void mostrar_reloj(struct tm *tiempo_actual) {
    printf("Reloj: %02d:%02d:%02d\n", tiempo_actual->tm_hour, tiempo_actual->tm_min, tiempo_actual->tm_sec);
}

// Función para establecer la hora ingresada por el usuario
void establecer_hora(struct tm *tiempo) {
    printf("Ingresa la nueva hora (HH MM SS): ");
    scanf("%d %d %d", &tiempo->tm_hour, &tiempo->tm_min, &tiempo->tm_sec);
}

// Función para establecer la hora de la alarma ingresada por el usuario
void establecer_alarma(struct tm *alarma) {
    printf("Ingresa la hora de la alarma (HH MM SS): ");
    scanf("%d %d %d", &alarma->tm_hour, &alarma->tm_min, &alarma->tm_sec);
}

// Función para comparar dos estructuras de tiempo y devolver la diferencia
int comparar_tiempo(struct tm *tiempo1, struct tm *tiempo2) {
    return difftime(mktime(tiempo1), mktime(tiempo2));
}

