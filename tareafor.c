/*# include<stdio.h>
int main(){
    
    int m, n;

    printf("Ingrese numero de (N) ");
    scanf("%d",&n);
    printf("Ingrese numero de (M) ");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++){
        for(int j=1; j<=m; j++){
            printf("%4d", i*j);
        }    
        printf("\n");

    }
    return 0;
}   
*/
/*int main(){
    int M, N;
    printf("Ingrese el valor de M: ");
    scanf("%d", &M);
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    printf("   |");
    for(int i = 1; i<=N; i++){
        printf("%4d", i);
    }
    printf("\n");
    printf("---+");
    for(int i = 1;i<=N; i++){
        printf("----");
    }
    printf("\n");
    for(int i=1;i<=M; i++){
        printf("%2d |", i);
        for(int j = 1;j<=N; j++){
            printf("%4d", i * j);
        }
        printf("\n");
    }





    return 0;
}
*/
# include<stdio.h>

