programa {
  funcao inicio() 
  { 
    inteiro n, total = 0

    escreva("Informe o primeiro n�mero: ")
    leia(n)

    enquanto ( n != -1 ) {
      total = total + n
      escreva("Informe os n�meros a serem somados: ")
      leia(n)
    }
    escreva("A soma �: ", total)
  }
}
