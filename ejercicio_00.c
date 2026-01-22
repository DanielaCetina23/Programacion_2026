#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 100

struct Estudiante {
    char nombre[100];
    char codigo[20];
    int edad;
    float promedio;
    int activo;
};

void actualizarNombre(struct Estudiante *e, char nuevoNombre[]);
void actualizarCodigo(struct Estudiante *e, char nuevoCodigo[]);
void actualizarEdad(struct Estudiante *e, int nuevaEdad);
void actualizarPromedio(struct Estudiante *e, float nuevoPromedio);
void actualizarActivo(struct Estudiante *e, int nuevoEstado);

void mostrarNombre(struct Estudiante e);
void mostrarCodigo(struct Estudiante e);
void mostrarEdad(struct Estudiante e);
void mostrarPromedio(struct Estudiante e);
void mostrarActivo(struct Estudiante e);
void mostrarInformacionCompleta(struct Estudiante e);

void agregarEstudiante();
void mostrarEstudiantes();
void mostrarTodos();

struct Estudiante lista[MAX_ESTUDIANTES];
int contador = 0;

int main() {
    int opcion;

    do {
        printf("\n===== SISTEMA DE GESTION DE ESTUDIANTES =====\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar un estudiante en especifico\n");
        printf("3. Mostrar todos los estudiantes\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: 
                agregarEstudiante();
                break;
            case 2: 
                mostrarEstudiantes();
                break;
            case 3: 
                mostrarTodos();
                break;
            case 4: 
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("Opcion invalida\n");
        }

    } while (opcion != 4);

    return 0;
}

void agregarEstudiante() {
    
    if (contador >= MAX_ESTUDIANTES) {
        printf("No se pueden agregar mas estudiantes.\n");
        return;
    }

    struct Estudiante nuevo;

    printf("\nNombre completo: ");
    scanf(" %[^\n]", nuevo.nombre);

    printf("Codigo: ");
    scanf("%s", nuevo.codigo);

    printf("Edad: ");
    scanf("%d", &nuevo.edad);

    do {
        printf("Promedio (0.0 - 10.0): ");
        scanf("%f", &nuevo.promedio);
    } while (nuevo.promedio < 0.0 || nuevo.promedio > 10.0);

    printf("Estado (1 = Activo, 0 = Inactivo): ");
    scanf("%d", &nuevo.activo);

    lista[contador] = nuevo;
    contador++;

    printf("Estudiante agregado correctamente.\n");
}

void mostrarEstudiantes() {
    
    char codigoBuscar[20];
    int encontrado = 0;

    printf("\nIngrese el codigo del estudiante: ");
    scanf("%s", codigoBuscar);

    for (int i = 0; i < contador; i++) {
        if (strcmp(lista[i].codigo, codigoBuscar) == 0) {
            mostrarInformacionCompleta(lista[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Estudiante no encontrado.\n");
    }
}

void mostrarTodos() {

    if (contador == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    for (int i = 0; i < contador; i++) {
        printf("\n----- Estudiante %d -----\n", i + 1);
        mostrarInformacionCompleta(lista[i]);
    }
}

void actualizarNombre(struct Estudiante *e, char nuevoNombre[]) {
    strcpy(e->nombre, nuevoNombre);
}

void actualizarCodigo(struct Estudiante *e, char nuevoCodigo[]) {
    strcpy(e->codigo, nuevoCodigo);
}

void actualizarEdad(struct Estudiante *e, int nuevaEdad) {
    e->edad = nuevaEdad;
}

void actualizarPromedio(struct Estudiante *e, float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        e->promedio = nuevoPromedio;
    } else {
        printf("Promedio invalido.\n");
    }
}

void actualizarActivo(struct Estudiante *e, int nuevoEstado) {
    e->activo = nuevoEstado;
}

void mostrarNombre(struct Estudiante e) {
    printf("Nombre: %s\n", e.nombre);
}

void mostrarCodigo(struct Estudiante e) {
    printf("Codigo: %s\n", e.codigo);
}

void mostrarEdad(struct Estudiante e) {
    printf("Edad: %d anos\n", e.edad);
}

void mostrarPromedio(struct Estudiante e) {
    printf("Promedio: %.2f\n", e.promedio);
}

void mostrarActivo(struct Estudiante e) {
    if (e.activo)
        printf("Estado: Activo\n");
    else 
        printf("Estado: Inactivo\n");
}

void mostrarInformacionCompleta(struct Estudiante e) {
    mostrarNombre(e);
    mostrarCodigo(e);
    mostrarEdad(e);
    mostrarPromedio(e);
    mostrarActivo(e);
}