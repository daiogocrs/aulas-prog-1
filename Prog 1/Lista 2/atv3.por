programa {
  funcao inicio() {
    inteiro num, sucessor, antecessor

    escreva("Digite um n�mero: ")
    leia(num)

    sucessor = num + 1
    antecessor = num - 1

    escreva("O n�mero antecessor de ", num, " � ", antecessor, "\n")
    escreva("O n�mero sucessor de ", num, " � ", sucessor)
  }
}
