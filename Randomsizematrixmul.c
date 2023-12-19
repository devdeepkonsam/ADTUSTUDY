#include <stdio.h>

int main(){
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of colums: ");
    scanf("%d",&n);
    // we are doing matrix multiplication of square matrix 
    int matrix1[m][n],matrix2[n][m],mul[m][m],i,j,p;
    printf("Enter the first matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix :\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            mul[i][j] =0;
            for(p=0;p<m;p++){
                mul[i][j] += matrix1[i][p] * matrix2[p][j];
            }
        }
    }
    printf("Resultant Matrix :");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d",mul[i][j]);
        }
        printf("\n");
    }
    return 0; 
    
}