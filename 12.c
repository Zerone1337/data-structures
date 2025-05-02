#include<stdio.h>
#include<stdlib.h>
int main(){
int i,j;
//scanf("%d %d",i,j);
char A[2][3]={{'B','D',' '},{'A','C','E'}};
for(int i=0;i<3;i+=1)
{
    for (int j=0; j<3; j+=2)
    {
        printf("%c\n",A[i][j]);
        if(i==0 && j==1) continue;
    }
  }
  return 0;
}