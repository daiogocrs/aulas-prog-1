programa {
    funcao inicio() {
        cadeia pais, primeiroPais = "", segundoPais = "", terceiroPais = ""
        inteiro ouro, prata, bronze, total, i = 1, qntPais = 3
        inteiro primeiro = -1, segundo = -1, terceiro = -1

        enquanto (i <= qntPais) {
            escreva("Digite o nome do pa�s: ")
            leia(pais)
            escreva("Digite a quantidade de medalhas de ouro: ")
            leia(ouro)
            escreva("Digite a quantidade de medalhas de prata: ")
            leia(prata)
            escreva("Digite a quantidade de medalhas de bronze: ")
            leia(bronze)

            total = ouro * 3 + prata * 2 + bronze * 1

            se (total > primeiro) {
                terceiro = segundo
                terceiroPais = segundoPais
                segundo = primeiro
                segundoPais = primeiroPais
                primeiro = total
                primeiroPais = pais
            } senao se (total > segundo) {
                terceiro = segundo
                terceiroPais = segundoPais
                segundo = total
                segundoPais = pais
            } senao se (total > terceiro) {
                terceiro = total
                terceiroPais = pais
            }

            i++
        }

        escreva("Classifica��o dos pa�ses por medalhas:\n")
        escreva("1� lugar: ", primeiroPais, " com ", primeiro, " pontos.\n")
        escreva("2� lugar: ", segundoPais, " com ", segundo, " pontos.\n")
        escreva("3� lugar: ", terceiroPais, " com ", terceiro, " pontos.\n")
    }
}
