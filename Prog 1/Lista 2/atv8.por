programa {
  funcao inicio() {
    real a, a2, b

    escreva("Digite o valor A: ")
    leia(a)
    escreva("Digite o valor B: ")
    leia(b)

    a2 = a
    a = b
    b = a2

    escreva("O valor de A é: ", a, "\n")
    escreva("O valor de B é: ", b)
}
}