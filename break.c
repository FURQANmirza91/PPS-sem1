#include <stdio.h>

int main()
{
    int a[5], key, i, pos = 1;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            pos = i + 1;
            break;
        }
    }

    printf("%d", pos);

    return 0;
}
