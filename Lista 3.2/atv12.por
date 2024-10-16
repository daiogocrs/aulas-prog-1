programa {
  funcao inicio() {
    inteiro contador = 0, num, maior = 0

    escreva("Digite 15 números:\n")
    
    faca {
      leia(num)
      se (num > 30) {
        maior++
      }
      contador++
    } enquanto (contador < 15)

    escreva("Você digitou ", maior, " números maiores que 30!")
  }
}