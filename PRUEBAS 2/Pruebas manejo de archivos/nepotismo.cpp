#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    FILE *f;
    char palabra[256];
    int contador = 0;

    f = fopen("texto.txt", "r");

    // Leer palabra por palabra
    while (fscanf(f, "%255s", palabra) == 1) {
        int len = strlen(palabra);

        // Quitar signos de puntuación al final
        while (len > 0 && ispunct((unsigned char)palabra[len - 1])) {
            palabra[len - 1] = '\0';
            len--;
        }

        if (len > 0) {
            char ultima = palabra[len - 1];

            // Contar si termina en 'o' u 'O'
            if (ultima == 'o' || ultima == 'O') {
                contador++;
            }
        }
    }

    fclose(f);

    printf("Cantidad de palabras que terminan en 'o': %d\n", contador);

    return 0;
}

