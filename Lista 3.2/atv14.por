programa {
  funcao inicio() {
    inteiro contador = 0, num

    escreva("Digite v�rios n�meros:\n")
    
    faca {
      leia(num)
      se (num > 100 e num < 200) {
        contador++
      }
    } enquanto (num != 0)

    escreva("Voc� digitou ", contador, " n�meros entre 100 e 200!")
  }
}