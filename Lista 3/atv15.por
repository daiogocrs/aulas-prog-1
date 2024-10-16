programa {
  funcao inicio() 
  {
    inteiro num

    escreva("Digite um número: ")
    leia(num)

    se ((num % 2) == 0) {
      escreva("Esse número é par")
    } 
    se ((num % 2) != 0) {
      escreva("Esse número é ímpar")
    } 
  }
}