#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>

int ix=200,d=1,iy=270,gd=9,gm=2,c;


void bot1()
  {



  do
  {
  for(c=1;c<=1;c++)
  {
     setcolor(15);

 circle(ix,iy,10);
 setfillstyle(1,15);
 floodfill(ix,iy,15);
  delay(50);

 circle(ix,iy,10);
 setfillstyle(1,15);
 floodfill(ix,iy,0);
  }
  iy=iy+d;
  if(iy==269) d=-d;
  if(iy==300) d=-d;
  }while(!kbhit());
  }


 void menu ()
  {clrscr ();
   int gd=9,gm=2;
    initgraph(&gd,&gm, "C:\\tc\\BGI");



	settextstyle(0,0,5);
	setcolor(2);
	outtextxy(80,15,"PLASMA BALL!");

	settextstyle(0,0,5);
	setcolor(9);
	outtextxy(80,12,"PLASMA BALL!");

	settextstyle(0,0,2);
	setcolor(228);
	outtextxy(540,450,"v 2.28");

	settextstyle(0,0,2);
	setcolor(8);
	outtextxy(540,449,"v 2.28");


	settextstyle(0,0,3);
	setcolor(228);
	outtextxy(25,135,"Level 1-1");

	settextstyle(0,0,3);
	setcolor(228);
	outtextxy(25,170,"Level 2-2");

	settextstyle(0,0,3);
	setcolor(228);
	outtextxy(25,100,"Tutorial-0");

	settextstyle(0,0,3);
	setcolor(8);
	outtextxy(25,133,"Level 1-1");

	settextstyle(0,0,3);
	setcolor(8);
	outtextxy(25,168,"Level 2-2");

	settextstyle(0,0,3);
	setcolor(8);
	outtextxy(25,98,"Tutorial-0");




  }

  void lvl2()

 { int gd=9,gm=2;
  int x,y=15,i,j,h=60,z=115,o,p=115,f;
  int ix=200,d=1,iy=270,c;

  char ch;
 int m_l[8][10]={1,1,1,1,1,1,1,1,1,1,
		 0,0,1,1,1,0,0,0,0,1,
		 1,0,1,1,1,0,1,1,0,1,
		 1,0,1,1,1,0,1,1,0,1,
		 1,0,0,0,1,0,1,1,0,1,
		 1,1,1,0,1,0,1,1,0,1,
		 1,1,1,0,0,0,1,1,0,1,
		 1,1,1,1,1,1,1,1,6,1,
		};



  initgraph(&gd,&gm, "C:\\tc\\BGI");

    for(i=0;i<8;i++)
   {
     x=30;
     for(j=0;j<10;j++)
       { setfillstyle(1,m_l[i][j]);
	 bar(x,y,x+h,y+h);
	  x=x+h;
	  }
	  y=y+h;
	  }
	settextstyle(0,0,2);
	setcolor(8);
	outtextxy(395,450,"Level 2");
	settextstyle(0,0,2);
	setcolor(5);
	outtextxy(395,447,"Level 2");


	  do
	  {


	  setcolor(228);
	  circle(z+1,p+1,11);
	setfillstyle(1,228);
	  floodfill(z,p,228);
	  f=z;
	  o=p;

	  do                //bot
  {

     setcolor(2);

 circle(ix,iy,10);
 setfillstyle(1,2);
 floodfill(ix,iy,2);
  delay(50);



 circle(ix,iy,10);
 setfillstyle(1,0);
 floodfill(ix,iy,0);

  iy=iy+d;
  if(iy==269) d=-d;
  if(iy==300) d=-d;


  }while(!kbhit());




	  if(kbhit)ch=getch();
	  switch(ch)
	  {
	  case 'w':if(getpixel(z,p-22)==0) p=p-22;break;
	   case 'a':if(getpixel(z-22,p)==0) z=z-22;break;
	    case 'd':if(getpixel(z+22,p)==0) z=z+22;break;
	     case 's':if(getpixel(z,p+22)==0) p=p+22;break;
	     }

	  setcolor(0);
	  circle(f,o,13);
	  setfillstyle(1,0);                        //blackrubman
	  floodfill(f,o,0);


	  if(getpixel(z+22,p)==2)
	{
	   cleardevice();
	settextstyle(0,0,5);
	setcolor(228);                         //mainbotif
	outtextxy(130,215,"YOU LOOSER!!!");

	   }

	   if(getpixel(z,p+22)==6)
	{
	cleardevice();
	settextstyle(0,0,5);
	setcolor(228);
	outtextxy(130,215,"YOU WON!!!");

	settextstyle(0,0,5);
	setcolor(8);
	outtextxy(132,217,"YOU WON!!!");

	settextstyle(0,0,2);
	setcolor(228);
	outtextxy(350,450,"N- Next level");


	settextstyle(0,0,2);
	setcolor(228);
	outtextxy(350,400,"Esc- Main menu");


	 if(kbhit)ch=getch();
	switch (ch)
	{
	case 'n': lvl2();break;



	}


	}




	     }while(ch!=27);

	     closegraph();

	     }

  void lvl1()
 { int gd=9,gm=2;
  int x,y=30,i,j,h=60,z=115,o,p=115,f;
  char ch;
 int m_l[8][10]={
		2,2,2,2,2,2,2,2,2,2,
		2,9,9,2,2,9,9,9,9,2,
		2,2,9,9,2,9,2,2,9,2,
		2,2,2,9,9,9,2,2,9,2,
		2,2,2,2,2,2,2,2,9,2,
		2,2,9,9,9,9,9,9,9,2,
		2,9,9,2,2,2,2,2,2,2,
		2,1,2,2,2,2,2,2,2,2};



  initgraph(&gd,&gm, "C:\\tc\\BGI");



    for(i=0;i<8;i++)
   {

     x=30;
     for(j=0;j<10;j++)

       {
	setfillstyle(1,m_l[i][j]);
	 bar(x,y,x+h,y+h);
	  x=x+h;
	  }
	  y=y+h;

	  }

	settextstyle(0,0,2);
	setcolor(8);
	outtextxy(500,425,"Level 1");
	settextstyle(0,0,2);
	setcolor(5);
	outtextxy(500,422,"Level 1");

	  do

	  {

	  setcolor(228);
	  circle(z+1,p+1,11);
	setfillstyle(1,228);
	  floodfill(z,p,228);
	  f=z;
	  o=p;


	  if(kbhit)ch=getch();
	  switch(ch)
	  {
	  case 'w':if(getpixel(z,p-22)==9) p=p-22;break;
	   case 'a':if(getpixel(z-22,p)==9) z=z-22;break;
	    case 'd':if(getpixel(z+22,p)==9) z=z+22;break;
	     case 's':if(getpixel(z,p+22)==9) p=p+22;break;
	     }
	  setcolor(9);
	  circle(f,o,13);
	  setfillstyle(1,9);
	  floodfill(f,o,9);

		if(getpixel(z,p+22)==1)
	{
	cleardevice();
	settextstyle(0,0,5);
	setcolor(228);
	outtextxy(130,215,"YOU WON!!!");

	settextstyle(0,0,5);
	setcolor(8);
	outtextxy(132,217,"YOU WON!!!");

	settextstyle(0,0,2);
	setcolor(228);
	outtextxy(350,450,"N- Next level");


	settextstyle(0,0,2);
	setcolor(228);
	outtextxy(350,400,"Esc- Main menu");


	 if(kbhit)ch=getch();
	switch (ch)
	{
	case 'n': lvl2();break;

	}


	}

	     }while(ch!=27);
	     closegraph();
	     }

  void lvl0()
 { int gd=9,gm=2;
  int x,y=30,i,j,h=60,z=115,o,p=115,f;
  char ch;
 int m_l[9][11]={
		14,14,14,14,14,14,14,14,14,14,14,
		14,15,14,14,14,15,15,15,15,15,14,
		14,15,15,15,14,15,14,14,14,10,14,
		14,14,14,15,14,15,15,15,14,14,14,
		14,14,14,15,14,14,14,15,14,14,14,
		14,14,14,15,15,15,14,15,14,14,14,
		14,14,14,14,14,15,15,15,14,14,14,
		14,14,14,14,14,14,14,14,14,14,14,
		14,14,14,14,14,14,14,14,14,14,14};




  initgraph(&gd,&gm, "C:\\tc\\BGI");




    for(i=0;i<9;i++)
   {
     x=30;
     for(j=0;j<11;j++)
       { setfillstyle(1,m_l[i][j]);
	 bar(x,y,x+h,y+h);
	  x=x+h;
	  }
	  y=y+h;
	  }
	settextstyle(0,0,2);
	setcolor(228);
	outtextxy(45,325,"W-up");
	outtextxy(45,350,"S-down");
	outtextxy(45,375,"A-left");
	outtextxy(45,400,"D-right");
	  do
	  {

	  setcolor(228);
	  circle(z+1,p+1,11);
	setfillstyle(1,228);
	  floodfill(z,p,228);
	settextstyle(0,0,2);
	setcolor(228);
	  f=z;
	  o=p;
	  if(kbhit)ch=getch();
	  switch(ch)
	  {
	  case 'w':if(getpixel(z,p-22)==15) p=p-22;break;
	   case 'a':if(getpixel(z-22,p)==15) z=z-22;break;
	    case 'd':if(getpixel(z+22,p)==15) z=z+22;break;
	     case 's':if(getpixel(z,p+22)==15) p=p+22;break;
	     }

	  setcolor(15);
	  circle(f,o,13);
	  setfillstyle(1,15);
	  floodfill(f,o,15);


		if(getpixel(z,p+22)==10)
	{
	cleardevice();
	settextstyle(0,0,5);
	setcolor(228);
	outtextxy(130,215,"YOU WON!!!");

	settextstyle(0,0,5);
	setcolor(8);
	outtextxy(132,217,"YOU WON!!!");



	settextstyle(0,0,2);
	setcolor(228);
	outtextxy(350,450,"N- Next level");

	settextstyle(0,0,2);
	setcolor(228);
	outtextxy(350,400,"Esc- Main menu");


	 if(kbhit)ch=getch();
	switch (ch)
	{
	case 'n': lvl1();break;
	}


	}

	     }while(ch!=27);
	     closegraph();
	     }





	 main ()
  {char ch;
   do {  menu ();
	 ch=getch ();
	 switch (ch)
	 {case '1': lvl1 ();break;
	 case '2': lvl2 ();break;
	case '0': lvl0 ();break;

	 }
      }while (ch!=27);
  }


