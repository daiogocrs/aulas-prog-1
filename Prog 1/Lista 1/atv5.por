programa {

  inclua biblioteca Matematica --> m

  funcao inicio() {
    inteiro base, expoente, resultado

    escreva("Digite a base: ")
    leia(base)
    escreva("Digite o expoente: ")
    leia(expoente)

    resultado = m.potencia(base, expoente)

    escreva("O base ", base, " no expoente ", expoente, " é: " , resultado)
  }
}
