#include <stdio.h>
void main()
{
    int m, *ab;

    m=29;
    printf("values of m %d\n",m);
    printf("address of m %p\n",&m);
    printf("\n");
    ab=&m;
    printf("values of pointer ab %d\n",*ab);
    printf("address of pointer ab %p\n",ab);
    printf("\n");
    m=34;
    printf("values of pointer ab %d\n",*ab);
    printf("address of pointer ab %p\n",ab);
    printf("\n");
    *ab=7;
    printf("values of m %d\n",m);
    printf("address of m %p\n",&m);
}
