#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    int A[10][10],B[10][10];
    int i,j;
    int sum[10][10];
    printf("Enter the no of rows: ");
    scanf("%d",&r1);
    printf("Enter the no of coloums: ");
    scanf("%d",&c1);
    printf("Enter the no of rows: ");
    scanf("%d",&r2);
    printf("Enter the no of coloums: ");
    scanf("%d",&c2);
    if (c1==r2){
              printf("Enter the first matrix elements\n");
    for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){

    scanf("%d",&A[i][j]);}
    printf("\n");
    }
    printf("Enter the second matrix elements\n");

    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            sum[i][j]=0;
        }

    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for( int k=0;k<c1;k++){
                sum[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf(" %d\t",sum[i][j]);
        }
        printf("\n");
    }



    }
    else
        printf("Matrix multiplication is not possible");
        return 0;}
