#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input Matrix A
    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    // Input Matrix B
    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &b[i][j]);

    // 1. ADDITION
    printf("\nAddition of matrices:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // 2. SADDLE POINT (on matrix A)
    int min, colIndex, found = 0;
    for(i=0;i<r;i++) {
        min = a[i][0];
        colIndex = 0;

        for(j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                colIndex = j;
            }
        }

        for(j=0;j<r;j++) {
            if(a[j][colIndex] > min)
                break;
        }

        if(j == r) {
            printf("\nSaddle point: %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("\nNo saddle point found\n");

    // 3. INVERSE (only if square)
    if(r == c) {
        int det;

        // Only for 2x2 (simple version)
        if(r == 2) {
            det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

            if(det == 0) {
                printf("\nInverse does not exist\n");
            } else {
                printf("\nInverse matrix:\n");
                printf("%.2f %.2f\n", (float)a[1][1]/det, (float)-a[0][1]/det);
                printf("%.2f %.2f\n", (float)-a[1][0]/det, (float)a[0][0]/det);
            }
        } else {
            printf("\nInverse only implemented for 2x2 matrix\n");
        }
    } else {
        printf("\nNot a square matrix, inverse not possible\n");
    }

    // 4. MAGIC SQUARE (on matrix A)
    if(r == c) {
        int sumRow, sumCol, diag1=0, diag2=0;
        int magic = 1;

        int target = 0;
        for(j=0;j<c;j++)
            target += a[0][j];

        for(i=0;i<r;i++) {
            sumRow = 0;
            for(j=0;j<c;j++)
                sumRow += a[i][j];

            if(sumRow != target)
                magic = 0;
        }

        for(j=0;j<c;j++) {
            sumCol = 0;
            for(i=0;i<r;i++)
                sumCol += a[i][j];

            if(sumCol != target)
                magic = 0;
        }

        for(i=0;i<r;i++) {
            diag1 += a[i][i];
            diag2 += a[i][r-i-1];
        }

        if(diag1 != target || diag2 != target)
            magic = 0;

        if(magic)
            printf("\nIt is a magic square\n");
        else
            printf("\nNot a magic square\n");
    } else {
        printf("\nMagic square not possible (not square matrix)\n");
    }

    return 0;
}
