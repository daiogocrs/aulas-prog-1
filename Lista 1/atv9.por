programa {
  funcao inicio() {
    real compra, venda, resultado

    escreva("Digite o valor de compra do produto: ")
    leia(compra)
    escreva("Digite o valor de venda do produto: ")
    leia(venda)

    resultado = venda - compra

    escreva("O lucro de venda foi: ", resultado)
  }
}
