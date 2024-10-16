programa {
  funcao inicio() {
    real fa, ce

    escreva("Digite a temperatura em Fahrenheit: ")
    leia(fa)

    ce = (5 * ( fa-32) / 9)

    escreva("A temperatura em Fahrenheit: ", fa, "\n")
    escreva("A temperatura em Celsius: ", ce)
}
}