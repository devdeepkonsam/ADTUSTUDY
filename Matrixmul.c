#include <stdio.h>

int main(){
    int matrix1[3][3],matrix2[3][3],mul[3][3],i,j,p;
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
            mul[i][j] =0;
            for(p=0;p<3;p++){
                mul[i][j] += matrix1[i][p] * matrix2[p][j];
            }
        }
    }
    printf("Resultant Matrix :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",mul[i][j]);
        }
        printf("\n");
    }
    return 0; 
    
}