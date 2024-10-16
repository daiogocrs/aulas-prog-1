programa {
  funcao inicio() {
    inteiro num1, num2, num3

    escreva("Digite o primeiro número: ")
    leia(num1)
    escreva("Digite o segundo número: ")
    leia(num2)
    escreva("Digite o terceiro número: ")
    leia(num3)

    se (num1 >= num2 e num1 >= num3) {
      se (num2 >= num3) {
        escreva(num1, ", ", num2, ", ", num3)
      } senao {
        escreva(num1, ", ", num3, ", ", num2)
      }
    } senao se (num2 >= num1 e num2 >= num3) {
      se (num1 >= num3) {
        escreva(num2, ", ", num1, ", ", num3)
      } senao {
        escreva(num2, ", ", num3, ", ", num1)
      }
    } senao {
      se (num1 >= num2) {
        escreva(num3, ", ", num1, ", ", num2)
      } senao {
        escreva(num3, ", ", num2, ", ", num1)
      }
    }
  }
}
