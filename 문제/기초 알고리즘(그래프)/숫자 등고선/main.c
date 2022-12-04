#include<stdio.h>
#include<stdlib.h>
int contour(int nl[][100],int n,int x,int y,int k)
{
    int i,j,r;

}
int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");
    int n,x,y,i,j;
    fscanf(in,"%d %d %d",&n,&x,&y);
    int numberline[100][100]={0,};
    int **result;
    numberline[x-1][y-1]=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            //printf("%2d",numberline[i][j]);
        }
        //printf("\n");
    }
    printf("\n");
    result=contour(numberline,10,x-1,y-1,1);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
