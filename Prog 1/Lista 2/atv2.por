programa {
  funcao inicio() {
    inteiro num
    logico positivo, par

    escreva("Digite um n�mero: ")
    leia(num)

    positivo = num > 0
    par = num % 2 == 0

    escreva("O n�mero � positivo? ", positivo, "\n")
    escreva("O n�mero � par? ", par)
  }
}
