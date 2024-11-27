Algoritmo "Ex3Cap7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/04/2024
Var
   // Seção de Declarações das variáveis
   a, b: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite dois números: ")
   leia(a, b)

   se (a < b) entao
      escreval("o número menor é: ",a)
   senao
      se (b < a) entao
         escreval("o número menor é:",b)
      senao

         escreval("os números são iguais",b)

      fimse
   fimse



Fimalgoritmo