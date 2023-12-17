#include <stdio.h>
void func(int a)
{
    printf("the value of a is %d\n", a);
}
int main()
{
    void (*ptr) (int) = &func;
    (*ptr)(10);
    return 0;

}