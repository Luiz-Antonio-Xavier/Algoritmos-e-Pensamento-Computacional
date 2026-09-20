```c
#include <stdio.h>

int main() {
    float temperatura, limite;
    float soma = 0, maior = 0, menor = 0;
    float media, percentual;

    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;

    printf("=== MONITORAMENTO DE TEMPERATURA ===\n");

    // Define o limite de temperatura
    do {
        printf("Digite o limite de temperatura: ");
        scanf("%f", &limite);

        if (limite < 0) {
            printf("Limite invalido. Digite um valor positivo.\n");
        }

    } while (limite < 0);

    printf("\nLimite definido: %.2f C\n", limite);
    printf("Digite -999 para encerrar manualmente.\n");

    // Inicia o monitoramento
    while (1) {
        printf("\nDigite a temperatura: ");
        scanf("%f", &temperatura);

        // Encerra manualmente
        if (temperatura == -999) {
            printf("\nMonitoramento encerrado.\n");
            break;
        }

        // Verifica se a temperatura e valida
        if (temperatura < -50 || temperatura > 150) {
            printf("Temperatura invalida! Digite entre -50 e 150 C.\n");
            continue;
        }

        quantidade++;
        soma += temperatura;

        // Define a maior e menor temperatura
        if (quantidade == 1) {
            maior = temperatura;
            menor = temperatura;
        } else {
            if (temperatura > maior) {
                maior = temperatura;
            }

            if (temperatura < menor) {
                menor = temperatura;
            }
        }

        // Verifica se esta acima do limite
        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;

            printf("Temperatura acima do limite!\n");
            printf("Consecutivas acima do limite: %d\n", consecutivas);

            // Encerra apos 3 temperaturas consecutivas
            if (consecutivas == 3) {
                printf("\nALERTA DE SEGURANCA!\n");
                printf("3 temperaturas consecutivas acima do limite.\n");
                printf("Monitoramento encerrado automaticamente.\n");
                break;
            }

        } else {
            // Reinicia a contagem
            consecutivas = 0;
        }
    }

    // Mostra os resultados
    if (quantidade > 0) {
        media = soma / quantidade;
        percentual = ((float)acimaLimite / quantidade) * 100;

        printf("\n=== RELATORIO FINAL ===\n");
        printf("Quantidade de leituras: %d\n", quantidade);
        printf("Temperatura media: %.2f C\n", media);
        printf("Maior temperatura: %.2f C\n", maior);
        printf("Menor temperatura: %.2f C\n", menor);
        printf("Leituras acima do limite: %d\n", acimaLimite);
        printf("Percentual acima do limite: %.2f%%\n", percentual);
    } else {
        printf("\nNenhuma temperatura valida foi registrada.\n");
    }

    return 0;
}
```
