programa {
  funcao inicio() 
  {
    real opcao, num1, num2, resultado

    escreva("1.Adi��o\n")
    escreva("2.Subtra��o\n")
    escreva("3.Multiplica��o\n")
    escreva("4.Divis�o\n")
    escreva("Qual a sua op��o? ")

    leia(opcao)

    escolha (opcao) {
      
      caso 1: escreva("Digite o primeiro n�mero: ")
              leia(num1)
              escreva("Digite o segundo n�mero: ")
              leia(num2)
              escreva("Seu resultado �: ", num1+num2)
        pare

      caso 2: escreva("Digite o primeiro n�mero: ")
              leia(num1)
              escreva("Digite o segundo n�mero: ")
              leia(num2)
              resultado = num1 - num2
              escreva("Seu resultado �: ", resultado)
        pare

      caso 3: escreva("Digite o primeiro n�mero: ")
              leia(num1)
              escreva("Digite o segundo n�mero: ")
              leia(num2)
              escreva("Seu resultado �: ", num1*num2)
        pare

      caso 4: escreva("Digite o primeiro n�mero: ")
              leia(num1)
              escreva("Digite o segundo n�mero: ")
              leia(num2)
              se (num2 == 0){
                escreva("O divisor n�o pode ser 0!")
              } senao {
              resultado = num1 / num2
              escreva("Seu resultado �: ", resultado)
              }
        pare

      caso contrario: escreva("Opera��o inv�lida!")
    }

  }
}
