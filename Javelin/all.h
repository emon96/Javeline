#include <iostream>
#include<graphics.h>
#include<math.h>
#include<stdio.h>
#include<mmsystem.h>
#include<stdlib.h>
#include<time.h>


#define sw 1300                ///////change here for different resolution///////
#define sh 700

FILE *in;
FILE *out;
int score=0;
int sc[10];

using namespace std;
void sdata();
void loading();
int menu();
int level1();
int level2();
int level3();
int finish();
int how_to_play();
void realexit();

void levels();
void high_score();
void credit();


/////////////high score////////////
void high_score()
{
     int p=0,ba=-1,m=20,i,d=30;
     char s[100];
    POINT c;
    while(1)
    {
        setactivepage(p);
        setvisualpage(1-p);
        cleardevice();
        GetCursorPos(&c);
        setcolor(15);


            sprintf(s,"%d.   %d",0+1,sc[0]);
            outtextxy(400,100+d,s);

            sprintf(s,"%d.   %d",0+2,sc[1]);
            outtextxy(400,100+d*2,s);

            sprintf(s,"%d.   %d",0+3,sc[2]);
            outtextxy(400,100+d*3,s);

            sprintf(s,"%d.   %d",0+4,sc[3]);
            outtextxy(400,100+d*4,s);

            sprintf(s,"%d.   %d",0+5,sc[4]);
            outtextxy(400,100+d*5,s);

            sprintf(s,"%d.   %d",0+6,sc[5]);
            outtextxy(400,100+d*6,s);

            sprintf(s,"%d.   %d",0+7,sc[6]);
            outtextxy(400,100+d*7,s);

            sprintf(s,"%d.   %d",0+8,sc[7]);
            outtextxy(400,100+d*8,s);

            sprintf(s,"%d.   %d",0+9,sc[8]);
            outtextxy(400,100+d*9,s);

            sprintf(s,"%d.   %d",0+10,sc[9]);
            outtextxy(380,100+d*10,s);





        settextstyle(0,0,5);
        outtextxy(425,0,"HIGH SCORE");
        settextstyle(1,0,3);



          if((c.x>555+m&&c.x<699+m)&&(c.y>sh-73&&c.y<sh-27))
        {


            //settextstyle(3,0,5);

            rectangle(555+m,sh-95,705+m,sh-45);
            rectangle(555+m,sh-95,710+m,sh-40);
            setfillstyle(SOLID_FILL,WHITE);
            //floodfill(600+m,sh-43,WHITE);
            outtextxy(602,sh-85,"Back");
            if(GetAsyncKeyState(VK_LBUTTON)&&(c.x>555+m&&c.x<699+m)&&(c.y>sh-73&&c.y<sh-27))
                ba=0;
            if(ba==0)
                menu();
        }
        else
        {


            rectangle(550+m,sh-100,700+m,sh-50);
            rectangle(550+m,sh-100,700+m,sh-50);

            outtextxy(577+m,sh-90,"Back");
        }

        p=1-p;
    }


}




/////////levels//////
void levels()
{
     POINT c;
    int p=0,sta=5,count=5;
    settextstyle(3,0,2);
    while(1)
    {
    setactivepage(p);
    setvisualpage(1-p);
    cleardevice();

    readimagefile("wave.jpg",0,0,sw,sh);
    GetCursorPos(&c);

    if(c.x>=sw-280&&c.x<=sw-100&&c.y>229&&c.y<271)
    {
    readimagefile("wave.jpg",0,0,sw,sh);
    setcolor(15);
    rectangle(sw-265,205,sw-95,255);
    rectangle(sw-265,205,sw-90,260);
    setfillstyle(1,15);
    floodfill(sw-230,257,15);
    settextstyle(3,0,3);
    line(sw-265,205,sw-325,171);
    line(sw-265,255,sw-320,285);
    arc(sw-350,230,290,70,64);
    arc(sw-350,230,0+count,150-count,60);
    arc(sw-350,230,40-count,190+count,57);
    count+=20;
    settextstyle(5,0,4);
    setcolor(10);
    outtextxy(sw-395,213,"EASY");
    setcolor(WHITE);
    settextstyle(3,0,3);

    outtextxy(sw-230,215,"LEVEL 1");
  if(GetAsyncKeyState(VK_LBUTTON)&&(c.x>=sw-280&&c.x<=sw-100&&c.y>229&&c.y<271 ))
        sta=0;
    if(sta==0&&c.x>=sw-280&&c.x<=sw-100&&c.y>229&&c.y<271)
        {
            sta=5;
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            level1();
        }

    settextstyle(3,0,2);

    }
    else
    {
    readimagefile("wave.jpg",0,0,sw,sh);
    rectangle(sw-270,200,sw-100,250);
    setfillstyle(1,BLACK);
    floodfill(sw-230,210,15);
    outtextxy(sw-225,210,"LEVEL 1");
    }


     if(c.x>=sw-280&&c.x<=sw-100&&c.y>309&&c.y<351)
    {

    setcolor(15);
    rectangle(sw-265,285,sw-95,335);
    rectangle(sw-265,285,sw-90,340);
    setfillstyle(1,15);
    floodfill(sw-230,337,15);
    settextstyle(3,0,3);

    line(sw-265,285,sw-325,251);
    line(sw-265,335,sw-320,365);
    arc(sw-350,310,290,70,64);

    settextstyle(5,0,2);
    setcolor(YELLOW);
    outtextxy(sw-405,298,"MEDIUM");
    setcolor(WHITE);
    settextstyle(3,0,3);
    arc(sw-350,310,0+count,150-count,60);
    arc(sw-350,310,40-count,190+count,57);
    count+=20;

    outtextxy(sw-230,298,"LEVEL 2");
    settextstyle(3,0,2);
    if(GetAsyncKeyState(VK_LBUTTON))
        sta=0;
    if(sta==0&&c.x>=sw-280&&c.x<=sw-100&&c.y>309&&c.y<351)
        {

            sta=5;
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            level2();
        }

    }


    else
    {

    rectangle(sw-270,280,sw-100,330);
    setfillstyle(1,BLACK);
    floodfill(sw-230,290,15);
    outtextxy(sw-225,293,"LEVEL 2");
    }
     if(c.x>=sw-280&&c.x<=sw-100&&c.y>389&&c.y<439)
    {

    setcolor(15);
    rectangle(sw-265,365,sw-95,415);
    rectangle(sw-265,365,sw-90,420);
    setfillstyle(1,15);
    floodfill(sw-200,417,15);
    settextstyle(3,0,3);
    line(sw-265,365,sw-325,331);
    line(sw-265,415,sw-320,445);
    arc(sw-350,390,290,70,64);

    arc(sw-350,390,0+count,150-count,60);
    arc(sw-350,390,40-count,190+count,57);
    count+=20;
     settextstyle(5,0,4);
     setcolor(9);
    outtextxy(sw-400,371,"HARD");
    setcolor(WHITE);
    settextstyle(3,0,3);
    outtextxy(sw-230,375,"LEVEL 3");
    settextstyle(3,0,2);
    if(GetAsyncKeyState(VK_LBUTTON))
        sta=0;
    if(sta==0&&c.x>=sw-280&&c.x<=sw-100&&c.y>389&&c.y<439)
        {
            sta=5;
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            level3();
        }

    }
    else
    {

    rectangle(sw-270,360,sw-100,410);
    setfillstyle(1,BLACK);
    floodfill(sw-230,380,15);
    outtextxy(sw-225,370,"LEVEL 3");
    }
      if(c.x>=sw-280&&c.x<=sw-100&&c.y>469&&c.y<519)
    {
    setcolor(15);
    rectangle(sw-265,445,sw-95,495);
    rectangle(sw-265,445,sw-90,500);
    setfillstyle(1,15);
    floodfill(sw-230,497,15);
    settextstyle(3,0,3);

    outtextxy(sw-210,455,"BACK");
    settextstyle(3,0,2);
     if(GetAsyncKeyState(VK_LBUTTON))
        sta=0;
    if(sta==0&&c.x>=sw-280&&c.x<=sw-100&&c.y>469&&c.y<519)
        {
            delay(20);
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            menu();

        }
    }
    else
    {

    rectangle(sw-270,440,sw-100,490);
    setfillstyle(1,BLACK);
    floodfill(sw-230,460,15);
    outtextxy(sw-210,450,"BACK");
    }
    //////blink/////

    count++;

        p=1-p;
    }
    getch();

}

//////loading//////
void loading(void)
{
    cleardevice();
    int i,p=0,arsp=3;

    for(i=0;1+i*8<=sw;i+=1)
    {
        //PlaySoundA("m.wav",NULL,SND_SYNC);
        setactivepage(p);
        setvisualpage(1-p);
        cleardevice();
    //readimagefile("nature.jpg",0,0,sw,sh);
    //readimagefile("jav2.jpg",0,0,sw,sh);
    //readimagefile("red.jpg",0,0,sw,sh);
         setcolor(LIGHTBLUE);
        rectangle(0,sh-40,sw,sh-25);

        setfillstyle(1,LIGHTBLUE);
        settextstyle(3,0,3);

        rectangle(1,sh-39,7+i*8,sh-26);
        floodfill(2+i,sh-30,LIGHTBLUE);
        setcolor(WHITE);
        outtextxy(600,sh-70,"LOADING");
        setcolor(i%14);
        outtextxy(600,270,"WELCOME");
        outtextxy(640,290,"TO");
        settextstyle(3,0,6);

        outtextxy(530,350,"JAVELINE");
        setcolor(WHITE);
        arc(sw/2,sh/2,0+i*arsp,270+i*arsp,200);
        arc(sw/2,sh/2,0+i*arsp,270+i*arsp,201);
        arc(sw/2,sh/2,90-i*arsp,360-i*arsp,180);
        arc(sw/2,sh/2,90-i*arsp,360-i*arsp,181);
        arc(sw/2,sh/2,180+i*arsp,90+i*arsp,220);
        arc(sw/2,sh/2,180+i*arsp,90+i*arsp,221);
        if(i*8>sw-130)
            {
                delay(80);
                arsp=8;
            }
        else
            delay(10);
        if(7+i*8>sw)
        {
            cleardevice();
        }

            p=1-p;

    }
    cleardevice();
    setactivepage(0);
    setvisualpage(0);
    /*outtextxy(560,350,"STARTING");
    outtextxy(640,390,"AT");
    delay(1000);
    cleardevice();
    outtextxy(640,350,"3");
    delay(500);
    cleardevice();
    outtextxy(640,350,"2");
    delay(500);
    cleardevice();
    outtextxy(640,350,"1");
    delay(500);
    cleardevice();*/

}
//////////menu//////
int menu()
{
    printf("\n%d\n",score);
    sdata();
    score=0;
    POINT cp;
    int p=0,sta=5;
    settextstyle(3,0,2);
    while(1)
    {
    setactivepage(p);
    setvisualpage(1-p);
    cleardevice();
    readimagefile("jav1.jpg",0,0,sw,sh);
    GetCursorPos(&cp);

    if(cp.x>=sw-280&&cp.x<=sw-100&&cp.y>229&&cp.y<271)
    {
    setcolor(15);
    rectangle(sw-265,205,sw-95,255);
    rectangle(sw-265,205,sw-90,260);
    setfillstyle(1,0);
    floodfill(sw-230,210,15);
    settextstyle(3,0,3);

    outtextxy(sw-210,215,"PLAY");
  if(GetAsyncKeyState(VK_LBUTTON)&&(cp.x>=sw-280&&cp.x<=sw-100&&cp.y>229&&cp.y<271 ))
        sta=0;
    if(sta==0&&cp.x>=sw-280&&cp.x<=sw-100&&cp.y>229&&cp.y<271)
        {
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            //delay(10);
             levels();
        }

    settextstyle(3,0,2);

    }
    else
    {

    rectangle(sw-270,200,sw-100,250);
    setfillstyle(1,BLACK);
    floodfill(sw-230,210,15);
    outtextxy(sw-215,210,"PLAY");
    }


     if(cp.x>=sw-280&&cp.x<=sw-100&&cp.y>309&&cp.y<351)
    {
    setcolor(15);
    rectangle(sw-265,285,sw-95,335);
    rectangle(sw-265,285,sw-90,340);
    setfillstyle(1,0);
    floodfill(sw-230,290,15);
    settextstyle(3,0,3);

    outtextxy(sw-250,298,"HOW TO PLAY");
    settextstyle(3,0,2);
    if(GetAsyncKeyState(VK_LBUTTON))
        sta=0;
    if(sta==0&&cp.x>=sw-280&&cp.x<=sw-100&&cp.y>309&&cp.y<351)
        {
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            how_to_play();
        }

    }


    else
    {
    rectangle(sw-270,280,sw-100,330);
    setfillstyle(1,BLACK);
    floodfill(sw-230,290,15);
    outtextxy(sw-250,293,"HOW TO PLAY");
    }
     if(cp.x>=sw-280&&cp.x<=sw-100&&cp.y>389&&cp.y<439)
    {
    setcolor(15);
    rectangle(sw-265,365,sw-95,415);
    rectangle(sw-265,365,sw-90,420);
    setfillstyle(1,0);
    floodfill(sw-200,400,15);
    settextstyle(3,0,3);

    outtextxy(sw-220,375,"CREDIT");
    settextstyle(3,0,2);
    if(GetAsyncKeyState(VK_LBUTTON))
        sta=0;
    if(sta==0&&cp.x>=sw-280&&cp.x<=sw-100&&cp.y>389&&cp.y<439)
        {
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            credit();
        }

    }
    else
    {
    rectangle(sw-270,360,sw-100,410);
    setfillstyle(1,BLACK);
    floodfill(sw-230,380,15);
    outtextxy(sw-220,370,"CREDIT");
    }
     if(cp.x>=sw-280&&cp.x<=sw-100&&cp.y>469&&cp.y<519)
    {
    setcolor(15);
    rectangle(sw-265,445,sw-95,495);
    rectangle(sw-265,445,sw-90,500);
    setfillstyle(1,0);
    floodfill(sw-230,460,15);
    settextstyle(3,0,3);

    outtextxy(sw-245,455,"HIGH  SCORE");
    settextstyle(3,0,2);
     if(GetAsyncKeyState(VK_LBUTTON))
        sta=0;
    if(sta==0&&cp.x>=sw-280&&cp.x<=sw-100&&cp.y>469&&cp.y<519)
        {
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            high_score();
        }
    }
    else
    {

    rectangle(sw-270,440,sw-100,490);
    setfillstyle(1,BLACK);
    floodfill(sw-230,460,15);
    outtextxy(sw-245,450,"HIGH  SCORE");
    }
     if(cp.x>=sw-280&&cp.x<=sw-100&&cp.y>549&&cp.y<599)
    {
    setcolor(15);
    rectangle(sw-265,525,sw-95,575);
    rectangle(sw-265,525,sw-90,580);
    setfillstyle(1,0);
    floodfill(sw-230,550,15);
    settextstyle(3,0,3);

    outtextxy(sw-205,535,"EXIT");
    settextstyle(3,0,2);
     if(GetAsyncKeyState(VK_LBUTTON))
        sta=0;
    if(sta==0&&cp.x>=sw-280&&cp.x<=sw-100&&cp.y>549&&cp.y<599)
        {
            setactivepage(0);
            setvisualpage(0);
            cleardevice();
            realexit();
        }
    }
    else
    {

    rectangle(sw-270,520,sw-100,570);
    setfillstyle(1,BLACK);
    floodfill(sw-230,560,15);
    outtextxy(sw-210,530,"EXIT");
    }
    //////blink/////



        p=1-p;
    }
    getch();
}
///////////credit//////////


////////help////////
void credit()
{
    int p=0,ba=-1,m=20;
    POINT c;
    while(1)
    {
        setactivepage(p);
        setvisualpage(1-p);
        cleardevice();
        GetCursorPos(&c);
        setcolor(15);

        readimagefile("index.jpg",400,100,900,400);

        settextstyle(2,0,19);
        outtextxy(535,0,"CREDIT");
        settextstyle(1,0,3);
        outtextxy(430,400,"Self Help Is The Best Help");


          if((c.x>555+m&&c.x<699+m)&&(c.y>sh-73&&c.y<sh-27))
        {


            settextstyle(3,0,5);
            readimagefile("index.jpg",400,100,900,400);
            rectangle(555+m,sh-95,705+m,sh-45);
            rectangle(555+m,sh-95,710+m,sh-40);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(600+m,sh-43,WHITE);
            outtextxy(572+m,sh-89,"Back");
            if(GetAsyncKeyState(VK_LBUTTON)&&(c.x>555+m&&c.x<699+m)&&(c.y>sh-73&&c.y<sh-27))
                ba=0;
            if(ba==0)
                menu();
        }
        else
        {
            settextstyle(3,0,4);
            readimagefile("index.jpg",400,100,900,400);
            rectangle(550+m,sh-100,700+m,sh-50);
            rectangle(550+m,sh-100,700+m,sh-50);

            outtextxy(577+m,sh-94,"Back");
        }

        p=1-p;
    }


}
////////exit////////

void realexit()
{
    int p=0,ba=-1;
    POINT c;
    while(1)
    {
        setactivepage(p);
        setvisualpage(1-p);
        cleardevice();
        GetCursorPos(&c);
        setcolor(15);


        readimagefile("exit.jpg",0,0,sw,sh+100);
        settextstyle(0,0,5);
        outtextxy(570,0,"Exit");
        settextstyle(0,0,3);
        outtextxy(385,sh-100,"Really Want To Exit???");


          if((c.x>440&&c.x<585)&&(c.y>sh-33&&c.y<sh+3))
        {


            settextstyle(3,0,3);
            rectangle(440,sh-55,590,sh-15);
            rectangle(440,sh-55,595,sh-10);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(500,sh-13,WHITE);
            outtextxy(490,sh-48,"YES");
            if(GetAsyncKeyState(VK_LBUTTON)&&(c.x>440&&c.x<585)&&(c.y>sh-33&&c.y<sh+3))
                ba=0;
            if(ba==0)
                finish();
        }
        else
        {
            settextstyle(3,0,3);
            rectangle(435,sh-60,585,sh-20);


            outtextxy(485,sh-53,"YES");
        }
        if((c.x>740&&c.x<885)&&(c.y>sh-33&&c.y<sh+3))
        {


            settextstyle(3,0,3);
            rectangle(740,sh-55,890,sh-15);
            rectangle(740,sh-55,895,sh-10);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(800,sh-13,WHITE);
            outtextxy(790,sh-48,"NO");
            if(GetAsyncKeyState(VK_LBUTTON)&&(c.x>740&&c.x<885)&&(c.y>sh-33&&c.y<sh+3))
                ba=0;
            if(ba==0)
                menu();
        }
        else
        {
            settextstyle(3,0,3);
            rectangle(735,sh-60,885,sh-20);


            outtextxy(785,sh-53,"NO");
        }
        p=1-p;
    }


}
///////////howtoplay/////
int how_to_play()
{
    int p=0,ba=-1;
    POINT c;
    while(1)
    {
        setactivepage(p);
        setvisualpage(1-p);
        cleardevice();
        GetCursorPos(&c);
        setcolor(15);


        readimagefile("l2.jpg",0,0,sw,sh+100);
        settextstyle(0,0,5);
        outtextxy(445,0,"HOW TO PLAY");
        settextstyle(1,0,3);
        outtextxy(0,100,"1.There are three levels");
        outtextxy(0,130,"2.You can run by clicking the ");
        outtextxy(0,160,"   RIGHT ARROW(-->) key");

        outtextxy(0,190,"3.You have to throw the javeline");
        outtextxy(0,220,"   by clicking the SHIFT button" );
        outtextxy(0,250,"4.You will get maximum 10 trials");
        outtextxy(0,280,"   in each level");
        outtextxy(0,310,"5.You have to make at least 200 ");
        outtextxy(0,340,"   point to pass the level");
        outtextxy(0,370,"6.Hight of the javeline will depend on the distance you covered");
        outtextxy(0,400,"7.You will get point as the accuteness of your hit");
        outtextxy(0,430,"8.Go and enjoy the masterpiece");


          if((c.x>555&&c.x<699)&&(c.y>sh-73&&c.y<sh-27))
        {


                settextstyle(3,0,5);
            rectangle(555,sh-95,705,sh-45);
            rectangle(555,sh-95,710,sh-40);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(600,sh-43,WHITE);
            outtextxy(572,sh-89,"Back");
            if(GetAsyncKeyState(VK_LBUTTON)&&(c.x>555&&c.x<699)&&(c.y>sh-73&&c.y<sh-27))
                ba=0;
            if(ba==0)
                menu();
        }
        else
        {
            settextstyle(3,0,4);
            rectangle(550,sh-100,700,sh-50);
            rectangle(550,sh-100,700,sh-50);

            outtextxy(577,sh-94,"Back");
        }

        p=1-p;
    }

}

/////////level~1/////////

int  level1(void)
{
    int point=0,times=0;
    again:
        printf("%d   times\n",times);
        int count2=0;
    int p=0,run=1,ja=5,nr=0,cou=0,i,ra,ye=5,cy=5,re=5,gr=5;
    double y=0, f=0,j=0,jd=0,bd=0,db=0,bod=0;
    char pr[100],ti[10];
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
            {

                menu();
            }
        ////background////

        readimagefile("wall4.jpg",0,sh-100,500,sh+200);
        //////star//////
        outtextxy(120,10,"");
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
    ////////////////try left////////////////
      outtextxy(sw-540,10,"Try Left :");


        if(10-times>0)
            {
                setcolor(1);
                setfillstyle(SOLID_FILL,1);
                circle(sw-450,19,7);
                floodfill(sw-450,19,1);

                setfillstyle(SOLID_FILL,1);
            }
        if(10-times>1)
            {
                setcolor(2);
                setfillstyle(SOLID_FILL,2);
                circle(sw-430,19,7);
                floodfill(sw-430,19,2);

            }
        if(10-times>2)
            {
                setcolor(3);
                setfillstyle(SOLID_FILL,3);
                circle(sw-410,19,7);
                floodfill(sw-410,19,3);

            }
        if(10-times>3)
            {
                setcolor(4);
                setfillstyle(SOLID_FILL,4);
                circle(sw-390,19,7);
                floodfill(sw-390,19,4);

            }
        if(10-times>4)
            {
                setcolor(5);
                setfillstyle(SOLID_FILL,5);
                circle(sw-370,19,7);
                floodfill(sw-370,19,5);

            }
        if(10-times>5)
            {
                setcolor(6);
                setfillstyle(SOLID_FILL,6);
                circle(sw-350,19,7);
                floodfill(sw-350,19,6);

            }
        if(10-times>6)
            {
                setcolor(7);
                setfillstyle(SOLID_FILL,7);
                circle(sw-330,19,7);
                floodfill(sw-330,19,7);

            }
        if(10-times>7)
            {
                setcolor(8);
                setfillstyle(SOLID_FILL,8);
                circle(sw-310,19,7);
                floodfill(sw-310,19,8);

            }
        if(10-times>8)
            {
                setcolor(9);
                setfillstyle(SOLID_FILL,9);
                circle(sw-290,19,7);
                floodfill(sw-290,19,9);

            }
        if(10-times>9)
            {
                setcolor(10);
                setfillstyle(SOLID_FILL,10);
                circle(sw-270,19,7);
                floodfill(sw-270,19,10);

            }


        setcolor(WHITE);


    ////////////////try left//////////
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
        delay(2000);
        ye=1;
    }
    if(cy==0)
    {
          setcolor(CYAN);
          settextstyle(3,0,4);
          outtextxy(600,300,"CYAN");
          outtextxy(590,340,"VERY GOOD");
          settextstyle(3,0,2);

          delay(2000);
          cy=1;
    }
    if(gr==0)
    {
          setcolor(GREEN);
          settextstyle(3,0,4);
          outtextxy(600,300,"GREEN");
          outtextxy(600,340,"GREAT");
          settextstyle(3,0,2);
          delay(2000);
          gr=1;
    }
    if(re==0)
    {
          setcolor(RED);
          settextstyle(3,0,4);
          outtextxy(620,300,"RED");
          outtextxy(600,340,"AWESOME");

          settextstyle(3,0,2);
          delay(2000);
          re=1;
    }
    if((((sh-130-y+jd>=0+db)&&(sh-130-y+jd<=19+db))||((sh-130-y+jd>=81+db)&&(sh-130-y+jd<=100+db)))&&((70+f+j>=sw-6)&&(70+f+j<=sw)))
        {


          settextstyle(3,0,2);

            if(count2%2==0)
            {
                ye=0;
                point+=25;
                score+=point;
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
                score+=point;

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
                score+=point;
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
                score+=point;
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
        settextstyle(3,0,1);
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
        if(times==10&&point>=300)
        {
            setactivepage(0);
            setvisualpage(0);
            level2();

        }
        else if(times==10&&point<300)
        {
            delay(1000);
            sdata();
            menu();
        }
        p=1-p;

    }
}




/////////level~2///////////

int  level2(void)
{
    int point=0,times=0;
    again:
        printf("%d   times\n",times);
        int count2=0;
    int p=0,run=1,ja=5,nr=0,cou=0,i,ra,rs=0;
    double y=0, f=0,j=0,jd=0,bd=0,db=0,bod=0;
    char pr[100],ti[10];
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
            {
                menu();
            }
        ////background////
        outtextxy(sw-530,10,"Try Left :");


        if(10-times>0)
            {
                setcolor(1);
                setfillstyle(SOLID_FILL,1);
                circle(sw-450,19,7);
                floodfill(sw-450,19,1);

                setfillstyle(SOLID_FILL,1);
            }
        if(10-times>1)
            {
                setcolor(2);
                setfillstyle(SOLID_FILL,2);
                circle(sw-430,19,7);
                floodfill(sw-430,19,2);

            }
        if(10-times>2)
            {
                setcolor(3);
                setfillstyle(SOLID_FILL,3);
                circle(sw-410,19,7);
                floodfill(sw-410,19,3);

            }
        if(10-times>3)
            {
                setcolor(4);
                setfillstyle(SOLID_FILL,4);
                circle(sw-390,19,7);
                floodfill(sw-390,19,4);

            }
        if(10-times>4)
            {
                setcolor(5);
                setfillstyle(SOLID_FILL,5);
                circle(sw-370,19,7);
                floodfill(sw-370,19,5);

            }
        if(10-times>5)
            {
                setcolor(6);
                setfillstyle(SOLID_FILL,6);
                circle(sw-350,19,7);
                floodfill(sw-350,19,6);

            }
        if(10-times>6)
            {
                setcolor(7);
                setfillstyle(SOLID_FILL,7);
                circle(sw-330,19,7);
                floodfill(sw-330,19,7);

            }
        if(10-times>7)
            {
                setcolor(8);
                setfillstyle(SOLID_FILL,8);
                circle(sw-310,19,7);
                floodfill(sw-310,19,8);

            }
        if(10-times>8)
            {
                setcolor(9);
                setfillstyle(SOLID_FILL,9);
                circle(sw-290,19,7);
                floodfill(sw-290,19,9);

            }
        if(10-times>9)
            {
                setcolor(10);
                setfillstyle(SOLID_FILL,10);
                circle(sw-270,19,7);
                floodfill(sw-270,19,10);

            }


        setcolor(WHITE);
        readimagefile("wall4.jpg",0,sh-100,500,sh+200);
        //////star//////

       // outtextxy(120,10,"Stars:");
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
        readimagefile("para.jpg",540+ra,sh+10-count*2600+ra,sh+70-count*2);
        if(sh+70-count*2<-10)
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
                score+=point;
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
            {
                run=0;
                rs=2;
            }
        if(run==0)
            {
                f+=11.5;
            }
        if(GetAsyncKeyState(VK_SPACE))
        {
            nr=1;
            run=5;
            ja=0;
            rs=1;
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
        settextstyle(3,0,1);
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
        if(times==10&&score>=300)
        {
            setactivepage(0);
            setvisualpage(0);
            level3();

        }
        else if(times==10&&score<300)
        {
            menu();
        }
        p=1-p;

    }
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
            {
                menu();
            }
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
                score+=point;
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
    ///////////////try left////////
    setcolor(WHITE);
      outtextxy(sw-540,10,"Try Left :");


        if(10-times>0)
            {
                setcolor(1);
                setfillstyle(SOLID_FILL,1);
                circle(sw-450,19,7);
                floodfill(sw-450,19,1);

                setfillstyle(SOLID_FILL,1);
            }
        if(10-times>1)
            {
                setcolor(2);
                setfillstyle(SOLID_FILL,2);
                circle(sw-430,19,7);
                floodfill(sw-430,19,2);

            }
        if(10-times>2)
            {
                setcolor(3);
                setfillstyle(SOLID_FILL,3);
                circle(sw-410,19,7);
                floodfill(sw-410,19,3);

            }
        if(10-times>3)
            {
                setcolor(4);
                setfillstyle(SOLID_FILL,4);
                circle(sw-390,19,7);
                floodfill(sw-390,19,4);

            }
        if(10-times>4)
            {
                setcolor(5);
                setfillstyle(SOLID_FILL,5);
                circle(sw-370,19,7);
                floodfill(sw-370,19,5);

            }
        if(10-times>5)
            {
                setcolor(6);
                setfillstyle(SOLID_FILL,6);
                circle(sw-350,19,7);
                floodfill(sw-350,19,6);

            }
        if(10-times>6)
            {
                setcolor(7);
                setfillstyle(SOLID_FILL,7);
                circle(sw-330,19,7);
                floodfill(sw-330,19,7);

            }
        if(10-times>7)
            {
                setcolor(8);
                setfillstyle(SOLID_FILL,8);
                circle(sw-310,19,7);
                floodfill(sw-310,19,8);

            }
        if(10-times>8)
            {
                setcolor(9);
                setfillstyle(SOLID_FILL,9);
                circle(sw-290,19,7);
                floodfill(sw-290,19,9);

            }
        if(10-times>9)
            {
                setcolor(10);
                setfillstyle(SOLID_FILL,10);
                circle(sw-270,19,7);
                floodfill(sw-270,19,10);

            }


        setcolor(WHITE);
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
        settextstyle(3,0,1);
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
            sdata();
            menu();

        }

        p=1-p;

    }
}


////////finish//////////
int finish()
{
    cleardevice();
    int p=0,count=0;
    settextstyle(1,0,4);
    //outtextxy(330,300,"THANKS FOR PLAYING");

    while(1)
    {
        setactivepage(p);
        setvisualpage(1-p);
        readimagefile("over.jpg",0,0,sw,sh);
        p=1-p;
        count++;
        if(count>100)
            break;
    }

    closegraph(0);
    return 0;
}
void sdata()
{
    int i=0,j,te,t,d=30;
    char s[100];
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
            in=fopen("in.txt","w");
            for(i=0;i<10;i++)
                fprintf(in,"%d\n",sc[i]);
            goto end;
        }
    }
    end:

        return;

}

