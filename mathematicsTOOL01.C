//Ravi Prakash.
//17-09-24.

#include <stdio.h>

int main()
{

    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int i = 2;

    if (num == 2 || num == 1)
    {
        printf("It is a Prime Number.");
        goto end;
    }

    while (i < num)
    {
        if (num % i == 0)
        {
            printf("It is a Composite Number.");
            break;
        }
        else
        {
            printf("It is a Prime Number.");
            break;
        }

        i++;
    }
end:

    return 0;
}

// Alternate method:

#include <stdio.h>

int main()
{

    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        int n = (num % i);
        if (n == 0)
        {
            printf("It is a Composite number.");
            break;
        }
        else
        {
            printf("It is a Prime number.");
            break;
        }
    }

    if (num == 1 || num == 2)
    {
        printf("It is a Prime Number.");
    }

    return 0;
}

