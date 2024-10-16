programa {
  funcao inicio() 
  { 
    inteiro n, total = 0

    escreva("Informe o primeiro número: ")
    leia(n)

    enquanto ( n != -1 ) {
      total = total + n
      escreva("Informe os números a serem somados: ")
      leia(n)
    }
    escreva("A soma é: ", total)
  }
}
