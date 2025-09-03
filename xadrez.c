#include <stdio.h>

int main() {
    
    //identificando as variáveis
    int torre = 1, rainha = 1, bispo = 1, cavalo = 1; 
    int numeroRainha; 
    int movimento;
    char movimentocavalo [8];

    //Introdução com menu
    printf("__________________________________________ \n");
    printf("VAMOS JOGAR XADREZ! \n");
    printf("PEÇAS DISPONÍVEIS PARA SEREM MOVIMENTADAS: TORRE, RAINHA, BISPO e CAVALO\n");
    printf("ESCOLHA UMA DAS OPÇÕES PARA MOVIMENTAR\n");

    printf("1. TORRE:\n");
    printf("2. RAINHA:\n");
    printf("3. BISPO:\n");
    printf("4. CAVALO:\n");

    printf("Digite abaixo o número da sua escolha:\n");
    scanf("%d", &movimento);

    switch (movimento) { //menu de escolhas do usuário
        case 1: //para a torre
            for (torre = 1; torre <= 5; torre++) {
                printf("Torre anda uma casa para a DIREITA!\n");
            }    
            break;

        case 2: //para a rainha
            do {
                printf("Digite o número de vezes que você quer que a Rainha ande (máx 8):\n");
                scanf("%d", &numeroRainha);

                if (numeroRainha > 8) {
                    printf("Nessa rodada o máximo que a Rainha pode andar são 8 casas.\n");
                } 

            } while (numeroRainha > 8);

            for (rainha = 1; rainha <= numeroRainha; rainha++) {
                printf("Rainha andou uma casa para a ESQUERDA!\n");
            }
            break;
        
        case 3: //para o bispo
            printf("Vamos andar 5 casas com o Bispo para a Diagonal, ok?\n");
            while (bispo <= 5) {
                printf("O Bispo anda uma casa para a DIAGONAL!\n");
                bispo++;
            }    
            break;

        case 4: //para o cavalo
            printf("Qual direção você deseja que o cavalo ande?\n");
            printf("CIMA, BAIXO, DIREITA ou ESQUERDA? (Digite sua resposta): ");
            scanf("%s", movimentocavalo);

            for (cavalo = 1; cavalo <= 2; cavalo++) {
                printf("Cavalo anda para %s\n", movimentocavalo);
            }
                printf("Cavalo anda para a Direita\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}