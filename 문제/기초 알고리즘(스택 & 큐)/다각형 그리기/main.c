#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,m,i,j,x,y,c=0,r=0;
    fscanf(in,"%d",&n);
    int basic[n],board[30][30]={0,},board1[50][50]={0,};
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&basic[i]);
    }
    fprintf(in,"\n");
    fscanf(in,"%d",&m);
    int trans[m][n];
    int check[m];
    //printf("%d",m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(in,"%d",&trans[i][j]);
        }
    }
    x=15,y=15;
    for(i=0;i<n;i++)
    {
        board[x][y]=1;

        switch(basic[i])
        {
        case 1:
            y++;
            break;
        case 2:
            x--;
            break;
        case 3:
            y--;
            break;
        case 4:
            x++;
            break;
        }
        //printf("%d %d %d\n",basic[i],x,y);
    }
    for(i=0;i<m;i++)
    {

        for(j=0;j<30;j++)
        {
            for(int k=0;k<30;k++)
            {
                board1[j][k]=0;
            }
        }
        x=15,y=15;
        for(j=0;j<n;j++)
        {
            r=0;
            board1[x][y]=1;
            switch(trans[i][j])
            {
            case 1:
                y++;
                break;
            case 2:
                x--;
                break;
            case 3:
                y--;
                break;
            case 4:
                x++;
            }
        }
        for(j=0;j<30;j++)
        {
            for(int k=0;k<30;k++)
            {
                if(board1[j][k]!=board[j][k])
                    r++;
            }
        }
        if(r==0)
        {
            c++;
            check[i]=1;
        }
    }
    printf("%d\n",c);
    for(i=0;i<m;i++)
    {
        if(check[i]==1)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",trans[i][j]);
            }
        }
    }
    return 0;
}
