# LogicaSuperTrunfo-C
Implementação da lógica do jogo Super Trunfo
#include <stdio.h>
#include <string.h>

// Estrutura para armazenar uma carta
typedef struct {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
    int defesa;
} Carta;

// Função para comparar duas cartas
void compararCartas(Carta c1, Carta c2, int escolha) {
    int valor1, valor2;

    switch (escolha) {
        case 1: valor1 = c1.forca; valor2 = c2.forca; break;
        case 2: valor1 = c1.velocidade; valor2 = c2.velocidade; break;
        case 3: valor1 = c1.inteligencia; valor2 = c2.inteligencia; break;
        case 4: valor1 = c1.defesa; valor2 = c2.defesa; break;
        default: printf("Opção inválida!\n"); return;
    }

    printf("\n%s escolheu: %d\n", c1.nome, valor1);
    printf("%s escolheu: %d\n", c2.nome, valor2);

    if (valor1 > valor2) {
        printf("👉 %s venceu!\n", c1.nome);
    } else if (valor2 > valor1) {
        printf("👉 %s venceu!\n", c2.nome);
    } else {
        printf("⚖ Empate!\n");
    }
}

int main() {
    Carta jogador1 = {"Dragão", 90, 70, 60, 85};
    Carta jogador2 = {"Fênix", 80, 95, 75, 65};

    int escolha;
    printf("=== Super Trunfo ===\n");
    printf("Atributos:\n1 - Força\n2 - Velocidade\n3 - Inteligência\n4 - Defesa\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &escolha);

    compararCartas(jogador1, jogador2, escolha);

    return 0;
}
