#include <stdio.h>
#include <string.h>

void decrypt(char *c)
{
    char *p = c;
    while (*p != '\0')
    {
        *p -= 10;
        p++;
    }
}

void encrypt(char *c)
{
    char *p = c;
    while (*p != '\0')
    {
        *p += 10;
        p++;
    }
}

int main(void)
{
    char a[20];
    int n;
    printf("Enter 1 to Decrypt and 2 to Encrypt: ");
    scanf("%d", &n);
    getchar();
    printf("Enter text: ");
    fgets(a, sizeof(a), stdin);
    if (n == 1)
    {
        decrypt(a);
    }
    else if (n == 2)
    {
        encrypt(a);
    }
    else
    {
        printf("Error");
        return 0;
    }
    printf("%s", a);
    return 0;
}
