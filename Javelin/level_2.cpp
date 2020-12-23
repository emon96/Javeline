#include <iostream>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define sw 1300
#define sh 700

using namespace std;
int level2();
int main()
{
    initwindow(sw,sh,"Javeline",100,100);
  level2();


    getch();
    closegraph();

    return 0;
}



int  level2(void)
{
    int point=0,times=0;
    again:
        printf("%d   times\n",times);
        int count2=0;
    int p=0,run=1,ja=5,nr=0,cou=0,i,ra;
    double y=0, f=0,j=0,jd=0,bd=0,db=0,bod=0;
    char pr[100];
    int fa[]={172,26,175,21,170,16,175,16,179,12,183,16,188,16,183,21,186,26,179,22,172,26};
    int fs[]={195,26,198,21,193,16,198,16,202,12,206,16,211,16,206,21,209,26,202,22,195,26};
    int ft[]={218,26,221,21,216,16,221,16,225,12,229,16,234,16,229,21,232,26,225,22,218,26};
    int br,count=0;
    srand(time(NULL));
    ra=rand()%11;
    ra*=70;

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
        outtextxy(120,10,"Stars:");
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

      /////////target/////
      setcolor(WHITE);
      //arc(600,sh-300,0,180,30);
        readimagefile("para.jpg",540+ra,sh+10-count*2,600+ra,sh+70-count*2);
        if(sh+70-count<-10)
        {
            times++;
            goto again;
        }
    ///////~target~//////////
    ////point////
    setcolor(WHITE);

    sprintf(pr,"Point : %d",point);
    outtextxy(10,10,pr);
    //////throw again///////
    if(70+f+j>sw+150)
    {
        times++;
        goto again;
    }
    /////point condition///////

        if((70+f+j>=555+ra&&70+f+j<=590+ra)&&(sh-130-y+jd+bod>=sh+10-count*2&&sh-130-y+jd+bod<=sh+70-count*2))
            {
                point+=100;
                times++;
                goto again;
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
                {
                    readimagefile("j3.jpg",20+f,sh-140+bod,60+f,sh-100+bod);
                    delay(40);
                }
            else if(count%1==0)
                {
                    readimagefile("j2.jpg",20+f,sh-140+bod,60+f,sh-100+bod);
                    delay(40);
                }

            line(15+f+j,sh-122-y+bod,70+f+j,sh-130-y+jd+bod);
            line(15+f+j,sh-121-y+bod,70+f+j,sh-129-y+jd+bod);
            //line(15,sh-120,70,sh-129);
            if(20+f>500)
                bod+=3;
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
            f+=11.5;
        if(GetAsyncKeyState(VK_SPACE))
        {
            nr=1;
            run=5;
            ja=0;
        }
        if(ja==0)
            {
                j+=8;

                if(f<50)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                        y=2.5*sqrt(j);
                    }
                    else if(f<75)
                    {
                        y=4.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.07;
                    }
                else if(f<100)
                    {
                        y=4*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.07;
                    }
                    else if(f<125)
                    {
                        y=5.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.08;
                    }
                else if(f<150)
                    {
                        y=7*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.08;
                    }
                    else if(f<175)
                    {
                        y=8*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.09;
                    }
                else if(f<200)
                    {
                        y=9.5*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.09;
                    }
                    else if(f<225)
                    {
                        y=10.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.08;
                    }
                else if(f<250)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.08;
                        y=11*sqrt(j);
                    }
                    else if(f<275)
                    {
                        y=12*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.09;
                    }
                else if(f<300)
                    {
                        y=13*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.091;
                    }
                    else if(f<325)
                    {
                        y=14*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.097;
                    }
                else if(f<350)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.092;
                        y=15*sqrt(j);
                    }
                    else if(f<375)
                    {
                        y=15.5*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.047;
                    }
                else if(f<400)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.093;
                    y=16*sqrt(j);
                    }
                    else if(f<425)
                    {
                        y=17*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.097;
                    }
                else if(f<450)
                    {
                        y=18*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.094;
                    }
                    else if(f<475)
                    {
                        y=19*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.097;
                    }
                else if(f<500)
                    {
                        y=20*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.095;
                    }
            }
        if(60+f>510)
        {
            bd+=.5;
        }
        setcolor(15);
        outtextxy(sw-750,10,"Press SHIFT To Exit");
        circle(50,600,2);
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
        circle(sw-5,500,2);


        count++;
        if(times==10)
        {
            setactivepage(0);
            setvisualpage(0);

        }
        p=1-p;

    }
}
