programa {
  funcao inicio() 
  {
    inteiro idade

    escreva("Digite sua idade: ")
    leia(idade)

    se (idade >= 5 e idade <= 7) {
      escreva("Sua categoria é Infantil A")
    } 
    se (idade >= 8 e idade <= 10) {
      escreva("Sua categoria é Infantil B")
    } 
    se (idade >= 11 e idade <= 13) {
      escreva("Sua categoria é Juvenil A")
    } 
    se (idade >= 14 e idade <= 17) {
      escreva("Sua categoria é Juvenil B")
    } 
    se (idade >= 18) {
      escreva("Sua categoria é Adulto")
    } 
  }
}
