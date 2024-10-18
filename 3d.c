#include <stdio.h>

int main() {
    int marks[2][2][2] = { 20, 89, 82, 56, 78, 67};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
printf("%d ", marks[i][j][k]);
 }
 printf("\n");
 }
printf("\n \n");
    }
return 0;
}