Algoritmo "EX8CAP7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/04/2024
Var
   // Seção de Declarações das variáveis
   nome1,nome2: caractere
   compra1,compra2: real
   total, media: real


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva(" Digite os nomes dos clientes: ")
   leia(nome1,nome2)
   escreval(" Digite o valor gasto por cada cliente, respectivamente: ")
   leia(compra1,compra2)
   total:= compra1+compra2
   escreval(" O valor total gasto pelos dois clientes é de: ",total)
   media:= (compra1+compra2)/2
   escreval(" O valor médio gasto pelos dois clientes é de: ",media)
   se compra1>20 entao
      escreval(" O cliente ",nome1," gastou mais de 20 reais.")
      se compra2>20 entao
         escreval(" O cliente ",nome2," gastou mais de 20 reais.")
      fimse
   fimse





Fimalgoritmo