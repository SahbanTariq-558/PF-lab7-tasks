#include <stdio.h>

int main() {

    int arr[3][3][3];

    int i, j, k;
    int layerSum;
    int total = 0;
    int count = 0;

    printf("Enter 27 elements:\n");

    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {

            for (k = 0; k < 3; k++) {

                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("\n3D Array:\n");

    for (i = 0; i < 3; i++) {

        printf("\nLayer %d:\n", i + 1);

        for (j = 0; j < 3; j++) {

            for (k = 0; k < 3; k++) {

                printf("%d ", arr[i][j][k]);
            }

            printf("\n");
        }
    }


    printf("\nLayer Totals:\n");

    for (i = 0; i < 3; i++) {

        layerSum = 0;

        for (j = 0; j < 3; j++) {

            for (k = 0; k < 3; k++) {

                layerSum = layerSum + arr[i][j][k];
            }
        }

        printf("Layer %d = %d\n", i + 1, layerSum);
    }


    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {

            for (k = 0; k < 3; k++) {

                total = total + arr[i][j][k];
                count++;
            }
        }
    }

    printf("\nOverall Total = %d", total);

    printf("\nNumber of Elements = %d", count);

    printf("\nAverage = %.2f", (float)total / count);

    return 0;
}