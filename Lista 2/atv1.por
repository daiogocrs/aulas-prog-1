programa {
  funcao inicio() {
    inteiro a, b, c, resultado
    logico menor

    escreva("Digite o valor A: ")
    leia(a)
    escreva("Digite o valor B: ")
    leia(b)
    escreva("Digite o valor C: ")
    leia(c)

    resultado = a + b

    menor = resultado < c

    escreva("A soma de A com B é: ", resultado, "\n")
    escreva("A soma é menor que C(", c, ")? ", menor)

  }
}
