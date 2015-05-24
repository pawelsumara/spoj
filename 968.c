#include <stdio.h>

int main() {
    int n,sum;
    sum=0;
    while(scanf("%d",&n)!=EOF)
    {

        printf("%d\n",sum+n);
        sum=sum+n;


    }

    return 0;
}

