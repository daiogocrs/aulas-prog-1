programa {
  funcao inicio() 
  {
    real preco, pagamento

    escreva("Digite o pre�o do produto: ")
    leia(preco)
    escreva("Digite a forma de pagamento:\n")
    escreva("1.� vista em dinheiro ou cheque, recebe 10% de desconto\n")
    escreva("2.� vista no cart�o de cr�dito, recebe 5% de desconto")
    escreva("3.Em duas vezes, pre�o normal da etiqueta do produto\n")
    escreva("4.Em tr�s vezes, pre�o normal da etiqueta mais juros de 10%\n")
    leia(pagamento)

    escolha (pagamento) {
      
      caso 1: escreva("O pre�o total �: R$", preco - (preco * 0.10))
        pare

      caso 2: escreva("O pre�o total �: R$", preco - (preco * 0.05))
        pare

      caso 3: escreva("O pre�o total �: R$", preco)
        pare

      caso 4: escreva("O pre�o total �: R$", preco + (preco * 0.10))
        pare

      caso contrario: escreva("Opera��o inv�lida!")
    }

  }
}