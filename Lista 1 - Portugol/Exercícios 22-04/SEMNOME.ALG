Algoritmo "semnome"
// Disciplina   : [Algoritmos e Programação]
// Professor   : Dr. Jotair Kwiatkowski Jr.
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/04/2024
Var
   // Seção de Declarações das variáveis
   sal,cdt,p: real
   nome: caractere
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Digite seu nome e salário: ")
   leia(nome,sal)
   escreval("Digite o crédito desejado: ")
   leia(cdt)
   p:= 0.3 * sal
   se (cdt>p) entao
      escreval(,nome", crédito negado.")
   senao
      escreval(,nome", crédito concedido.")
   fimse




Fimalgoritmo