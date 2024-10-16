programa {
  funcao inicio() {
    inteiro contador = 0, num

    escreva("Digite vários números:\n")
    
    faca {
      leia(num)
      se (num > 100 e num < 200) {
        contador++
      }
    } enquanto (num != 0)

    escreva("Você digitou ", contador, " números entre 100 e 200!")
  }
}