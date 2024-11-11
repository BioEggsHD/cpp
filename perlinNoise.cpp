#include<stdio.h>
#include<iostream>
#include <cmath>
#include <cstdlib> // For rand()
#include <ctime>   // For seeding rand()

const int GRID_SIZE = 256; // Define a grid size for gradients
float gradientX[GRID_SIZE][GRID_SIZE];
float gradientY[GRID_SIZE][GRID_SIZE];

// Function to initialize random gradients
void initializeGradients() {
    srand(static_cast<unsigned int>(time(0))); // Seed for randomness

    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            // Generate a random angle
            float angle = static_cast<float>(rand()) / RAND_MAX * 2.0f * M_PI;

            // Set gradient vector based on the angle
            gradientX[i][j] = cos(angle);
            gradientY[i][j] = sin(angle);
        }
    }
}

// Fade function to smooth the transition
float fade(float t) {
    return t * t * t * (t * (t * 6 - 15) + 10);
}

// Linear interpolation function
float lerp(float t, float a, float b) {
    return a + t * (b - a);
}

// Dot product between distance and gradient vectors
float dotGridGradient(int ix, int iy, float x, float y) {
    float dx = x - static_cast<float>(ix);
    float dy = y - static_cast<float>(iy);
    return (dx * gradientX[ix % GRID_SIZE][iy % GRID_SIZE] +
            dy * gradientY[ix % GRID_SIZE][iy % GRID_SIZE]);
}

// Perlin noise function
float perlin(float x, float y) {
    // Determine grid cell coordinates
    int x0 = static_cast<int>(floor(x));
    int x1 = x0 + 1;
    int y0 = static_cast<int>(floor(y));
    int y1 = y0 + 1;

    // Determine interpolation weights
    float sx = fade(x - static_cast<float>(x0));
    float sy = fade(y - static_cast<float>(y0));

    // Interpolate between grid point gradients
    float n0, n1, ix0, ix1, value;

    // Interpolate along x for y0 and y1
    n0 = dotGridGradient(x0, y0, x, y);
    n1 = dotGridGradient(x1, y0, x, y);
    ix0 = lerp(sx, n0, n1);

    n0 = dotGridGradient(x0, y1, x, y);
    n1 = dotGridGradient(x1, y1, x, y);
    ix1 = lerp(sx, n0, n1);

    // Interpolate along y
    value = lerp(sy, ix0, ix1);
    return value;
}

int main() {
    initializeGradients(); // Initialize gradients for Perlin noise

    // Example of using Perlin noise at point (3.5, 4.2)
    float noiseValue = perlin(5.3f, 3.9f);
    printf("Perlin noise at (5.3, 3.9): %f\n", noiseValue);

    return 0;
}
