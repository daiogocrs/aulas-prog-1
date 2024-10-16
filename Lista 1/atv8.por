programa {
  funcao inicio() {
    real venda, resultado
    inteiro percentual
    
    escreva("Digite o valor de venda do produto: ")
    leia(venda)
    escreva("Digite o valor de percentual do produto: ")
    leia(percentual)

    resultado = venda * (percentual/100)

    venda = venda + resultado

    escreva("O valor total da venda foi de ", venda, "\nO lucro foi de: ", resultado)
  }
}
