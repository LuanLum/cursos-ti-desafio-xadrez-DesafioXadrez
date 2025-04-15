#include <stdio.h>

// Implementar funcionalidades usando recursividade:
// - Loops complexos

void movimentarTorre(int casas){
    if (casas > 0) {
        printf("Torre:\t");
        printf("Direita\n");
        movimentarTorre(casas - 1);
    }
}

void movimentarBispo(int casas){
    if (casas > 0) {
        printf("Bispo:\t");
        printf("Direita-acima\n");
        movimentarBispo(casas - 1);
    }
}
void movimentarRainha(int casas){
    if (casas > 0) {
        printf("Rainha:\t");
        printf("Esquerda\n");
        movimentarRainha(casas - 1);
    }
}

void movimentarCavalo(int casas){
    if (casas > 0) {
        printf("Cavalo:\t");
        printf((casas == 1) ? "Direita\n" : "Cima\n");
        movimentarCavalo(casas - 1);
    }
}

int main() {
   movimentarTorre(5);
   movimentarBispo(5);
   movimentarRainha(8);
   movimentarCavalo(3);
    return 0;
}