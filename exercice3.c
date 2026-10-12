#include <stdio.h>

int main()
{
    int n, essai, i, gagne = 0;
    int a, b, c, d;
    int x, y, z, t;

    do
    {
        printf("Joueur 1, saisir un nombre de 4 chiffres : ");
        scanf("%d", &n);
    } while (n < 1000 || n > 9999);

    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;

    for (i = 1; i <= 5 && gagne == 0; i++)
    {
        do
        {
            printf("Essai %d : ", i);
            scanf("%d", &essai);
        } while (essai < 1000 || essai > 9999);

        x = essai / 1000;
        y = (essai / 100) % 10;
        z = (essai / 10) % 10;
        t = essai % 10;

        if (essai == n)
        {
            printf("Affichage : %d\n", n);
            printf("Gagne !\n");
            gagne = 1;
        }
        else
        {
            printf("Affichage : ");
            printf("%c", (x == a) ? '0' + x : '*');
            printf("%c", (y == b) ? '0' + y : '*');
            printf("%c", (z == c) ? '0' + z : '*');
            printf("%c\n", (t == d) ? '0' + t : '*');
        }
    }

    if (gagne == 0)
        printf("Perdu !\n");

    return 0;
}
