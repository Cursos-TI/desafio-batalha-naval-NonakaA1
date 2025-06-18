#include <stdio.h>

// ===================
// Nível Novato
// ===================
void nivelNovato() {
    printf("\n===== Nível Novato =====\n");

    // Tabuleiro 5x5 apenas para exibir coordenadas dos navios
    int tabuleiro[5][5] = {0};

    // Navio 1 - Vertical (posição fixa na coluna 1, linhas 0 a 2)
    printf("Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][1] = 1;
        printf("Coordenada: (%d, %d)\n", i, 1);
    }

    // Navio 2 - Horizontal (linha 3, colunas 0 a 3)
    printf("Navio Horizontal:\n");
    for (int j = 0; j < 4; j++) {
        tabuleiro[3][j] = 1;
        printf("Coordenada: (3, %d)\n", j);
    }
}

// ===================
// Nível Aventureiro
// ===================
void nivelAventureiro() {
    printf("\n===== Nível Aventureiro =====\n");

    int tabuleiro[10][10] = {0};

    // Navio 1 - Vertical
    for (int i = 1; i <= 4; i++) {
        tabuleiro[i][2] = 3;
    }

    // Navio 2 - Horizontal
    for (int j = 4; j <= 8; j++) {
        tabuleiro[5][j] = 3;
    }

    // Navio 3 - Diagonal principal (crescente)
    for (int i = 0; i < 4; i++) {
        tabuleiro[1 + i][1 + i] = 3;
    }

    // Navio 4 - Diagonal secundária (decrescente)
    for (int i = 0; i < 4; i++) {
        tabuleiro[1 + i][8 - i] = 3;
    }

    // Exibir tabuleiro completo
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// ===================
// Nível Mestre
// ===================
void nivelMestre() {
    printf("\n===== Nível Mestre =====\n");

    int matriz[5][5];

    // ===================
    // Habilidade em CONE
    // ===================
    printf("\nHabilidade: CONE\n");
    int cone[5][5] = {0};
    cone[2][0] = 1;
    cone[1][1] = 1;
    cone[2][1] = 1;
    cone[3][1] = 1;
    for (int i = 0; i < 5; i++) {
        cone[2][i] = 1;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // ===================
    // Habilidade em OCTAEDRO
    // ===================
    printf("\nHabilidade: OCTAEDRO\n");
    int octaedro[5][5] = {0};
    octaedro[0][2] = 1;
    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][2] = 1;
    octaedro[3][2] = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    // ===================
    // Habilidade em CRUZ
    // ===================
    printf("\nHabilidade: CRUZ\n");
    int cruz[5][5] = {0};
    cruz[2][0] = 1;
    cruz[2][1] = 1;
    cruz[2][2] = 1;
    cruz[2][3] = 1;
    cruz[2][4] = 1;
    cruz[0][2] = 1;
    cruz[1][2] = 1;
    cruz[3][2] = 1;
    cruz[4][2] = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
}

// ===================
// Main – Executar todos os níveis
// ===================
int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();

    return 0;
}
