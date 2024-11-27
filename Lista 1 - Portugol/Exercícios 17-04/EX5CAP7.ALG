Algoritmo "Ex5Cap7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/04/2024
Var
   // Seção de Declarações das variáveis
   a: inteiro
   b: inteiro
   resto: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Escreva um número e direi se ele é um múltiplo de três: ")
   leia(a)
   resto:= a%3
   se resto=0 entao
      escreval("O número ",a," é um múltiplo de três, pois o resto da divisão é 0.")
   senao
      escreval("O número ",a," não é um múltiplo de três, pois o resto da divisão é: ",resto)

   fimse




Fimalgoritmo