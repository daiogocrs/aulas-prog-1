programa {
  funcao inicio() 
  {
    real preco, pagamento

    escreva("Digite o preço do produto: ")
    leia(preco)
    escreva("Digite a forma de pagamento:\n")
    escreva("1.À vista em dinheiro ou cheque, recebe 10% de desconto\n")
    escreva("2.À vista no cartão de crédito, recebe 5% de desconto")
    escreva("3.Em duas vezes, preço normal da etiqueta do produto\n")
    escreva("4.Em três vezes, preço normal da etiqueta mais juros de 10%\n")
    leia(pagamento)

    escolha (pagamento) {
      
      caso 1: escreva("O preço total é: R$", preco - (preco * 0.10))
        pare

      caso 2: escreva("O preço total é: R$", preco - (preco * 0.05))
        pare

      caso 3: escreva("O preço total é: R$", preco)
        pare

      caso 4: escreva("O preço total é: R$", preco + (preco * 0.10))
        pare

      caso contrario: escreva("Operação inválida!")
    }

  }
}