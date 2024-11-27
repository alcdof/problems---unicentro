Algoritmo "Ex7Cap7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/04/2024
Var
   // Seção de Declarações das variáveis
   peso,altura,imc: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite seu peso em kg e sua altura em m para obter seu IMC: ")
   leia(peso, altura)
   imc:= peso/(altura^2)
   se imc>25 entao
      escreval("Seu IMC é de: ",imc," e portanto, está acima do peso.")
   senao
      escreval("Seu IMC é de: ",imc," e portanto, está no peso ideal.")
   fimse

Fimalgoritmo