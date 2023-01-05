#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    float conta, dispeza_conta, gorjeta, pagar;
    int numero_pessoas, pessoas;

    printf("\n Olá cliente, iremos te informar o seu pedido completo!\n");
    printf("\n Para ter acesso ao valor da sua conta e informçãoes dela, prossiga com o pagamento!\n");
    printf("\n Por favor, informe o valor de sua conta.\n");
    scanf("\n%f",&conta);

    printf("\t Você vai pagar sozinho ou pretende dividir a conta ?\n");
    printf("\t 1 para dividir a conta e 2 para não dividir!\n");

    scanf("%d",&pessoas);
     if(pessoas== 1){

        printf("\t\nEm quantas pessoas pretende dividir a conta igualmente ?\n");
        scanf("%d",&numero_pessoas);

        gorjeta= 0.1*conta;
        pagar= gorjeta + conta;

        printf("\n Logo temos a taxa de gorjeta do garçom que é de 10%%.\n");
        printf("\t Valor total a pagar R$ %.2f\n",pagar);
        printf("\t Sendo %d de pessoas, logo ficara R$ %.2f para cada\n",numero_pessoas,(pagar/numero_pessoas));

        printf("\n\t Informações adicionais!");
        printf("\n\t Seu pedido tem uma taxa de imposto de 35%%.\n ");
        dispeza_conta= conta*0.35;
        printf("\t-Gerou R$ %.2f de imposto. \n",dispeza_conta);
     }
     if(pessoas== 2){
         printf("\n Logo temos a taxa de gorjeta do garçom que é de 10%%. \n");
         gorjeta= 0.1*conta;
         pagar= gorjeta + conta;
         printf("\n Valor total a pagar R$ %.2f\n",pagar);
         printf("\n Informações adicionais!\n");
         printf("\n Seu pedido tem uma taxa de imposto de 35%%.\n ");
         dispeza_conta= conta*0.35;
         printf("\n -Gerou R$ %.2f de imposto",dispeza_conta);

     }



    return 0;
}
