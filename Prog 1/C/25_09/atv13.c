#include <stdio.h>

#define QTD_MORADORES 10

int main ()
{
    char elevador, periodo;
    int i, am, av, an, bm, bv, bn, cm, cv, cn;

    am = av = an = 0; 
    bm = bv = bn = 0; 
    cm = cv = cn = 0;

    for(i = 1; i <= QTD_MORADORES; i++){
        printf("Qual o elevador que você utiliza? ");
        scanf("%c", &elevador);
        getchar();
        printf("Qual o seu periodo de uso? ");
        scanf("%c", &periodo);
        getchar();
    }

    switch (elevador)
    {
    case 'a': 
    case 'A': if (periodo == 'M' || periodo == 'm'){
                    am++;
                }
                if (periodo == 'V' || periodo == 'v'){
                    av++;
                }
                if (periodo == 'N' || periodo == 'n'){
                    an++;
    }
        break;
        
    case 'b': 
    case 'B': if (periodo == 'M' || periodo == 'm'){
                    bm++;
                }
                if (periodo == 'V' || periodo == 'v'){
                    bv++;
                }
                if (periodo == 'N' || periodo == 'n'){
                    bn++;
                }
        break;

    case 'c': 
    case 'C': if (periodo == 'M' || periodo == 'm'){
                    cm++;
                }
                if (periodo == 'V' || periodo == 'v'){
                    cv++;
                }
                if (periodo == 'N' || periodo == 'n'){
                    cn++;
                }
        break;
    }

    return 0;
}