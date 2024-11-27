Algoritmo "Ex2Cap9"
// Disciplina   : [Algoritmos e Programação]
// Professor   : Dr. Jotair Kwiatkowski Jr.
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/04/2024
Var
   // Seção de Declarações das variáveis
   time: caractere
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite o seu time: ")
   leia(time)
   se time = "santos" entao
      escreva("É um time paulista.")
   senao
      se time = "corinthians" entao
         escreva("É um time paulista.")
      senao
         se time = "palmeiras" entao
            escreva("É um time paulista.")
         senao
            se time = "são paulo" entao
               escreva("É um time paulista.")
            senao
               se time = "flamengo" entao
                  escreva("É um time carioca.")
               senao
                  se time = "fluminense" entao
                     escreva("É um time carioca.")
                  senao
                     se time = "botafogo" entao
                        escreva("É um time carioca.")
                     senao
                        se time = "vasco" entao
                           escreva("É um time carioca.")
                        senao
                           escreva("Time desconhecido.")
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo