#include <iostream>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define sw 1300
#define sh 700

using namespace std;

int level3();
int main()
{
    initwindow(sw,sh,"Javeline",100,100);

    /*int count=0,p=0,c=-50,times=0;
    int ra;
    again:

    srand(time(NULL));
    ra=rand()%200+500;
    printf("%d\n",ra);
while(1)
{
    setactivepage(p);
    setvisualpage(1-p);
   cleardevice();

    readimagefile("wall4.jpg",0,sh-100,500,sh+200);
    if(count%4==0)
    readimagefile("edit2.jpg",2*2*c,ra,40+2*2*c+20+20,ra+45);
    else if(count%3==0)
        readimagefile("edit3.jpg",2*2*c,ra,40+20+2*2*c+20,ra+45);
     else if(count%2==0)
        readimagefile("edit4.jpg",2*2*c,ra,40+20+2*2*c+20,ra+45);
         else if(count%1==0)
        readimagefile("edit5.jpg",2*2*c,ra,40+20+2*2*c+20,ra+45);
        count++;
        if(count>20)
            count=0;
        delay(70);
        p=1-p;

        if(GetAsyncKeyState(VK_LEFT))
        {
            times++;
            goto again;

        }
}
end:*/
level3();
    getch();
    closegraph();

    return 0;
}

int  level3(void)
{
    int point=0,times=0;
    again:
        printf("%d   times\n",times);
        int count2=0;
    int p=0,run=1,ja=5,nr=0,cou=0,i=2,ra,bir=5,r,k;
    double y=0, f=0,j=0,jd=0,bd=0,db=0,bod=0;
    char pr[100];
    int fa[]={172,26,175,21,170,16,175,16,179,12,183,16,188,16,183,21,186,26,179,22,172,26};
    int fs[]={195,26,198,21,193,16,198,16,202,12,206,16,211,16,206,21,209,26,202,22,195,26};
    int ft[]={218,26,221,21,216,16,221,16,225,12,229,16,234,16,229,21,232,26,225,22,218,26};
    int br,count=0;
    srand(time(NULL));
    ra=rand()%8;
    r=ra;
    if(ra%4==0)
        {
            ra=500+ra*50;
            i=4;

        }
    else if(ra%3==0)
        {
            ra=ra*50;
            i=5;
            k=2;
        }
    else if(ra%2==0)
    {
        ra=ra*50;
        i=3;
        k=3;

    }

    else
        {

            ra=400+ra*20;
            i=2;
            k=4;
        }
    while(1)
    {

        setactivepage(p);
        setvisualpage(1-p);
        cleardevice();

        if(GetAsyncKeyState(VK_SHIFT))
            return 0;
        ////background////


        readimagefile("wall4.jpg",0,sh-100,500,sh+200);
        //////star//////
        //outtextxy(120,10,"Stars:");
        setcolor(RED);
        if(point>=100)
            {
                drawpoly(11,fa);
                setfillstyle(SOLID_FILL,RED);
                floodfill(179,14,RED);
            }

        else
            drawpoly(11,fa);
        setcolor(YELLOW);
        if(point>=200)
            {

                drawpoly(11,fs);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(202,14,YELLOW);
            }
        else
            drawpoly(11,fs);
        setcolor(GREEN);
        if(point>=300)
            {

                drawpoly(11,ft);
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(225,14,GREEN);
            }
        else
            drawpoly(11,ft);

        /////target/////
        if(r%4==0)
        {
line(15+f+j,sh-122-y+bod,70+f+j,sh-130-y+jd+bod);

        if(count%4==0)
            readimagefile("edit2.jpg",ra+count*i,sh-count*i,ra+50+count*i,sh+30-count*i);
        else if(count%3==0)
            readimagefile("edit3.jpg",ra+count*i,sh-count*i,ra+50+count*i,sh+30-count*i);
        else if(count%2==0)
            readimagefile("edit4.jpg",ra+count*i,sh-count*i,ra+50+count*i,sh+30-count*i);
        else if(count%1==0)
            readimagefile("edit5.jpg",ra+count*i,sh-count*i,ra+50+count*i,sh+30-count*i);
            if((70+f+j>ra+count*i&&70+f+j<ra+50+count*i)&&(sh-130-y+jd+bod>sh-count*i&&sh-130-y+jd+bod<sh+30-count*i))
            {
                point+=100;
                times++;
                goto again;
            }
        }
        else if(r%3==0)
        {
           if(count%4==0)
            readimagefile("edit2.jpg",ra+count*i*k,-30+count*i,ra+50+count*i*k,0+count*i);
        else if(count%3==0)
            readimagefile("edit3.jpg",ra+count*i*k,-30+count*i,ra+50+count*i*k,0+count*i);
        else if(count%2==0)
            readimagefile("edit4.jpg",ra+count*i*k,-30+count*i,ra+50+count*i*k,0+count*i);
        else if(count%1==0)
            readimagefile("edit5.jpg",ra+count*i*k,-30+count*i,ra+50+count*i*k,0+count*i);
               if((70+f+j>ra+count*i*k&&70+f+j<ra+50+count*i*k)&&(sh-130-y+jd+bod>-30+count*i&&sh-130-y+jd+bod<0+count*i))
            {
                point+=100;
                times++;
                goto again;
            }

        }
        else if(r%2==0)
        {
           if(count%4==0)
            readimagefile("edit2.jpg",-50+count*i*k,ra+count*i,0+count*i*k,ra+30+count*i);
        else if(count%3==0)
            readimagefile("edit3.jpg",-50+count*i*k,ra+count*i,0+count*i*k,ra+30+count*i);
        else if(count%2==0)
            readimagefile("edit4.jpg",-50+count*i*k,ra+count*i,0+count*i*k,ra+30+count*i);
        else if(count%1==0)
            readimagefile("edit5.jpg",-50+count*i*k,ra+count*i,0+count*i*k,ra+30+count*i);

               if((70+f+j>-50+count*i*k&&70+f+j<k*count*i)&&(sh-130-y+jd+bod>ra+count*i&&sh-130-y+jd+bod<ra+30+count*i))
            {
                point+=100;
                times++;
                goto again;
            }
        }
        else
        {
            if(count%4==0)
            readimagefile("edit2.jpg",-50+count*i*k,ra-count*i,0+count*i*k,ra+30-count*i);
        else if(count%3==0)
            readimagefile("edit3.jpg",-50+count*i*k,ra-count*i,0+count*i*k,ra+30-count*i);
        else if(count%2==0)
            readimagefile("edit4.jpg",-50+count*i*k,ra-count*i,0+count*i*k,ra+30-count*i);
        else if(count%1==0)
            readimagefile("edit5.jpg",-50+count*i*k,ra-count*i,0+count*i*k,ra+30-count*i);

               if((70+f+j>-50+count*i*k&&70+f+j<k*count*i)&&(sh-130-y+jd+bod>ra-count*i&&sh-130-y+jd+bod<ra+30-count*i))
            {
                point+=100;
                times++;
                goto again;
            }
        }
        delay(30);
    ///////~target~//////////
    ////point////
    setcolor(WHITE);

    sprintf(pr,"Point : %d",point);
    outtextxy(10,10,pr);
    //////throw again///////
    if(sh+30-count*i<-30)
    {
        times++;
        goto again;
    }
    if(70+f+j>sw+150)
    {
        times++;
        goto again;
    }
    /////point condition///////

    if(bir==0)
    {
        settextstyle(3,0,5);
        outtextxy(500,300,"PERFECT");
        settextstyle(3,0,2);
    }

    /////~point condition~//////
            if(run!=0&&nr!=1)
                readimagefile("j1.jpg",20,sh-140+bod,60,sh-100+bod);
            else if(nr==1)
                readimagefile("j4.jpg",20+f,sh-140+bod,40+f,sh-100+bod);
          //  else if(count%4==0)
              //  readimagefile("j2.jpg",20+f,sh-140,60+f,sh-100);
            //else if(count%3==0)
               //readimagefile("j3.jpg",20+f,sh-140,60+f,sh-100);
            else if(count%2==0)
                readimagefile("j2.jpg",20+f,sh-140+bod,60+f,sh-100+bod);
            else if(count%1==0)
                readimagefile("j3.jpg",20+f,sh-140+bod,60+f,sh-100+bod);
            line(15+f+j,sh-122-y+bod,70+f+j,sh-130-y+jd+bod);
            line(15+f+j,sh-121-y+bod,70+f+j,sh-129-y+jd+bod);
            //line(15,sh-120,70,sh-129);
            if(20+f>500)
                bod+=10;
            if(bod>150)
            {
                times++;
                goto again;

            }

        if(GetAsyncKeyState(VK_LEFT))
        {
            cleardevice();
            times++;
            delay(200);
            goto again;
        }
        if(GetAsyncKeyState(VK_RIGHT)&&nr==0)
            run=0;
        if(run==0)
            f+=11;
        if(GetAsyncKeyState(VK_SPACE))
        {
            nr=1;
            run=5;
            ja=0;
        }
        if(ja==0)
            {
                j+=20;

                if(f<50)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.094;
                        y=2.5*sqrt(j);
                    }
                    else if(f<75)
                    {
                        y=3.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.104;
                    }
                else if(f<100)
                    {
                        y=4*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.14;
                    }
                    else if(f<125)
                    {
                        y=5.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.164;
                    }
                else if(f<150)
                    {
                        y=7*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.174;
                    }
                    else if(f<175)
                    {
                        y=8*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.184;
                    }
                else if(f<200)
                    {
                        y=9.5*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.184;
                    }
                    else if(f<225)
                    {
                        y=10.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.2;
                    }
                else if(f<250)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.1904;
                        y=11*sqrt(j);
                    }
                    else if(f<275)
                    {
                        y=12*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.204;
                    }
                else if(f<300)
                    {
                        y=13*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.21041;
                    }
                    else if(f<325)
                    {
                        y=14*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.22047;
                    }
                else if(f<350)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.23022;
                        y=15*sqrt(j);
                    }
                    else if(f<375)
                    {
                        y=15.5*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.24047;
                    }
                else if(f<400)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.25053;
                    y=16*sqrt(j);
                    }
                    else if(f<425)
                    {
                        y=17*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.26057;
                    }
                else if(f<450)
                    {
                        y=18*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.27064;
                    }
                    else if(f<475)
                    {
                        y=19*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.28067;
                    }
                else if(f<500)
                    {
                        y=20*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.065;
                    }
            }
        if(60+f>510)
        {
            bd+=.5;
        }
        setcolor(15);
        outtextxy(sw-750,10,"Press SHIFT To Exit");
        /*circle(50,600,2);
        circle(100,600,2);
        circle(150,600,2);
        circle(200,600,2);
        circle(250,600,2);
        circle(300,600,2);
        circle(350,600,2);
        circle(400,600,2);
        circle(450,600,2);
        circle(500,600,2);
        circle(sw-5,50,2);
        circle(sw-5,100,2);
        circle(sw-5,150,2);
        circle(sw-5,200,2);
        circle(sw-5,250,2);
        circle(sw-5,300,2);
        circle(sw-5,350,2);
        circle(sw-5,400,2);
        circle(sw-5,450,2);
        circle(sw-5,500,2);*/


        count++;
        if(times==10)
        {
            setactivepage(0);
            setvisualpage(0);

        }
        p=1-p;

    }
}
