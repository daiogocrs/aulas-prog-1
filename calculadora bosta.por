programa {
  funcao inicio() 
  {
    real opcao, num1, num2, resultado

    escreva("1.Adição\n")
    escreva("2.Subtração\n")
    escreva("3.Multiplicação\n")
    escreva("4.Divisão\n")
    escreva("Qual a sua opção? ")

    leia(opcao)

    escolha (opcao) {
      
      caso 1: escreva("Digite o primeiro número: ")
              leia(num1)
              escreva("Digite o segundo número: ")
              leia(num2)
              escreva("Seu resultado é: ", num1+num2)
        pare

      caso 2: escreva("Digite o primeiro número: ")
              leia(num1)
              escreva("Digite o segundo número: ")
              leia(num2)
              resultado = num1 - num2
              escreva("Seu resultado é: ", resultado)
        pare

      caso 3: escreva("Digite o primeiro número: ")
              leia(num1)
              escreva("Digite o segundo número: ")
              leia(num2)
              escreva("Seu resultado é: ", num1*num2)
        pare

      caso 4: escreva("Digite o primeiro número: ")
              leia(num1)
              escreva("Digite o segundo número: ")
              leia(num2)
              se (num2 == 0){
                escreva("O divisor não pode ser 0!")
              } senao {
              resultado = num1 / num2
              escreva("Seu resultado é: ", resultado)
              }
        pare

      caso contrario: escreva("Operação inválida!")
    }

  }
}
