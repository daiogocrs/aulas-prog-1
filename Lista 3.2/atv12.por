programa {
  funcao inicio() {
    inteiro contador = 0, num, maior = 0

    escreva("Digite 15 n�meros:\n")
    
    faca {
      leia(num)
      se (num > 30) {
        maior++
      }
      contador++
    } enquanto (contador < 15)

    escreva("Voc� digitou ", maior, " n�meros maiores que 30!")
  }
}