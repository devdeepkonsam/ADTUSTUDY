#include <stdio.h>

int main(){
    int matrix1[3][3],matrix2[3][3],sum[3][3],i,j;
    printf("Enter the first matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrix2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]= matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("Resultant Matrix :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;    
}