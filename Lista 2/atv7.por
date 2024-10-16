programa {
  funcao inicio() {
    real idade
    cadeia nome
    logico maior

    escreva("Digite seu nome: ")
    leia(nome)
    escreva("Digite sua idade: ")
    leia(idade)

    maior = idade >= 18

    escreva("Nome: ", nome, "\n")
    escreva("Maior de idade? ", maior)
}
}