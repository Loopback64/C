#include <SDL2/SDL.h>
#include <math.h>

// Función para calcular el valor de la onda seno
double calculateSineWave(double x) {
    return sin(x);
}

int main() {
    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "Error al inicializar SDL: %s\n", SDL_GetError());
        return 1;
    }

    // Crear una ventana
    SDL_Window* window = SDL_CreateWindow("Gráfica de Onda Seno", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    if (window == NULL) {
        fprintf(stderr, "Error al crear la ventana: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Crear un renderizador
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        fprintf(stderr, "Error al crear el renderizador: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Dibujar la onda seno en la ventana
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);  // Color blanco
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);  // Color negro
    for (int x = 0; x < 800; ++x) {
        double y = calculateSineWave(x * 0.1) * 100 + 300;  // Ajustar la amplitud y la posición vertical
        SDL_RenderDrawPoint(renderer, x, (int)y);
    }

    SDL_RenderPresent(renderer);

    // Esperar hasta que se cierre la ventana
    SDL_Event event;
    while (1) {
        if (SDL_PollEvent(&event) && event.type == SDL_QUIT) {
            break;
        }
    }

    // Liberar recursos
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

