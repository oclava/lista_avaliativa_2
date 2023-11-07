#include <stdio.h>
#include <string.h>

struct Jogador {
    char nome[31];
    char posicao;
    int forca;
};

int main() {
    struct Jogador time[11];
    float forcaTotal[2] = {0.0, 0.0};
    char nomeTime[2][31];

    for (int z = 0; z < 2; z++) {
    scanf(" %30[^\n]", nomeTime[z]);
    nomeTime[z][strcspn(nomeTime[z], "\n")] = '\0';



        for (int i = 0; i < 11; i++) {
            scanf(" %30[^;]; %c; %d", time[i].nome, &time[i].posicao, &time[i].forca);
        }

        for (int i = 0; i < 11; i++) {
            if (time[i].posicao == 'G') {
                forcaTotal[z] += 8 * time[i].forca;
            } else if (time[i].posicao == 'L') {
                forcaTotal[z] += 10 * time[i].forca;
            } else if (time[i].posicao == 'Z') {
                forcaTotal[z] += 5 * time[i].forca;
            } else if (time[i].posicao == 'V') {
                forcaTotal[z] += 8 * time[i].forca;
            } else if (time[i].posicao == 'M') {
                forcaTotal[z] += 11 * time[i].forca;
            } else if (time[i].posicao == 'A') {
                forcaTotal[z] += 12 * time[i].forca;
            }
        }

        forcaTotal[z] = forcaTotal[z] / 100.0;
    }

    printf("%s: %.2f de forca\n", nomeTime[0], forcaTotal[0]);
    printf("%s: %.2f de forca\n", nomeTime[1], forcaTotal[1]);

    if (forcaTotal[0] > forcaTotal[1]) {
        printf("%s eh mais forte\n", nomeTime[0]);
    } else {
        printf("%s eh mais forte\n", nomeTime[1]);
    }

    return 0;
}
