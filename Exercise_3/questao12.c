#include <stdio.h>
int main()
{
    int n, muie = 0, home = 0;
    float altura, maior, menor, somaF=0, somaM=0, razaoM, razaoF, total;
    char sexo;
    printf("Digite o numero de pessoas:\n");
    scanf("%d", &n);
    
    printf("Digite a altura e o sexo da pessoa 1:\n");
    scanf("%f", &altura);
    scanf(" %c", &sexo);

    maior = menor = altura;
    
    if (sexo == 'F' || sexo == 'f'){
        muie++;
        somaF += altura;
    }
    else if (sexo == 'M' || sexo == 'm'){
        home++;
        somaM += altura;
    }

    for(int i =2; i<=n; i++){
        printf("Digite a altura e o sexo da pessoa %d\n", i);
        scanf("%f", &altura);
        scanf(" %c", &sexo);
        if(altura > maior){
            maior = altura;
        }
        if (altura < menor){
            menor = altura;
        }

        if(sexo == 'm' || sexo == 'M'){
            home++;
            somaM += altura;

        }
        else if (sexo == 'F' || sexo == 'f'){
            muie++;
            somaF += altura;
        }
        
        

    }
    total = home + muie;
    razaoF = (muie/total)*100;
    razaoM = (home/total)*100;

    printf ("A maior altura é : %0.2f\n", maior);
    printf ("A menor altura é: %0.2f\n", menor);
    printf("A quantidade de mulheres é: %d\n", muie);
    printf ("A quantidade de homens é: %d\n", home);
        if(muie>0){
        printf("a altura media das mulheres é %0.2f\n", somaF/muie);
        printf("A porcentagem de mulheres é %0.2f%%\n", razaoF);
    }
    
    if(home>0){
        printf("A altura medio dos homens é %0.2f\n", somaM/home);
        printf("A porcentagem de homens é %0.2f%%\n", razaoM);
    }
    return 0;
}
