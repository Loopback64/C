#include <stdlib.h>

int main() {
    // Comando para compilar el programa de gusanito (asegúrate de ajustar el nombre del archivo)
    const char *compileCommand = "gcc -o Gusanito Gusanito.c -lncurses";

    // Comando para ejecutar el programa de gusanito
    const char *executeCommand = "./Gusanito";

    // Compilamos el programa de gusanito
    int compileResult = system(compileCommand);
    if (compileResult != 0) {
        fprintf(stderr, "Error al compilar el programa de gusanito.\n");
        return 1;
    }

    // Ejecutamos el programa de gusanito
    int executeResult = system(executeCommand);
    if (executeResult != 0) {
        fprintf(stderr, "Error al ejecutar el programa de gusanito.\n");
        return 1;
    }

    return 0;
}

