Algoritmo "Ex6Cap7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/04/2024
Var
   // Seção de Declarações das variáveis
   salario: real
   imposto: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite seu salário: ")
   leia(salario)
   se salario>2500 entao
      imposto:= 0.2*salario
      escreval("O valor de imposto que deve pagar é de: ",imposto)
   senao
      se salario=2500 entao
         imposto:= 0.2*salario
         escreval("O valor de imposto que deve pagar é de: ",imposto)
      senao
         imposto:= 0.15*salario
         escreval("O valor de imposto que deve pagar é de: ",imposto)
      fimse
   fimse



Fimalgoritmo