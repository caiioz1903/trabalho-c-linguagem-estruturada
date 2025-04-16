#include <stdio.h> //biblioteca

int main() {
  int salario_bruto, salario_liquido, salario_desc; //declarando variaveis
  printf("--Calculo de salario liquido--\n");
  
  printf("Digite o salario bruto em R$: ");
  scanf("%d", &salario_bruto);
  
  //calculos
  salario_desc = salario_bruto - (salario_bruto * 0.10);
  salario_liquido = salario_desc - (salario_desc * 0.05);
  
  printf("Seu salário líquido é: R$%d\n", salario_liquido);
  
  return 0;
}
