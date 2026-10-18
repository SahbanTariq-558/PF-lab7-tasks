#include <stdio.h>

int main() {

    int arr[3][3][3];

    int i, j, k;

    int same12 = 1;
    int same13 = 1;
    int same23 = 1;

    printf("Enter 27 elements:\n");

    for (i = 0; i < 3; i++) {

        printf("Enter Layer %d:\n", i + 1);

        for (j = 0; j < 3; j++) {

            for (k = 0; k < 3; k++) {

                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    /* Compare Layer 1 and Layer 2 */

    for (j = 0; j < 3; j++) {

        for (k = 0; k < 3; k++) {

            if (arr[0][j][k] != arr[1][j][k]) {
                same12 = 0;
            }
        }
    }

    /* Compare Layer 1 and Layer 3 */

    for (j = 0; j < 3; j++) {

        for (k = 0; k < 3; k++) {

            if (arr[0][j][k] != arr[2][j][k]) {
                same13 = 0;
            }
        }
    }

    /* Compare Layer 2 and Layer 3 */

    for (j = 0; j < 3; j++) {

        for (k = 0; k < 3; k++) {

            if (arr[1][j][k] != arr[2][j][k]) {
                same23 = 0;
            }
        }
    }

    printf("\nLayer Comparison:\n");

    if (same12 == 1)
        printf("Layer 1 and Layer 2 are identical.\n");
    else
        printf("Layer 1 and Layer 2 are different.\n");

    if (same13 == 1)
        printf("Layer 1 and Layer 3 are identical.\n");
    else
        printf("Layer 1 and Layer 3 are different.\n");

    if (same23 == 1)
        printf("Layer 2 and Layer 3 are identical.\n");
    else
        printf("Layer 2 and Layer 3 are different.\n");

    return 0;
}
