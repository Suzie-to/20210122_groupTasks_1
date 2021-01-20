#include <stdio.h>

int main(void)
{
    float celzii = 0;
    float farenh = 0;
    printf(" | Celzii\t|\tFarenhait|\n");
    for (celzii = -50; celzii <= 150; celzii += 5)
    {
        farenh = celzii * 9 / 5 + 32;
        printf("\n | %.2f\t|\t%.2f |\n", celzii, farenh);
    }
    return 0;
}