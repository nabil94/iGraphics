# include "iGraphics.h"
#include<stdio.h>
#include<time.h>

void gettime(int t[])
{
    time_t ctime;
    struct tm* current;
    time(&ctime);
    current=localtime(&ctime);
    t[0]=current->tm_hour;
    if(t[0]>12)
    {
        t[0]=t[0]%12;
         //for am-pm;
        iFilledRectangle(125+390, 55, 5, 15);//rectangle 2
        iFilledRectangle(130+390, 70, 15, 5);//rectangle 4
        iFilledRectangle(145+390, 75, 5, 15);//rectangle 5
        iFilledRectangle(130+390, 90, 15, 5);//rectangle 6
        iFilledRectangle(125+390, 75, 5, 15);//rectangle 7

        iFilledRectangle(570, 90, 15, 5);//rectangle 1
        iFilledRectangle(125+420, 55, 5, 15);//rectangle 2
        iFilledRectangle(145+440, 55, 5, 15);//rectangle 3
        iFilledRectangle(130+455, 75, 5, 15);//rectangle 4
        iFilledRectangle(145+420, 75, 5, 15);//rectangle 5
        iFilledRectangle(130+420, 90, 15, 5);//rectangle 6
        iFilledRectangle(125+420, 75, 5, 15);//rectangle 7
    }
    else if(t[0]==12)
    {
         //for am-pm;
        iFilledRectangle(125+390, 55, 5, 15);//rectangle 2
        iFilledRectangle(130+390, 70, 15, 5);//rectangle 4
        iFilledRectangle(145+390, 75, 5, 15);//rectangle 5
        iFilledRectangle(130+390, 90, 15, 5);//rectangle 6
        iFilledRectangle(125+390, 75, 5, 15);//rectangle 7

        iFilledRectangle(570, 90, 15, 5);//rectangle 1
        iFilledRectangle(125+420, 55, 5, 15);//rectangle 2
        iFilledRectangle(145+440, 55, 5, 15);//rectangle 3
        iFilledRectangle(130+455, 75, 5, 15);//rectangle 4
        iFilledRectangle(145+420, 75, 5, 15);//rectangle 5
        iFilledRectangle(130+420, 90, 15, 5);//rectangle 6
        iFilledRectangle(125+420, 75, 5, 15);//rectangle 7
    }
    else if(t[0]==0)
    {
        t[0]=t[0]+12;
        //for am-pm;
        iFilledRectangle(125+390, 55, 5, 15);//rectangle 2
        iFilledRectangle(145+390, 55, 5, 15);//rectangle 3
        iFilledRectangle(130+390, 70, 15, 5);//rectangle 4
        iFilledRectangle(145+390, 75, 5, 15);//rectangle 5
        iFilledRectangle(130+390, 90, 15, 5);//rectangle 6
        iFilledRectangle(125+390, 75, 5, 15);//rectangle 7

        iFilledRectangle(130+440, 90, 15, 5);//rectangle 1
        iFilledRectangle(125+420, 55, 5, 15);//rectangle 2
        iFilledRectangle(145+440, 55, 5, 15);//rectangle 3
        iFilledRectangle(130+455, 75, 5, 15);//rectangle 4
        iFilledRectangle(145+420, 75, 5, 15);//rectangle 5
        iFilledRectangle(130+420, 90, 15, 5);//rectangle 6
        iFilledRectangle(125+420, 75, 5, 15);//rectangle 7
    }
    else if(t[0]<12)
    {
         //for am-pm;
        iFilledRectangle(125+390, 55, 5, 15);//rectangle 2
        iFilledRectangle(145+390, 55, 5, 15);//rectangle 3
        iFilledRectangle(130+390, 70, 15, 5);//rectangle 4
        iFilledRectangle(145+390, 75, 5, 15);//rectangle 5
        iFilledRectangle(130+390, 90, 15, 5);//rectangle 6
        iFilledRectangle(125+390, 75, 5, 15);//rectangle 7

        iFilledRectangle(130+440, 90, 15, 5);//rectangle 1
        iFilledRectangle(125+420, 55, 5, 15);//rectangle 2
        iFilledRectangle(145+440, 55, 5, 15);//rectangle 3
        iFilledRectangle(130+455, 75, 5, 15);//rectangle 4
        iFilledRectangle(145+420, 75, 5, 15);//rectangle 5
        iFilledRectangle(130+420, 90, 15, 5);//rectangle 6
        iFilledRectangle(125+420, 75, 5, 15);//rectangle 7
    }
    t[1]=current->tm_min;
    t[2]=current->tm_sec;
}

int x = 0, y = 0, r = 0;

void iDraw()
{
    iClear();
    iSetColor(300, 0, 0);
    int t[3]={};
    int h1,h2,m1,m2,s1,s2;
    gettime(t);
    printf("%d %d %d",t[0],t[1],t[2]);

    h1=t[0]/10;
    h2=t[0]%10;
    m1=t[1]/10;
    m2=t[1]%10;
    s1=t[2]/10;
    s2=t[2]%10;

    /*
        rectangle 1=lower segment;
        rectangle 2=lower left segment;
        rectangle 3=lower right segment;
        rectangle 4=middle segment;
        rectangle 5=upper right segment;
        rectangle 6=upper segment;
        rectangle 7=upper left segment;
    */

    if(h1==0)
    {
        iFilledRectangle(70, 50, 30, 10);//rectangle 1
        iFilledRectangle(60, 60, 10, 30);//rectangle 2
        iFilledRectangle(100, 60, 10, 30);//rectangle 3
        iFilledRectangle(100, 100, 10, 30);//rectangle 5
        iFilledRectangle(70, 130, 30, 10);//rectangle 6
        iFilledRectangle(60, 100, 10, 30);//rectangle 7
    }

   else if(h1==1)
    {
        iFilledRectangle(100, 60, 10, 30);//rectangle 3
        iFilledRectangle(100, 100, 10, 30);//rectangle 5
    }


    if(h2==0)
    {
        iFilledRectangle(130, 50, 30, 10);//rectangle 1
        iFilledRectangle(120, 60, 10, 30);//rectangle 2
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(160, 100, 10, 30);//rectangle 5
        iFilledRectangle(130, 130, 30, 10);//rectangle 6
        iFilledRectangle(120, 100, 10, 30);//rectangle 7
    }

    else if(h2==1)
    {
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(160, 100, 10, 30);//rectangle 5
    }

    else if(h2==2)
    {
        iFilledRectangle(130, 50, 30, 10);//rectangle 1
        iFilledRectangle(120, 60, 10, 30);//rectangle 2
        iFilledRectangle(130, 90, 30, 10);//rectangle 4
        iFilledRectangle(160, 100, 10, 30);//rectangle 5
        iFilledRectangle(130, 130, 30, 10);//rectangle 6
    }

    else if(h2==3)
    {
        iFilledRectangle(130, 50, 30, 10);//rectangle 1
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(130, 90, 30, 10);//rectangle 4
        iFilledRectangle(160, 100, 10, 30);//rectangle 5
        iFilledRectangle(130, 130, 30, 10);//rectangle 6
    }


  else if(h2==4)
    {
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(130, 90, 30, 10);//rectangle 4
        iFilledRectangle(160, 100, 10, 30);//rectangle 5
        iFilledRectangle(120, 100, 10, 30);//rectangle 7
    }

   else if(h2==5)
    {
        iFilledRectangle(130, 50, 30, 10);//rectangle 1
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(130, 90, 30, 10);//rectangle 4
        iFilledRectangle(130, 130, 30, 10);//rectangle 6
        iFilledRectangle(120, 100, 10, 30);//rectangle 7
    }

    else if(h2==6)
    {
        iFilledRectangle(130, 50, 30, 10);//rectangle 1
        iFilledRectangle(120, 60, 10, 30);//rectangle 2
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(130, 90, 30, 10);//rectangle 4
        iFilledRectangle(130, 130, 30, 10);//rectangle 6
        iFilledRectangle(120, 100, 10, 30);//rectangle 7
    }

    else if(h2==7)
    {
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(160, 100, 10, 30);//rectangle 5
        iFilledRectangle(130, 130, 30, 10);//rectangle 6
    }

    else if(h2==8)
    {
        iFilledRectangle(130, 50, 30, 10);//rectangle 1
        iFilledRectangle(120, 60, 10, 30);//rectangle 2
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(130, 90, 30, 10);//rectangle 4
        iFilledRectangle(160, 100, 10, 30);//rectangle 5
        iFilledRectangle(130, 130, 30, 10);//rectangle 6
        iFilledRectangle(120, 100, 10, 30);//rectangle 7

    }

    else if(h2==9)
    {
        iFilledRectangle(130, 50, 30, 10);//rectangle 1
        iFilledRectangle(160, 60, 10, 30);//rectangle 3
        iFilledRectangle(130, 90, 30, 10);//rectangle 4
        iFilledRectangle(160, 100, 10, 30);//rectangle 5
        iFilledRectangle(130, 130, 30, 10);//rectangle 6
        iFilledRectangle(120, 100, 10, 30);//rectangle 7
    }

    if(m1==0)
    {
        iFilledRectangle(130+90, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+90, 60, 10, 30);//rectangle 2
        iFilledRectangle(160+90, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+90, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+90, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+90, 100, 10, 30);//rectangle 7
    }

    else if(m1==1)
    {
        iFilledRectangle(160+90, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+90, 100, 10, 30);//rectangle 5
    }

    else if(m1==2)
    {
        iFilledRectangle(130+90, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+90, 60, 10, 30);//rectangle 2
        iFilledRectangle(130+90, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+90, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+90, 130, 30, 10);//rectangle 6
    }

    else if(m1==3)
    {
        iFilledRectangle(130+90, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+90, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+90, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+90, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+90, 130, 30, 10);//rectangle 6
    }

    else if(m1==4)
    {
        iFilledRectangle(160+90, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+90, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+90, 100, 10, 30);//rectangle 5
        iFilledRectangle(120+90, 100, 10, 30);//rectangle 7
    }

    else if(m1==5)
    {
        iFilledRectangle(130+90, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+90, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+90, 90, 30, 10);//rectangle 4
        iFilledRectangle(130+90, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+90, 100, 10, 30);//rectangle 7
    }

    if(m2==0)
    {
        iFilledRectangle(130+150, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+150, 60, 10, 30);//rectangle 2
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+150, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+150, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+150, 100, 10, 30);//rectangle 7

    }

    else if(m2==1)
    {
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+150, 100, 10, 30);//rectangle 5
    }

    else if(m2==2)
    {
        iFilledRectangle(130+150, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+150, 60, 10, 30);//rectangle 2
        iFilledRectangle(130+150, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+150, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+150, 130, 30, 10);//rectangle 6
    }

    else if(m2==3)
    {
        iFilledRectangle(130+150, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+150, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+150, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+150, 130, 30, 10);//rectangle 6
    }

    else if(m2==4)
    {
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+150, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+150, 100, 10, 30);//rectangle 5
        iFilledRectangle(120+150, 100, 10, 30);//rectangle 7
    }

    else if(m2==5)
    {
         iFilledRectangle(130+150, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+150, 90, 30, 10);//rectangle 4
        iFilledRectangle(130+150, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+150, 100, 10, 30);//rectangle 7

    }

    else if(m2==6)
    {
        iFilledRectangle(130+150, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+150, 60, 10, 30);//rectangle 2
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+150, 90, 30, 10);//rectangle 4
        iFilledRectangle(130+150, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+150, 100, 10, 30);//rectangle 7

    }

    else if(m2==7)
    {
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+150, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+150, 130, 30, 10);//rectangle 6
    }

    else if(m2==8)
    {
        iFilledRectangle(130+150, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+150, 60, 10, 30);//rectangle 2
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+150, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+150, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+150, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+150, 100, 10, 30);//rectangle 7

    }

    else if(m2==9)
    {
        iFilledRectangle(130+150, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+150, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+150, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+150, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+150, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+150, 100, 10, 30);//rectangle 7

    }


    if(s1==0)
    {
        iFilledRectangle(130+240, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+240, 60, 10, 30);//rectangle 2
        iFilledRectangle(160+240, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+240, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+240, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+240, 100, 10, 30);//rectangle 7
    }

    else if(s1==1)
    {
        iFilledRectangle(160+240, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+240, 100, 10, 30);//rectangle 5
    }

    else if(s1==2)
    {
        iFilledRectangle(130+240, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+240, 60, 10, 30);//rectangle 2
        iFilledRectangle(130+240, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+240, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+240, 130, 30, 10);//rectangle 6
    }

    else if(s1==3)
    {
        iFilledRectangle(130+240, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+240, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+240, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+240, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+240, 130, 30, 10);//rectangle 6
    }

    else if(s1==4)
    {
        iFilledRectangle(160+240, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+240, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+240, 100, 10, 30);//rectangle 5
        iFilledRectangle(120+240, 100, 10, 30);//rectangle 7
    }

    else if(s1==5)
    {
        iFilledRectangle(130+240, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+240, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+240, 90, 30, 10);//rectangle 4
        iFilledRectangle(130+240, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+240, 100, 10, 30);//rectangle 7
    }

    if(s2==0)
    {
        iFilledRectangle(130+300, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+300, 60, 10, 30);//rectangle 2
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+300, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+300, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+300, 100, 10, 30);//rectangle 7
    }

    else if(s2==1)
    {
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+300, 100, 10, 30);//rectangle 5
    }

    else if(s2==2)
    {
        iFilledRectangle(130+300, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+300, 60, 10, 30);//rectangle 2
        iFilledRectangle(130+300, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+300, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+300, 130, 30, 10);//rectangle 6
    }

    else if(s2==3)
    {
        iFilledRectangle(130+300, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+300, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+300, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+300, 130, 30, 10);//rectangle 6
    }

    else if(s2==4)
    {
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+300, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+300, 100, 10, 30);//rectangle 5
        iFilledRectangle(120+300, 100, 10, 30);//rectangle 7
    }

    else if(s2==5)
    {
        iFilledRectangle(130+300, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+300, 90, 30, 10);//rectangle 4
        iFilledRectangle(130+300, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+300, 100, 10, 30);//rectangle 7
    }

    else if(s2==6)
    {
        iFilledRectangle(130+300, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+300, 60, 10, 30);//rectangle 2
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+300, 90, 30, 10);//rectangle 4
        iFilledRectangle(130+300, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+300, 100, 10, 30);//rectangle 7
    }

    else if(s2==7)
    {
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(160+300, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+300, 130, 30, 10);//rectangle 6
    }

    else if(s2==8)
    {
        iFilledRectangle(130+300, 50, 30, 10);//rectangle 1
        iFilledRectangle(120+300, 60, 10, 30);//rectangle 2
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+300, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+300, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+300, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+300, 100, 10, 30);//rectangle 7
    }

    else if(s2==9)
    {
        iFilledRectangle(130+300, 50, 30, 10);//rectangle 1
        iFilledRectangle(160+300, 60, 10, 30);//rectangle 3
        iFilledRectangle(130+300, 90, 30, 10);//rectangle 4
        iFilledRectangle(160+300, 100, 10, 30);//rectangle 5
        iFilledRectangle(130+300, 130, 30, 10);//rectangle 6
        iFilledRectangle(120+300, 100, 10, 30);//rectangle 7
    }

    iFilledCircle(x, y, r);

    if(s2%2)
    {
        iFilledCircle(190, 70 ,6);
        iFilledCircle(190, 110 ,6);
        iFilledCircle(340, 70 ,6);
        iFilledCircle(340,110 ,6);
    }
}


void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);
    //place your codes here
}


void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
        //	printf("x = %d, y= %d\n",mx,my);
        x += 10;
        y += 10;
    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
        x -= 10;
        y -= 10;
    }
}

void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }
    //place your codes for other keys here
}

void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
    //place your codes for other keys here
}


int main()
{
    //place your own initialization codes here.
    iInitialize(1000, 600, "digital clock");
    return 0;
}
