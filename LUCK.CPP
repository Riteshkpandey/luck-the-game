
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main(void)
{
	clrscr();
	char name[100],ch='y';
	float a,l,luck,i,n,cpu;
	int level,r,j=1,k=2,m=1,z1=0,z2=2,z3=7,z4=6,z5=5,z6=7;
	int gd=DETECT,gm,midx,midy;
	initgraph(&gd,&gm,"c:\\TC\\BG!");

	midx = getmaxx()/2;
	midy = getmaxy()/2;
	setcolor(GREEN);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	rectangle(midx-130,midy-190,midx+130,midy+190);
	circle(midx,midy,90);
	rectangle(midx-240,midy-100,midx+240,midy+100);
	circle(midx,midy,110);
	rectangle(midx-350,midy-110,midx+350,midy+110);
	circle(midx,midy,130);

	outtextxy(midx,midy-10,"$$WELCOME TO THE WORLD OF LUCK$$");
	outtextxy(midx,midy-40,"GAME CREATED BY AR PRODUCTION !!!!!!");

	outtextxy(midx,midy+40,"MADE BY RITESH AND NITESH");

	getch();
	cleardevice();



  //	outtextxy(midx,midy-20,"IN THIS GAME YOU HAVE TO CHECK YOU LUCK ");
    //	outtextxy(midx,midy-40,"AT A PRESENT TIME..");
	setcolor(GREEN);
	outtextxy(midx,midy-50,"IN THIS GAME YOU HAVE TO CKECK YOUR LUCK AT  A PRESENT TIME");
	delay(2000);
	getch();
	cleardevice();
	setcolor(WHITE);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	rectangle(midx-30,midy-80,midx+30,midy+80);
	circle(midx,midy-50,22);
	setfillstyle(SOLID_FILL,RED);
	floodfill(midx,midy-50,WHITE);
	setcolor(BLUE);
	outtextxy(midx,midy-50,"WAIT");
	delay(2000);
	graphdefaults();
	cleardevice();
	setcolor(WHITE);
	rectangle(midx-30,midy-80,midx+30,midy+80);
	circle(midx,midy,20);
	setfillstyle(SOLID_FILL,YELLOW);
	setcolor(BLUE);
	outtextxy(midx-18,midy-3,"READY");

	delay(2000);
	cleardevice();
	graphdefaults();
	cleardevice();
	setcolor(WHITE);
	rectangle(midx-30,midy-80,midx+30,midy+80);
	circle(midx,midy,20);
	setfillstyle(SOLID_FILL,YELLOW);
	setcolor(BLUE);
	outtextxy(midx-20,midy-30,"GO.....");
	delay(1000);
	cleardevice();
	//game
	clrscr();
	setcolor(WHITE);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	rectangle(midx-30,midy-80,midx+30,midy+80);
	circle(midx,midy-50,22);
	setfillstyle(SOLID_FILL,RED);
	floodfill(midx,midy-50,WHITE);
	setcolor(BLUE);
	outtextxy(midx,midy-50,"1.EASY LEVEL");
	delay(1000);
	cleardevice();

	graphdefaults();
	setcolor(BLUE);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);

	rectangle(midx-32,midy-82,midx+32,midy+82);
	rectangle(midx-42,midy-42,midx+42,midy+42);

	circle(midx,midy,22);
	setfillstyle(SOLID_FILL,YELLOW);
	setcolor(BLUE);
	outtextxy(midx-18,midy-3,"2.MEDIUM LEVEL");

	delay(1000);
	cleardevice();

	graphdefaults();
	setcolor(BLUE);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,3);

	rectangle(midx-36,midy-86,midx+36,midy+86);
	circle(midx,midy,26);
	setfillstyle(SOLID_FILL,RED);
	setcolor(BLUE);
	outtextxy(midx-26,midy-6,"3.HARD LEVEL");

	delay(1000);
	cleardevice();

	graphdefaults();

	setcolor(WHITE);
	rectangle(midx-30,midy-80,midx+30,midy+80);
	circle(midx,midy,20);
	setfillstyle(SOLID_FILL,YELLOW);
	setcolor(BLUE);
	outtextxy(midx-18,midy-3,"ENTER YOUR CHOICE=");

	scanf("%d",&level);
	clrscr();
	fflush(stdin);

       switch(level)
	{
	case 1:	while(ch=='y')
		{       clrscr();
			m+=1;
			z1=z1+2;
		printf("\n now its time to check your luck at this present time!!! ");
		printf("\n you have to just the number of steps to search a number which is stored in cpu= ");
		scanf("%f",&n);
		cpu=(m*(n/10)*50)+z1;

		i=0;
		do
		{
			i+=1;
			printf("\nenter the no=");
			scanf("%f",&a);
			if (a>cpu)
				printf("its too long");
			else if (a<cpu)
				printf("\nits too short");
				else if(a==cpu)
				{
					l= (i/n)*100;
					luck=100-l;
					printf("\nwell done find  the currect number");
					printf("\nyou find the number in=%f steps ",i);
					if(i==1)
						printf("\nyou luck at a present time =100%");
					else if(i!=1)
						if(luck<0)
							printf("\nyou having a bad luck");
						else
							printf("\nyou luck at a present time =%f %",luck);

					//getch();
					//exit(0);
				}
		}while(a!=cpu);

		fflush(stdin);
		printf("\nDo You want to play more y/n : ");
		scanf("%c",&ch);
		 clrscr();
		}
	 break;
	case 2:  while(ch=='y')
		{       clrscr();
		j+=2;
		z2=z2+4;
		z3=z3+9;
		printf("\n now its time to check your luck at this present time!!! ");
		printf("\n you have to just the number of steps to search a number which is stored in cpu= ");
		scanf("%f",&n);
		cpu=(j*(n/10)*60)+z2+z3;
		i=0;
		do
		{
			i+=1;
			printf("\nenter the no=");
			scanf("%f",&a);
			if (a>cpu)
				printf("its too long");
			else if (a<cpu)
				printf("\nits too short");
				else if(a==cpu)
				{
					l= (i/n)*100;
					luck=100-l;
					printf("\nwell done find  the currect number");
					printf("\nyou find the number in=%f steps ",i);
					if(i==1)
						printf("\nyou luck at a present time =100%");
					else if(i!=1)
						if(luck<0)
							printf("\nyou having a bad luck");
						else
							printf("\nyou luck at a present time =%f %",luck);

					//getch();

					//exit(0);
				}
		}while(a!=cpu);
		clrscr();
		fflush(stdin);
		printf("\nDo You want to play more y/n : ");
		scanf("%c",&ch);
		       clrscr();	}
			break;
	case 3:	while(ch=='y')
		{       clrscr();
		j++ ;
		k+=2;
		z4=z4+3;
		z5=z5+8;
		z6=z6+33;
		printf("\n now its time to check your luck at this present time!!! ");
		printf("\n you have to just the number of steps to search a number which is stored in cpu= ");
		scanf("%f",&n);
		cpu=(k*j*(n/10)*70)+z4+z5+z6;
		i=0;
		do
		{
			i+=1;
			printf("\nenter the no=");
			scanf("%f",&a);
			if (a>cpu)
				printf("its too long");
			else if (a<cpu)
				printf("\nits too short");
				else if(a==cpu)
				{
					l= (i/n)*100;
					luck=100-l;
					printf("\nwell done find  the currect number");
					printf("\nyou find the number in=%f steps ",i);
					if(i==1)
						printf("\nyou luck at a present time =100%");
					else if(i!=1)
						if(luck<0)
							printf("\nyou having a bad luck");
						else
							printf("\nyou luck at a present time =%f %",luck);

					//getch();
					//exit(0);
				}
		}while(a!=cpu);
		clrscr();
		fflush(stdin);
		printf("\nDo You want to play more y/n : ");
		scanf("%c",&ch);
		clrscr();
	}
	break;
	default:printf("\nwrong! choice");
}
getch();
}