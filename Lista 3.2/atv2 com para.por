programa {
  funcao inicio() 
  { 
    inteiro n, i
    real h = 0

    escreva("Digite o valor de N: ")
    leia(n)

    para (i = 1; i <= n; i ++) {
      h = 1 / i + h

    }
    escreva("O valor de H é: ", h, "\n")
  }
}