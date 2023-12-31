#include <stdio.h>

int main() {
    
    printf ("NAME: GIRIBALA ARUN\nROLL NO: 28\n\n");
    
    int m, n, A[100], B[100], C[200];
    int i, a, p = 1, q = 1, r = 1;
    char ch;

    while (1) {
        printf("\n1. Enter polynomial A\n2. Enter polynomial B\n3. Add and display\n");
        printf("Enter the number: ");
        scanf("%d", &a);

        switch (a) {
            case 1: {
                printf("Terms in A: ");
                scanf("%d", &m);
                printf("Exponent and coefficient of A: ");
                for (i = 1; i <= (2 * m); i++) {
                    scanf("%d", &A[i]);
                }
                break;
            }  // case 1

            case 2: {
                printf("Terms in B: ");
                scanf("%d", &n);
                printf("Exponent and coefficient of B: ");
                for (i = 1; i <= (2 * n); i++) {
                    scanf("%d", &B[i]);
                }
                break;
            }  // case 2

            case 3: {
                while ((p <= (2 * m)) && (q <= (2 * n))) {
                    if (A[p] == B[q]) {
                        C[r + 1] = A[p + 1] + B[q + 1];
                        if (C[r + 1] != 0) {
                            C[r] = A[p];
                            r = r + 2;
                        }
                        p = p + 2;
                        q = q + 2;
                    } else if (A[p] < B[q]) {
                        C[r + 1] = B[q + 1];
                        C[r] = B[q];
                        q = q + 2;
                        r = r + 2;
                    } else {
                        C[r + 1] = A[p + 1];
                        C[r] = A[p];
                        p = p + 2;
                        r = r + 2;
                    }
                }  // while in case 3

                while (p <= (2 * m)) {
                    C[r + 1] = A[p + 1];
                    C[r] = A[p];
                    p = p + 2;
                    r = r + 2;
                }

                while (q <= (2 * n)) {
                    C[r + 1] = B[q + 1];
                    C[r] = B[q];
                    q = q + 2;
                    r = r + 2;
                }
                C[0] = r / 2;

                printf("Result in array format:\n");
                for (i = 0; i <= (2 * (m + n)); i++) {
                    printf("%d\t", C[i]);
                }

                // Terminate the loop after displaying the result
                return 0;
            }  // case 3

            default: {
                printf("Invalid choice\n");
            }
        }  // switch
    }  // while

    return 0;
}
