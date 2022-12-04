#include <stdio.h>
#include <stdlib.h>
int add(int n)
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int i,j,f,k,m,p,t,o,L=0,M=0;
    int **dice;
    int **TLqkf;
    int **qudtls;
    fscanf(in,"%d",&i);
    dice=(int**)malloc(sizeof(int*)*n);
    TLqkf=(int**)malloc(sizeof(int*)*n);
    qudtls=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
    {
        dice[i]=(int*)malloc(sizeof(int)*6);
        TLqkf[i]=(int*)malloc(sizeof(int)*6);
        qudtls[i]=(int*)malloc(sizeof(int)*6);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<6;j++)
        {
            fscanf(in,"%d",&dice[i][j]);
        }
    }
    for(m=0;m<6;m++)
    {
        L=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<6;j++)
            {
                TLqkf[i][j]=dice[i][j];
            }
        }
        k=dice[0][m];
        for(i=1;i<n;i++)
        {
            for(j=0;j<6;j++)
            {
                if(TLqkf[i][j]==k)
                {
                    break;
                }
            }
            switch(j)
            {
                case 0 :
                    k=TLqkf[i][5];
                    TLqkf[i][0]=0;
                    TLqkf[i][5]=0;
                    break;
                case 1 :
                    k=TLqkf[i][3];
                    TLqkf[i][1]=0;
                    TLqkf[i][3]=0;
                    break;
                case 2 :
                    k=TLqkf[i][4];
                    TLqkf[i][2]=0;
                    TLqkf[i][4]=0;
                    break;
                case 3 :
                    k=TLqkf[i][1];
                    TLqkf[i][1]=0;
                    TLqkf[i][3]=0;
                    break;
                case 4 :
                    k=TLqkf[i][2];
                    TLqkf[i][2]=0;
                    TLqkf[i][4]=0;
                    break;
                case 5 :
                    k=TLqkf[i][0];
                    TLqkf[i][0]=0;
                    TLqkf[i][5]=0;
                    break;
            }
            for(j=0;j<n;j++)
            {
                for(p=0;p<6;p++)
                {
                    qudtls[j][p]=TLqkf[j][p];
                }
            }
            if(m==0 || m==5)
            {
                qudtls[0][0]=0;
                qudtls[0][5]=0;
            }
            else if(m==1 || m==3)
            {
                qudtls[0][1]=0;
                qudtls[0][3]=0;
            }
            else if(m==2 || m==4)
            {
                qudtls[0][2]=0;
                qudtls[0][4]=0;
            }
            for(j=0;j<n;j++)
            {
                for(p=0;p<5;p++)
                {
                    for(o=p;o<6;o++)
                    {
                        if(qudtls[j][p]>qudtls[j][o])
                        {
                            t=qudtls[j][p];
                            qudtls[j][p]=qudtls[j][o];
                            qudtls[j][o]=t;
                        }
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            L+=qudtls[i][5];
        }
        if(L>M)
        {
            M=L;
        }
    }
    return M;
}
