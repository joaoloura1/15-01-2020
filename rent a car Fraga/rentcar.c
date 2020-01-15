#include <stdio.h>

int main (){
    int km;
    float kmili;
    float diaria;
    float seguro;
    int categoria;
    float total;
    int dias;
    float total1;
    float estimativa;

    printf("Rent-a-car Fraga\n");
    printf("Precisa de carro para quantos dias?\n");
    scanf("%d", &dias);

    printf("Qual e categoria desejada?\n");
    printf(" 1 - Categoria A | 2 - Categoria B| 3 - Categoria C | 4 - Categoria D\n");
    scanf("%d", &categoria);

    switch(categoria){
        case 1:
        printf("Escolheu a categoria A\n");
        printf("Vai desejar: 1-kilometros ilimitados ou  2- Diaria + km?\n");
        scanf("%d", &km);
        if(km == 1){
        kmili = 27.50;
        printf("Vai desejar seguro?\n");
        printf("1-Sim --- 2-Não\n");
        scanf("%f", &seguro);
        if (seguro == 1){
            diaria = 14;
            seguro = 6.50;
            total = (kmili * dias) + seguro;
            total1 = (diaria * dias) + seguro;
            estimativa = (total - total1) / 0.17;
        printf("Dá um total de: %f euros\n", total);
        printf("Com a tarifa diaria+km dá %f euros ate %f km\n",total1, estimativa);    
        } else if( seguro == 2){
           diaria = 14;
           total = (kmili * dias);
           total1 = (diaria * dias);
           estimativa = (total - total1) / 0.17;
           printf("Dá um total de: %f euros com tarifa kilometros ilimitados\n", total);
           printf("Com a tarifa diaria+km dá %f euros até %f km\n", total1, estimativa);
        }
        }else if(km == 2){
         diaria = 14;
        printf("Vai desejar seguro?\n");
        printf("1-Sim --- 2-Não\n");
        scanf("%f", &seguro);
        if (seguro == 1){
            seguro = 6.50;
            total = ((diaria * dias) + (100*0.17)) + seguro;
        printf("Dá um total de: %f euros\n", total);    
        } else if( seguro == 2){
           total = (diaria * dias);
           printf("Dá um total de: %f euros\n", total);
            
        }
        

    }break;
        case 2:
        printf("Escolheu a categoria B\n");
        printf("Vai desejar: 1-kilometros ilimitados ou  2- Diaria + km?\n");
        scanf("%d", &km);
        if(km == 1){
        kmili = 32.50;
        printf("Vai desejar seguro?\n");
        printf("1-Sim --- 2-Não\n");
        scanf("%f", &seguro);
        if (seguro == 1){
            seguro = 7.50;
            total = (kmili * dias) + seguro;
        printf("Dá um total de: %f euros\n", total);    
        } else if( seguro == 2){
           total = (kmili * dias);
           printf("Dá um total de: %f euros\n", total);
        }
        }else if(km == 2){
         diaria = 17;
        printf("Vai desejar seguro?\n");
        printf("1-Sim --- 2-Não\n");
        scanf("%f", &seguro);
        if (seguro == 1){
            seguro = 7.50;
            total = ((diaria * dias) + (100*0.20)) + seguro;
        printf("Dá um total de: %f euros\n", total);    
        } else if( seguro == 2){
           total = (diaria * dias);
           printf("Dá um total de: %f euros\n", total);
            
        }
        

    }break;
        case 3:
        printf("Escolheu a categoria C\n");
        printf("Vai desejar: 1-kilometros ilimitados ou  2- Diaria + km?\n");
        scanf("%d", &km);
        if(km == 1){
        kmili = 37.50;
        printf("Vai desejar seguro?\n");
        printf("1-Sim --- 2-Não\n");
        scanf("%f", &seguro);
        if (seguro == 1){
            seguro = 8.50;
            total = (kmili * dias) + seguro;
        printf("Dá um total de: %f euros\n", total);    
        } else if( seguro == 2){
           total = (kmili * dias);
           printf("Dá um total de: %f euros\n", total);
        }
        }else if(km == 2){
         diaria = 20;
        printf("Vai desejar seguro?\n");
        printf("1-Sim --- 2-Não\n");
        scanf("%f", &seguro);
        if (seguro == 1){
            seguro = 8.50;
            total = ((diaria * dias) + (100*0.25)) + seguro;
        printf("Dá um total de: %f euros\n", total);    
        } else if( seguro == 2){
           total = (diaria * dias);
           printf("Dá um total de: %f euros\n", total);
            
        }
        

    }break;
        case 4:
        printf("Escolheu a categoria D\n");
        printf("Vai desejar: 1-kilometros ilimitados ou  2- Diaria + km?\n");
        scanf("%d", &km);
        if(km == 1){
        kmili = 40;
        printf("Vai desejar seguro?\n");
        printf("1-Sim --- 2-Não\n");
        scanf("%f", &seguro);
        if (seguro == 1){
            seguro = 10;
            total = (kmili * dias) + seguro;
        printf("Dá um total de: %f euros\n", total);    
        } else if( seguro == 2){
           total = (kmili * dias);
           printf("Dá um total de: %f euros\n", total);
        }
        }else if(km == 2){
         diaria = 22;
        printf("Vai desejar seguro?\n");
        printf("1-Sim --- 2-Não\n");
        scanf("%f", &seguro);
        if (seguro == 1){
            seguro = 10;
            total = ((diaria * dias) + (100*0.30)) + seguro;
        printf("Dá um total de: %f euros\n", total);    
        } else if( seguro == 2){
           total = (diaria * dias);
           printf("Dá um total de: %f euros\n", total);
            
        }
        

    }



}
}