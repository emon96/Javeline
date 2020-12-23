#include <iostream>
#include<graphics.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define sw 1300
#define sh 700

FILE *in;
FILE *out;

void sdata();
int score=0,sc[10];
using namespace std;

int main()
{
    int i=0,j,p=0;
    in=fopen("in.txt","r");
    out=fopen("out.txt","w");


    initwindow(sw,sh,"Javeline",100,100);
    //sdata();
    while(1)
    {
        setactivepage(p);
        setvisualpage(1-p);
        cleardevice();
        readimagefile("1.jpg",000+i,100,175+i,200);
        if(GetAsyncKeyState(VK_SHIFT))
        readimagefile("s.jpg",300,500,435,530);
        else
            readimagefile("s.jpg",300,500,430,530);


        i++;
        delay(10);
    p=1-p;
    }

    getch();
    closegraph();
//printf("%d",score);
    return 0;
}
void sdata()
{
    int i=0,j,te,t;
    while(i<10)
    {fscanf(in,"%d",&sc[i]);
        i++;
    }
    for(i=0;i<10;i++)
    {
        if(score>=sc[i])
        {
            te=sc[i];
            sc[i]=score;
            for(j=i+1;j<10;j++)
            {
                t=sc[j];
                sc[j]=te;
                te=t;

            }
            goto end;
        }
    }
    end:
        for(i=0;i<10;i++)
        fprintf(out,"%d\n",sc[i]);
}
