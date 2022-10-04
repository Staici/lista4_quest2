#include <stdio.h>
#define TAM 10
//variavel constante
int main(void) {
float horatrabalhada[TAM];
float salarioHora[TAM];
float salariototal[TAM],horaExtra[TAM];
int maior=0; 
  
for(int i=0; i<TAM; i++){
  horaExtra[i]=0;
  printf("Digite as horas trabalhadas do %d° funcionário\n",i+1);
  scanf("%f",&horatrabalhada[i]);
  printf("Digite Salario por hora %d° funcionário\n",i+1);
  scanf("%f",&salarioHora[i]);
  if(horatrabalhada[i]>160){
    horaExtra[i]=horatrabalhada[i]-160.0;
  }
  salariototal[i]=((horatrabalhada[i]*salarioHora[i])+(horaExtra[i]*salarioHora[i]*1,5)); 
  
  } 
  for(int i=0;i<TAM;i++){
      if(horatrabalhada[i]>horatrabalhada[maior])  maior=i;    
  }
  for(int i=0; i<TAM; i++){
    printf("o funcionário %d trabalhou %.1f horas, fez %.1f  horas extras e irá receber R$ %.2f reais no fim do mês.\n",i+1,horatrabalhada[i],horaExtra[i],salariototal[i]);
  }
 printf("O funcionário %d trabalhou mais \n", maior+1);
return 0;
}