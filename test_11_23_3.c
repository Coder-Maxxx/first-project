#include <stdio.h>
// void f(int n[])
// {
//     n[2] = 2;
// }
// int main()
// {
//     int m[5] = {5};
//     f(m);
//     printf("%d,%d,%d", m[1], m[2], m[3]);
//     return 0;
// }

// int main()
// {
//     int iq = 0;
//     while(scanf("%d",&iq) == 1)
//     {
//     if(iq >= 140)
//     printf("Genius");
//     }



//     return 0;
// }

int main()
{ 
    int a = 0;
    int b = 0;
    while(scanf("%d %d",&a ,&b) == 2)
    {
        if(a > b)
        {
            printf("%d>%d",a,b);
        }
        if(a == b)
        {
            printf("%d=%d",a,b);
        }
        if(a < b)
        {
            printf("%d<%d",a,b);
        }
    }


    return 0;
}