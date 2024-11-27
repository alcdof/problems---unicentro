Algoritmo "Ex1Cap9"
// Disciplina   : [Algoritmos e Programação]
// Professor   : Dr. Jotair Kwiatkowski Jr.
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 22/04/2024
Var
   // Seção de Declarações das variáveis
   n:inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite um número inteiro: ")
   leia(n)
   se (n%3=0) e (n%7=0) entao
      escreval("Divisível por 3 e por 7.")
   senao
      escreval("Não é divisível por 3 e 7.")
   fimse
Fimalgoritmo