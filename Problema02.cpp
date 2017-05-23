#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int alice[3];
    int bob[3];
    scanf("%d %d %d", &alice[0], &alice[1], &alice[2]);
    scanf("%d %d %d", &bob[0], &bob[1], &bob[2]);

    int resultado_alice = 0;
    int resultado_bob = 0;
    for (int i = 0; i < 3; i++) {
      if (alice[i] > bob[i])
        resultado_alice++;
      if (bob[i] > alice[i])
        resultado_bob++;
    }
    printf("%d %d\n", resultado_alice, resultado_bob);
    return 0;
}