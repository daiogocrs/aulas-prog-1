programa {
  funcao inicio() 
  { 
    inteiro n, controle = 1
    real h = 0

    escreva("Digite o valor de N: ")
    leia(n)

    enquanto (controle <= n) {
      h = 1 / controle + h
      controle++
      
    }
    escreva("O valor de H é: ", h, "\n")
  }
}