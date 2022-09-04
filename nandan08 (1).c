#include<stdio.h>
int rs(int s,int r,int q)
{
return s|q&~r;
}
int main()
{
int i,j,k,a,res=0;
int x,y,z;
int b;
printf("1.truth table of rs flip flop ");
printf("\n2.input operation \n");
printf("enter your choice");
scanf("%d",&a);
switch(a)
{
case 1:
printf ("s r q(t)|q(t+1)\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
if(i==1&&j==1)
{
char c='x';
printf("%d %d %d",i,j,k);
printf("\t|%c \n",c);
}
else{
int res=rs(i,j,k);
printf("%d %d %d",i,j,k);
printf("\t|  %d \n",res);

}

}

}

}
break;
case 2:
printf("enter the value of s,r,q(t)");
scanf("%d %d %d",&x,&y,&z);
if(x==1&&y==1){
printf("q(t+1)='x'\n");
}else{
res=rs(x,y,z);
printf("q(t+1)=%d\n",res);}
break;
default:printf("invalid ip");
}
printf("press 1 to continue and 0 to discontinue");
scanf("%d",&b);
if(b==1)
{
 main();
}else
return 0;
}