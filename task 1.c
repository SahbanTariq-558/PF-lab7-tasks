#include <stdio.h>

int main() {
    int a[3][3];
    int transpose[3][3];
    int cofactor[3][3];
    int adjoint[3][3];
    float inverse[3][3];
    int determinant;

    int i, j;

    printf("Enter elements of 3x3 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[i][j] = a[j][i];
        }
    }

    printf("\nTranspose:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }


    determinant =
        a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
        - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
        + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    printf("\nDeterminant = %d\n", determinant);


    cofactor[0][0] =  (a[1][1] * a[2][2] - a[1][2] * a[2][1]);
    cofactor[0][1] = -(a[1][0] * a[2][2] - a[1][2] * a[2][0]);
    cofactor[0][2] =  (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    cofactor[1][0] = -(a[0][1] * a[2][2] - a[0][2] * a[2][1]);
    cofactor[1][1] =  (a[0][0] * a[2][2] - a[0][2] * a[2][0]);
    cofactor[1][2] = -(a[0][0] * a[2][1] - a[0][1] * a[2][0]);

    cofactor[2][0] =  (a[0][1] * a[1][2] - a[0][2] * a[1][1]);
    cofactor[2][1] = -(a[0][0] * a[1][2] - a[0][2] * a[1][0]);
    cofactor[2][2] =  (a[0][0] * a[1][1] - a[0][1] * a[1][0]);

    printf("\nCofactor Matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", cofactor[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            adjoint[i][j] = cofactor[j][i];
        }
    }

    printf("\nAdjoint Matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", adjoint[i][j]);
        }
        printf("\n");
    }


    if (determinant == 0) {
        printf("\nInverse does not exist because determinant is 0.\n");
    }
    else {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                inverse[i][j] = (float)adjoint[i][j] / determinant;
            }
        }

        printf("\nInverse Matrix:\n");

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%.2f ", inverse[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}