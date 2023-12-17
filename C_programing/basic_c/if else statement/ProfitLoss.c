#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the cost price of the prouct : \n");
    scanf("%d", &cp);
    printf("Enter the selling price of the product : \n");
    scanf("%d", &sp);
    if (sp > cp)
    {
        sp = sp - cp;
        printf("There is profit of : %d", sp);
    }
    else if (cp > sp)
    {
        cp = cp - sp;
        printf("There is a loss of : %d", cp);
    }
    else if (cp == sp)
    {
        printf("There is No Profit, No Loss");
    }

    return 0;
}