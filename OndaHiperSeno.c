#include <SDL2/SDL.h>
#include <math.h>

// Función para graficar la onda hiperbólica
void drawHyperbolicWave(SDL_Renderer *renderer, int width, int height) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // Color blanco
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Color negro

    double scale = 0.1; // Ajusta la escala para ver la onda
    double frequency = 0.1; // Frecuencia de la onda
    double amplitude = 50.0; // Amplitud de la onda

    for (int x = 0; x < width; x++) {
        double y = amplitude * sinh(frequency * (x - width / 2) * scale) + height / 2;
        SDL_RenderDrawPoint(renderer, x, (int)y);
    }

    SDL_RenderPresent(renderer);
}

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    int width = 800;
    int height = 600;

    SDL_Window *window = SDL_CreateWindow("Hyperbolic Wave", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    int quit = 0;
    SDL_Event e;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = 1;
            }
        }

        drawHyperbolicWave(renderer, width, height);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

