programa {
    funcao inicio() {
        real altura, menor, maior, media, mediaMulher = 0
        inteiro qtdMulheres = 0, qtdTotal = 20, i = 1
        caracter sexo
        
        real somaAlturas = 0, somaAlturasMulheres = 0

        menor = 9999
        maior = 0

        enquanto (i <= qtdTotal) {
            escreva("Digite seu sexo: (Feminino: f | Masculino: m): ")
            leia(sexo)
            escreva("Digite sua altura: ")
            leia(altura)

            se (altura > maior) {
                maior = altura
            }
            se (altura < menor) {
                menor = altura
            }

            somaAlturas += altura

            se (sexo == 'f') {
                somaAlturasMulheres += altura
                qtdMulheres++
            }

            i++
        }

        media = somaAlturas / qtdTotal
        se (qtdMulheres > 0) {
            mediaMulher = somaAlturasMulheres / qtdMulheres
        } senao {
            mediaMulher = 0
        }

        escreva("A maior altura é: ", maior, "\n")
        escreva("A menor altura é: ", menor, "\n")
        escreva("A média de altura das mulheres é: ", mediaMulher, "\n")
        escreva("A média de altura da turma é: ", media, "\n")
    }
}
