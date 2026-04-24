#include<stdio.h>
void menu(void){
printf("==============================\n");
printf("    SISTEMA EQUIPE TUCURUVI\n");
printf("==============================\n");
printf("1 - Inserir notas\n");
printf("2 - Calcular media\n");
printf("3 - Verificar situacao\n");
printf("4 - Exibir resultado\n");
printf("5 - Calcular derivada\n");
printf("6 - Sair\n");
printf("Escolha uma opcao: ");
}
int main() {

int opcao;
float nota1, nota2, media, x, y;

while(opcao != 6){

    menu();
    scanf("%d", &opcao);
    switch (opcao)
    {
    
    return 0;
}