#include <stdio.h>

int funcao1(int x, int y)
{
    return (3 * x) * (3 * x) + y * y;
}

int funcao2(int x, int y)
{
    return 2 * (x * x) + (5 * y) * (5 * y);
}

int funcao3(int x, int y)
{
    return -100 * x + y * y * y;
}

int main()
{
    int N, x, y, rafael, beto, carlos;

    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d %d", &x, &y);

        rafael = funcao1(x, y);
        beto = funcao2(x, y);
        carlos = funcao3(x, y);

        if (rafael > beto && rafael > carlos)
            printf("Rafael ganhou\n");
        else if (beto > rafael && beto > carlos)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }

    return 0;
}