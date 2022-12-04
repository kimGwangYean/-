#include <stdio.h>
#include <stdlib.h>
int galbi(int n)
{
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,c,j,k=1,l=0,y=0,p,s;
    for(i=1;i<=n;i++)
    {
        k*=10;
    }
    //printf("%d",k);
    for(i=1;i<10;i++)
    {
        c=0;
        for(j=1;j<i;j++)
        {
           if(i%j==0)
           {
               c++;
           }
        }
        if(c==1)
        {
            for(j=1;j<10;j++)
            {
                l=0;
                s=(10*i)+j;
                for(p=1;p<(10*i)+j;p++)
                {
                    if(s%p==0)
                    {
                       l++;
                    }
                }
                if(l==1)
                    fprintf(out,"%d\n",s);

            }
        }

    }
}
