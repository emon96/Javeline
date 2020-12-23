#include <iostream>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define sw 1300
#define sh 700

using namespace std;
int level1();
int main()
{
    initwindow(sw,sh,"Javeline",100,100);

    level1();
    readimagefile("wall4.jpg",0,sh-100,500,sh+200);

    getch();
    closegraph();

    return 0;
}
int  level1(void)
{
    int point=0,times=0;
    again:
        printf("%d   times\n",times);
        int count2=0;
    int p=0,run=1,ja=5,nr=0,cou=0,i,ra,ye=5,cy=5,re=5,gr=5;
    double y=0, f=0,j=0,jd=0,bd=0,db=0,bod=0;
    char pr[100];
    int fa[]={172,26,175,21,170,16,175,16,179,12,183,16,188,16,183,21,186,26,179,22,172,26};
    int fs[]={195,26,198,21,193,16,198,16,202,12,206,16,211,16,206,21,209,26,202,22,195,26};
    int ft[]={218,26,221,21,216,16,221,16,225,12,229,16,234,16,229,21,232,26,225,22,218,26};
    int br,count=0;
    srand(time(NULL));
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

        /////target/////
        setcolor(YELLOW);
        rectangle(sw-6,0+db,sw,100+db);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(sw-3,50+db,YELLOW);
        setcolor(CYAN);
        rectangle(sw-12,20+db,sw-6,80+db);
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(sw-9,50+db,CYAN);
        setcolor(GREEN);
        rectangle(sw-18,35+db,sw-12,65+db);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(sw-15,50+db,GREEN);
        setcolor(RED);
        rectangle(sw-24,45+db,sw-18,55+db);
        setfillstyle(SOLID_FILL,RED);
        floodfill(sw-19,50+db,RED);
        if(db<500&&cou%2==0)
            {
                db+=2.5;
                if(db==500)
                    cou++;
            }
        else
        {
            db-=2.5;
            if(db==0)
                cou++;
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
    //line(55+f+j,sh-160-y+jd+bd,25+f+j,sh-130-y+bd);
    if(ye==0)
    {
        setcolor(YELLOW);
        settextstyle(3,0,4);
        outtextxy(600,300,"YELLOW");
        outtextxy(620,340,"GOOD");
        settextstyle(3,0,2);
       // delay(10);
    }
    if(cy==0)
    {
          setcolor(CYAN);
          settextstyle(3,0,4);
          outtextxy(600,300,"CYAN");
          outtextxy(590,340,"VERY GOOD");
          settextstyle(3,0,2);
          //delay(10);
    }
    if(gr==0)
    {
          setcolor(GREEN);
          settextstyle(3,0,4);
          outtextxy(600,300,"GREEN");
          outtextxy(600,340,"GREAT");
          settextstyle(3,0,2);
          //delay(10);
    }
    if(re==0)
    {
          setcolor(RED);
          settextstyle(3,0,4);
          outtextxy(620,300,"RED");
          outtextxy(600,340,"AWESOME");

          settextstyle(3,0,2);
          //delay(10);
    }
    if((((sh-130-y+jd>=0+db)&&(sh-130-y+jd<=19+db))||((sh-130-y+jd>=81+db)&&(sh-130-y+jd<=100+db)))&&((70+f+j>=sw-6)&&(70+f+j<=sw)))
        {


          settextstyle(3,0,2);

            if(count2%2==0)
            {
                ye=0;
                point+=25;
                count2++;
               // printf("%d  \n",point);

            }


        }
     if((((sh-130-y+jd>=20+db)&&(sh-130-y+jd<=34+db))||((sh-130-y+jd>=66+db)&&(sh-130-y+jd<=80+db)))&&((70+f+j>=sw-12)&&(70+f+j<=sw-7)))
        {

          settextstyle(3,0,2);
            if(count2%2==0)
            {
                cy=0;
                point+=50;
                count2++;
               // printf("%d  \n",point);
            }


        }
     if((((sh-130-y+jd>=35+db)&&(sh-130-y+jd<=44+db))||((sh-130-y+jd>=56+db)&&(sh-130-y+jd<=65+db)))&&((70+f+j>=sw-18)&&(70+f+j<=sw-13)))
        {

            if(count2%2==0)
            {
                gr=0;
                point+=75;
                count2++;
               // printf("%d  \n",point);
            }


        }
     if(((sh-130-y+jd>=45+db)&&(sh-130-y+jd<=55+db))&&((70+f+j>=sw-24)&&(70+f+j<=sw-19)))
        {

            if(count2%2==0)
            {
                re=0;
                point+=100;
                count2++;
               // printf("%d  \n",point);
            }


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
                    delay(5);
                }

            else if(count%1==0)
                {
                    readimagefile("j2.jpg",20+f,sh-140+bod,60+f,sh-100+bod);
                    delay(5);
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
            f+=5.5;
        if(GetAsyncKeyState(VK_SPACE))
        {
            nr=1;
            run=5;
            ja=0;
        }
        if(ja==0)
            {
                j+=6;

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
                        y=3.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                    }
                else if(f<100)
                    {
                        y=4*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                    }
                    else if(f<125)
                    {
                        y=5.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                    }
                else if(f<150)
                    {
                        y=7*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                    }
                    else if(f<175)
                    {
                        y=8*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                    }
                else if(f<200)
                    {
                        y=9.5*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                    }
                    else if(f<225)
                    {
                        y=10.2*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                    }
                else if(f<250)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                        y=11*sqrt(j);
                    }
                    else if(f<275)
                    {
                        y=12*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.04;
                    }
                else if(f<300)
                    {
                        y=13*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.041;
                    }
                    else if(f<325)
                    {
                        y=14*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.047;
                    }
                else if(f<350)
                    {
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.022;
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
                            jd+=.053;
                    y=16*sqrt(j);
                    }
                    else if(f<425)
                    {
                        y=17*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.057;
                    }
                else if(f<450)
                    {
                        y=18*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.064;
                    }
                    else if(f<475)
                    {
                        y=19*sqrt(j);
                        if(55+j+f>=sw-24)
                            jd==jd;
                        else
                            jd+=.067;
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
       /* circle(50,600,2);
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

////////////////level 2////////////

