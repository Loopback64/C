#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACTIVITIES 10

// Estructura para representar una actividad
typedef struct {
    char hora[6];
    char actividad[100];
} Actividad;

// Estructura para representar un día con actividades
typedef struct {
    Actividad actividades[MAX_ACTIVITIES];
    int numActividades;
} Dia;

// Estructura para representar una agenda semanal
typedef struct {
    Dia lunes, martes, miercoles, jueves, viernes, sabado, domingo;
} Agenda;

// Función para mostrar las actividades de un día
void mostrarActividades(Dia *dia) {
    printf("Actividades del día:\n");
    for (int i = 0; i < dia->numActividades; i++) {
        printf("%s - %s\n", dia->actividades[i].hora, dia->actividades[i].actividad);
    }
    printf("\n");
}

// Función para agregar una actividad a un día
void agregarActividad(Dia *dia, const char *hora, const char *actividad) {
    if (dia->numActividades < MAX_ACTIVITIES) {
        strcpy(dia->actividades[dia->numActividades].hora, hora);
        strcpy(dia->actividades[dia->numActividades].actividad, actividad);
        dia->numActividades++;
        printf("Actividad agregada con éxito.\n\n");
    } else {
        printf("Ya has alcanzado el límite de actividades para este día.\n\n");
    }
}

int main() {
    Agenda agenda;

    // Menú principal
    int opcion;
    do {
        printf("Agenda Semanal:\n");
        printf("1. Mostrar actividades\n");
        printf("2. Agregar actividad\n");
        printf("3. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // Mostrar actividades
                printf("\n");
                printf("Días de la semana:\n");
                mostrarActividades(&agenda.lunes);
                mostrarActividades(&agenda.martes);
                mostrarActividades(&agenda.miercoles);
                mostrarActividades(&agenda.jueves);
                mostrarActividades(&agenda.viernes);
                mostrarActividades(&agenda.sabado);
                mostrarActividades(&agenda.domingo);
                break;

            case 2:
                // Agregar actividad
                printf("\n");
                int dia;
                printf("Selecciona un día (1-Lunes, 2-Martes, ..., 7-Domingo): ");
                scanf("%d", &dia);

                if (dia >= 1 && dia <= 7) {
                    char hora[6];
                    char actividad[100];

                    printf("Ingresa la hora de la actividad (formato HH:MM): ");
                    scanf("%s", hora);

                    printf("Ingresa la descripción de la actividad: ");
                    scanf("%s", actividad);

                    switch (dia) {
                        case 1:
                            agregarActividad(&agenda.lunes, hora, actividad);
                            break;
                        case 2:
                            agregarActividad(&agenda.martes, hora, actividad);
                            break;
                        case 3:
                            agregarActividad(&agenda.miercoles, hora, actividad);
                            break;
                        case 4:
                            agregarActividad(&agenda.jueves, hora, actividad);
                            break;
                        case 5:
                            agregarActividad(&agenda.viernes, hora, actividad);
                            break;
                        case 6:
                            agregarActividad(&agenda.sabado, hora, actividad);
                            break;
                        case 7:
                            agregarActividad(&agenda.domingo, hora, actividad);
                            break;
                    }
                } else {
                    printf("Opción no válida. Ingresa un número del 1 al 7.\n\n");
                }
                break;

            case 3:
                // Salir
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;

            default:
                printf("Opción no válida. Ingresa un número del 1 al 3.\n\n");
        }
    } while (opcion != 3);

    return 0;
}

