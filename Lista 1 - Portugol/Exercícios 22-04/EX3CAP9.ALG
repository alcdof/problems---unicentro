Algoritmo "Ex3Cap9"
// Disciplina   : [Algoritmos e Programação]
// Professor   : Dr. Jotair Kwiatkowski Jr.
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/04/2024
Var
   // Seção de Declarações das variáveis
   nome: caractere
   salario, credito: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
       escreva("Digite seu nome: ")
    leia(nome)

    escreva("Digite seu salário: ")
    leia(salario)


    escreva("Digite o crédito desejado: ")
    leia(credito)

    se (credito >= salario * 0.3) entao
        escreva(nome, ", crédito negado.")
    senao
        escreva(nome, ", crédito concedido.")
    fimse

Fimalgoritmo