#include <stdio.h>

// Funções de movimentação das peças
void MoverTorre(int casas, char direcao[]) {
    for (int i = 0; i < casas; i++) {
        printf("A Torre anda uma casa para %s!\n", direcao);
    }
}

void MoverBispo(int casas, char lado[], char direcao[]) {
    for (int i = 0; i < casas; i++) {
        printf("O Bispo anda uma casa para %s e para %s, na diagonal!\n", lado, direcao);
    }
}

void MoverRainha(int casas, int diagonal, char lado[], char direcao[]) {
    for (int i = 0; i < casas; i++) {
        if (diagonal == 1) {
            printf("A Rainha anda uma casa para %s e para %s, na diagonal!\n", lado, direcao);
        } else {
            printf("A Rainha anda uma casa para %s\n", direcao);
        }
    }
}

void MoverCavalo(char primeiraPerna[], char segundaPerna[]) {
    for (int i = 0; i < 2; i++) {
        printf("O cavalo anda uma casa para %s\n", primeiraPerna);
    }    
        printf("O cavalo anda uma casa formando o L para %s!\n", segundaPerna);

}

int main() {
    int movimento, auxRainha;
    int MovimentoTorre, MovimentoBispo, MovimentoRainha;
    char direcaoTorre[10], direcaoBispo[10], direcaoRainha[10], direcaoCavalo[10];
    char ladoBispo[10], ladoRainha[10], ladoCavalo[10], auxCavalo1[10];

    // Menu inicial
    printf("__________________________________________ \n");
    printf("VAMOS JOGAR XADREZ!\n");
    printf("PEÇAS DISPONÍVEIS: TORRE, RAINHA, BISPO e CAVALO\n");
    printf("ESCOLHA UMA DAS OPÇÕES PARA MOVIMENTAR:\n");
    printf("1. TORRE\n2. BISPO\n3. RAINHA\n4. CAVALO\n");
    printf("Digite sua escolha: ");
    scanf("%d", &movimento);

    switch (movimento) {
        case 1: // Torre
            printf("Qual direção você quer que a Torre se movimente? ");
            scanf("%s", direcaoTorre);
            printf("Quantas casas deseja andar com a Torre? ");
            scanf("%d", &MovimentoTorre);
            MoverTorre(MovimentoTorre, direcaoTorre);
            break;

        case 2: // Bispo
            printf("Qual direção você quer que o Bispo se movimente? (Esquerda/Direita) ");
            scanf("%s", direcaoBispo);
            printf("Qual lado você quer que o Bispo se movimente? (Cima/Baixo) ");
            scanf("%s", ladoBispo);
            printf("Quantas casas deseja andar com o Bispo? ");
            scanf("%d", &MovimentoBispo);
            MoverBispo(MovimentoBispo, ladoBispo, direcaoBispo);
            break;

        case 3: // Rainha
            printf("A Rainha se movimentará na diagonal? 1. SIM | 2. NÃO: ");
            scanf("%d", &auxRainha);

            if (auxRainha == 1) {
                printf("Qual o lado da diagonal? (Cima/Baixo) ");
                scanf("%s", ladoRainha);
                printf("Qual a direção da diagonal? (Esquerda/Direita) ");
                scanf("%s", direcaoRainha);
            } else {
                printf("Qual a direção? (Esquerda/Direita) ");
                scanf("%s", direcaoRainha);
                ladoRainha[0] = '\0';
            }

            printf("Quantas casas deseja andar com a Rainha? ");
            scanf("%d", &MovimentoRainha);

            MoverRainha(MovimentoRainha, auxRainha, ladoRainha, direcaoRainha);
            break;

        case 4: // Cavalo
            printf("Qual direção da primeira perna do L? (Cima/Baixo/Esquerda/Direita): ");
            scanf("%s", ladoCavalo);
            printf("Qual direção da segunda perna do L? (Cima/Baixo/Esquerda/Direita): ");
            scanf("%s", direcaoCavalo);

            MoverCavalo(ladoCavalo, direcaoCavalo);
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
