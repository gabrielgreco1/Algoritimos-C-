#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    
  // imprimindo cabecalho bonito do jogo
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");



    int segundos = time(0);
    srand(segundos);
    
    int numerosecreto = rand() % 100;

    
    int chute;
    
    int tentativas = 1;
   
    double pontos = 1000;
    
    int acertou = 0;
    
    int nivel;

    int numerodetentativas = 5;
    
    
    // escolhendo o nivel de dificuldade
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");

    scanf("%d", &nivel);

    switch(nivel) {
        case 1: 
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default:
            numerodetentativas = 6;
            break;
    }

   
   
   
   
   
    for(int i =  1; i <= numerodetentativas; i++){
    
    
    printf("\n\nTentativa %d", tentativas);
    
    printf("\nQual é o seu chute? ");
        scanf("%d", &chute);
        
    printf("Seu chute foi %d", chute);
 
    
    if (chute < 0){
        printf("\nVoce nao pode chutar numeros negativos!");
        continue;
    }
    
    acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
    
    
    if (acertou) {
        break;
    }

      else if (maior) {
          printf(" e seu chute é maior que o número secreto");
      }
      
      
      else {
          printf(" e foi menor que o número secreto");
       }
       
       tentativas ++;
       
       double pontosperdidos = abs(chute - numerosecreto) / 2.0;
       pontos = pontos - pontosperdidos;
       
    }
       printf ("\nFim de Jogo");
       
      if(acertou) {
          printf("\nVocê ganhou!");
               printf("\nTotal de pontos: %.2f", pontos);
               
      }
      else {
            printf("\nVocê perdeu! Tente novamente!");
            

 
    }
    
}
