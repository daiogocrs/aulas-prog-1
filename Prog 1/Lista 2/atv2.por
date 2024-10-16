programa {
  funcao inicio() {
    inteiro num
    logico positivo, par

    escreva("Digite um número: ")
    leia(num)

    positivo = num > 0
    par = num % 2 == 0

    escreva("O número é positivo? ", positivo, "\n")
    escreva("O número é par? ", par)
  }
}
