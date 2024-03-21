#include <stdio.h>
#include <stdlib.h>

typedef unsigned int u32;

typedef u32 color;


struct s_vertice{
    unsigned int id;
    char* vecinos; //Array que contiene ids de vértices

};

// REVISAR
struct GrafoSt{
    unsigned int i_vertices;
    unsigned int i_lados;
    char* grados; //Array que contiene grados de los vértices en orden
    char* colores; //Array que contiene colores de los vértices en orden
    unsigned int i_delta;
    // Falta conjunto de vecinos
};



