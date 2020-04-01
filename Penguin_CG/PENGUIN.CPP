#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gmode,gdriver=DETECT;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
int tx;
/*
//face of penguin
line(450,50,475,60);
line(450,50,435,60);
line(435,60,430,90);
line(475,60,480,90);
line(430,90,480,90);
//eyes of penguin
circle(445,65,5);
putpixel(442,65,WHITE);
//mouth of the penguin
line(437,70,400,75);
line(437,70,437,80);
line(400,75,400,80);
line(400,80,437,80);
rectangle(400,83,437,86);
//body of penguin
line(440,83,475,83);
line(440,83,410,200);
line(475,83,525,200);
line(410,200,440,230);
line(525,200,495,230);
line(440,230,495,230);
circle(457,86,3);
//hand of penguin
line(455,120,485,120);
line(455,120,460,180);
line(485,120,480,180);
line(460,180,480,180);
circle(470,130,3);
//left leg of penguin
line(430,210,450,212);
line(430,210,425,250);
line(450,212,445,255);
line(425,250,445,255);
circle(440,219,3);
circle(435,247,3);
line(435,235,445,250);
line(435,235,390,255);
line(445,250,400,270);
line(390,255,400,270);
//right leg of penguin
line(480,212,500,208);
line(480,212,485,255);
line(500,208,505,250);
line(485,255,505,250);
circle(490,220,3);
circle(495,246,3);
line(497,235,505,250);
line(497,235,450,255);
line(505,250,460,270);
line(450,255,460,270);
*/
//for the motion of the penguin
for(tx = 10; tx!=550;tx++)
{
//middle line
line(0,270,550,270);
//face of penguin
line(450-tx,50,475-tx,60);
line(450-tx,50,435-tx,60);
line(435-tx,60,430-tx,90);
line(475-tx,60,480-tx,90);
line(430-tx,90,480-tx,90);
//eyes of penguin
circle(445-tx,65,5);
putpixel(442-tx,65,WHITE);
//beak of the penguin
if(tx % 2 ==0)
{
line(437-tx,70,400-tx,75);
line(437-tx,70,437-tx,80);
line(400-tx,75,400-tx,80);
line(400-tx,80,437-tx,80);
rectangle(400-tx,85,437-tx,88);
}
else
{
int bx = 5;
line(437-tx,70+bx,400-tx,75+bx);
line(437-tx,70+bx,437-tx,80+bx);
line(400-tx,75+bx,400-tx,80+bx);
line(400-tx,80+bx,437-tx,80+bx);
rectangle(400-tx,85-bx,437-tx,88-bx);
}
//body of penguin
line(440-tx,83,475-tx,83);
line(440-tx,83,410-tx,200);
line(475-tx,83,525-tx,200);
line(410-tx,200,440-tx,230);
line(525-tx,200,495-tx,230);
line(440-tx,230,495-tx,230);
circle(457-tx,86,3);
//hand of penguin
line(455-tx,120,485-tx,120);
line(455-tx,120,460-tx,180);
line(485-tx,120,480-tx,180);
line(460-tx,180,480-tx,180);
circle(470-tx,130,3);

if(tx % 2 ==0)
{
//left leg of penguin
line(430-tx,210,450-tx,212);
line(430-tx,210,425-tx,250);
line(450-tx,212,445-tx,255);
line(425-tx,250,445-tx,255);
circle(440-tx,219,3);
circle(435-tx,247,3);
line(435-tx,235,445-tx,250);
line(435-tx,235,390-tx,255);
line(445-tx,250,400-tx,270);
line(390-tx,255,400-tx,270);
}
else
{
int lx = 5;
//left leg of penguin
line(430-tx+lx,210+lx,450-tx+lx,212+lx);
line(430-tx+lx,210+lx,425-tx+lx,250+lx);
line(450-tx+lx,212+lx,445-tx+lx,255+lx);
line(425-tx+lx,250+lx,445-tx+lx,255+lx);
circle(440-tx+lx,219+lx,3);
circle(435-tx+lx,247+lx,3);
line(435-tx+lx,235+lx,445-tx+lx,250+lx);
line(435-tx+lx,235+lx,390-tx+lx,255+lx);
line(445-tx+lx,250+lx,400-tx+lx,270+lx);
line(390-tx+lx,255+lx,400-tx+lx,270+lx);
}
if(tx % 2==0)
{
int rx = 5;
//right leg of penguin
line(480-tx+rx,212+rx,500-tx+rx,208+rx);
line(480-tx+rx,212+rx,485-tx+rx,255+rx);
line(500-tx+rx,208+rx,505-tx+rx,250+rx);
line(485-tx+rx,255+rx,505-tx+rx,250+rx);
circle(490-tx+rx,220+rx,3);
circle(495-tx+rx,246+rx,3);
line(497-tx+rx,235+rx,505-tx+rx,250+rx);
line(497-tx+rx,235+rx,450-tx+rx,255+rx);
line(505-tx+rx,250+rx,460-tx+rx,270+rx);
line(450-tx+rx,255+rx,460-tx+rx,270+rx);
}
else
{
//right leg of penguin
line(480-tx,212,500-tx,208);
line(480-tx,212,485-tx,255);
line(500-tx,208,505-tx,250);
line(485-tx,255,505-tx,250);
circle(490-tx,220,3);
circle(495-tx,246,3);
line(497-tx,235,505-tx,250);
line(497-tx,235,450-tx,255);
line(505-tx,250,460-tx,270);
line(450-tx,255,460-tx,270);
}


//reflection
int ry = 540;
//face of penguin
line(450-tx,ry-50,475-tx,ry-60);
line(450-tx,ry-50,435-tx,ry-60);
line(435-tx,ry-60,430-tx,ry-90);
line(475-tx,ry-60,480-tx,ry-90);
line(430-tx,ry-90,480-tx,ry-90);
//eyes of penguin
circle(445-tx,ry-65,5);
putpixel(442-tx,ry-65,WHITE);

//beak of the penguin
if(tx % 2 == 0)
{
line(437-tx,ry-70,400-tx,ry-75);
line(437-tx,ry-70,437-tx,ry-80);
line(400-tx,ry-75,400-tx,ry-80);
line(400-tx,ry-80,437-tx,ry-80);
rectangle(400-tx,ry-83,437-tx,ry-85);
}
else
{
int bx1 = 5;
line(437-tx,ry-70+bx1,400-tx,ry-75+bx1);
line(437-tx,ry-70+bx1,437-tx,ry-80+bx1);
line(400-tx,ry-75+bx1,400-tx,ry-80+bx1);
line(400-tx,ry-80+bx1,437-tx,ry-80+bx1);
rectangle(400-tx,ry-83-bx1,437-tx,ry-85-bx1);
}
//body of penguin
line(440-tx,ry-83,475-tx,ry-83);
line(440-tx,ry-83,410-tx,ry-200);
line(475-tx,ry-83,525-tx,ry-200);
line(410-tx,ry-200,440-tx,ry-230);
line(525-tx,ry-200,495-tx,ry-230);
line(440-tx,ry-230,495-tx,ry-230);
circle(457-tx,ry-86,3);
//hand of penguin
line(455-tx,ry-120,485-tx,ry-120);
line(455-tx,ry-120,460-tx,ry-180);
line(485-tx,ry-120,480-tx,ry-180);
line(460-tx,ry-180,480-tx,ry-180);
circle(470-tx,ry-130,3);

if(tx % 2 ==0)
{
//left leg of penguin
line(430-tx,ry-210,450-tx,ry-212);
line(430-tx,ry-210,425-tx,ry-250);
line(450-tx,ry-212,445-tx,ry-255);
line(425-tx,ry-250,445-tx,ry-255);
circle(440-tx,ry-219,3);
circle(435-tx,ry-247,3);
line(435-tx,ry-235,445-tx,ry-250);
line(435-tx,ry-235,390-tx,ry-255);
line(445-tx,ry-250,400-tx,ry-270);
line(390-tx,ry-255,400-tx,ry-270);
}
else
{
int lx1 = 5;
//left leg of penguin
line(430-tx+lx1,ry-210+lx1,450-tx+lx1,ry-212+lx1);
line(430-tx+lx1,ry-210+lx1,425-tx+lx1,ry-250+lx1);
line(450-tx+lx1,ry-212+lx1,445-tx+lx1,ry-255+lx1);
line(425-tx+lx1,ry-250+lx1,445-tx+lx1,ry-255+lx1);
circle(440-tx+lx1,ry-219+lx1,3);
circle(435-tx+lx1,ry-247+lx1,3);
line(435-tx+lx1,ry-235+lx1,445-tx+lx1,ry-250+lx1);
line(435-tx+lx1,ry-235+lx1,390-tx+lx1,ry-255+lx1);
line(445-tx+lx1,ry-250+lx1,400-tx+lx1,ry-270+lx1);
line(390-tx+lx1,ry-255+lx1,400-tx+lx1,ry-270+lx1);
}
if(tx % 2 ==0)
{
int rx1 = 5;
//right leg of penguin
line(480-tx+rx1,ry-212+rx1,500-tx+rx1,ry-208+rx1);
line(480-tx+rx1,ry-212+rx1,485-tx+rx1,ry-255+rx1);
line(500-tx+rx1,ry-208+rx1,505-tx+rx1,ry-250+rx1);
line(485-tx+rx1,ry-255+rx1,505-tx+rx1,ry-250+rx1);
circle(490-tx+rx1,ry-220+rx1,3);
circle(495-tx+rx1,ry-246+rx1,3);
line(497-tx+rx1,ry-235+rx1,505-tx+rx1,ry-250+rx1);
line(497-tx+rx1,ry-235+rx1,450-tx+rx1,ry-255+rx1);
line(505-tx+rx1,ry-250+rx1,460-tx+rx1,ry-270+rx1);
line(450-tx+rx1,ry-255+rx1,460-tx+rx1,ry-270+rx1);
}
else
{
//right leg of penguin
line(480-tx,ry-212,500-tx,ry-208);
line(480-tx,ry-212,485-tx,ry-255);
line(500-tx,ry-208,505-tx,ry-250);
line(485-tx,ry-255,505-tx,ry-250);
circle(490-tx,ry-220,3);
circle(495-tx,ry-246,3);
line(497-tx,ry-235,505-tx,ry-250);
line(497-tx,ry-235,450-tx,ry-255);
line(505-tx,ry-250,460-tx,ry-270);
line(450-tx,ry-255,460-tx,ry-270);
}
delay(100);
cleardevice();
}
getche();
}