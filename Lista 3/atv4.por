programa {
  funcao inicio() {
    real h, pesoIdeal
    cadeia s

    escreva("Digite o seu sexo (M para masculino, F para feminino): ")
    leia(s)
    escreva("Digite a sua altura em metros: ")
    leia(h)

    se (s == "M" ou s == "m") {
      pesoIdeal = (72.7 * h) - 58
    } senao se (s == "F" ou s == "f") {
      pesoIdeal = (62.1 * h) - 44.7
    }

    escreva("O seu peso ideal é: ", pesoIdeal, " kg")
  }
}