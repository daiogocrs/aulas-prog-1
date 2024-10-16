programa {
  funcao inicio() {
    inteiro num, sucessor, antecessor

    escreva("Digite um número: ")
    leia(num)

    sucessor = num + 1
    antecessor = num - 1

    escreva("O número antecessor de ", num, " é ", antecessor, "\n")
    escreva("O número sucessor de ", num, " é ", sucessor)
  }
}
