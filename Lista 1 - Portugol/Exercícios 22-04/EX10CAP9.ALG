Algoritmo "Ex10Cap9"
// Disciplina   : [Algoritmos e Programação]
// Professor   : Dr. Jotair Kwiatkowski Jr.
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/04/2024
Var
   // Seção de Declarações das variáveis
   n1, n2, temp: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite o primeiro número: ")
   leia(n1)

   escreva("Digite o segundo número: ")
   leia(n2)

   se (n1 > n2) entao
      temp:= n1
      n1:= n2
      n2:= temp
   fimse
   escreval("Os números em ordem não crescente são: ", n2, " e ", n1)
   
FimAlgoritmo