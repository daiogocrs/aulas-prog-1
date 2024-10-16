programa {
  funcao inicio() {
    const logico valor1 = verdadeiro
    const logico valor2 = verdadeiro
    logico resultado

    resultado = valor1 ou valor2

    escreva("V ou V : ", resultado, "\n")

    resultado = valor1 ou nao valor2

    escreva("V ou F : ", resultado, "\n")

    resultado = nao valor1 ou valor2

    escreva("F ou V : ", resultado, "\n")

    resultado = nao valor1 ou nao valor2

    escreva("F ou F : ", resultado, "\n")
  }
}
