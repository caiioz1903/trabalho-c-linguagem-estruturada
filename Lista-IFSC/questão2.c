ALGORITMO CalcularExpressoes
// ^ Define o nome do algoritmo/bloco principal.

VAR
// ^ Seção de declaração de variáveis (equivalente a 'int', 'float', etc. em C).
  A, B, C, D, E, TOTAL, N, base, expoente, a, b, c: REAL
  // Todas as variáveis são definidas como tipo REAL (números decimais).
  // Em C: float ou double.

  resultado1, resultado2, resultado3, potencia, resultado4: REAL
  // Variáveis para armazenar os resultados das expressões.

INÍCIO
// ^ Corpo principal do algoritmo (equivalente a 'main()' em C).

  // --------------------------------------
  // a) (A + B) * C
  // Soma A e B, depois multiplica por C.
  resultado1 <- (A + B) * C
  // Em C: resultado1 = (A + B) * C;

  // --------------------------------------
  // b) TOTAL / N
  // Divide TOTAL pelo valor N (cálculo de média, por exemplo).
  resultado2 <- TOTAL / N
  // Em C: resultado2 = TOTAL / N;
  // CUIDADO: Se TOTAL e N forem inteiros, o resultado será truncado.

  // --------------------------------------
  // c) A - B * (C + D * 2) / E
  // Passo a passo:
  // 1. Calcula D * 2.
  // 2. Soma com C.
  // 3. Multiplica por B.
  // 4. Divide por E.
  // 5. Subtrai o resultado de A.
  resultado3 <- A - (B * (C + D * 2)) / E
  // Em C: resultado3 = A - (B * (C + D * 2)) / E;

  // --------------------------------------
  // d) base^expoente (potenciação)
  // Calcula 'base' elevada a 'expoente'.
  potencia <- base ^ expoente
  // Em C: usar pow(base, expoente) da biblioteca <math.h>:
  // #include <math.h>
  // double potencia = pow(base, expoente);

  // --------------------------------------
  // e) a * b * c
  // Multiplica três variáveis.
  resultado4 <- a * b * c
  // Em C: resultado4 = a * b * c;

  // --------------------------------------
  // Exibe os resultados (equivalente a 'printf' em C).
  ESCREVER("Resultados:", resultado1, resultado2, resultado3, potencia, resultado4)
  // Em C:
  // printf("Resultados: %f, %f, %f, %f, %f\n", resultado1, resultado2, resultado3, potencia, resultado4);

FIM
// ^ Fim do algoritmo.
