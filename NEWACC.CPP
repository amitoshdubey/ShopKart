#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<fstream.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

class work
{
	public:
	char name[20];
	char pass[30];
	double cash;
	void newaccount()
	{
		char a[20],b[30];
		gotoxy(25,15);
		cout<<"\n Enter Your Name: ";
		gets(a);
		strcpy(name,a);
		cout<<"\n Enter a Password: ";
		gets(b);
		strcpy(pass,b);
		cash=15000;
	}
	void display()
	{
		gotoxy(1,1);
		cout<<"\n Name: ";
		puts(name);
		cout<<"\n Password: ";
		puts(pass);
		cout<<"\n Account Balance: Rs.";
		cout<<cash;
	}
}w,w1;

void main()
{
	int gd= DETECT,gm,c;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	cleardevice();
	int total=15000;
	settextstyle(7,0,4);
	outtextxy(200,100,"NEW ACCOUNT");
	fstream f;
	f.open("C:\\a.dat",ios::binary|ios::app|ios::in);
	w.newaccount();
	f.write((char*)&w,sizeof(w));
	delay(1000);
	cleardevice();
	setcolor(GREEN);
	outtextxy(180,160,"Congratulations!");
	outtextxy(100,280,"Rs 15,000 has been added");
	outtextxy(190,320,"to your account");
	delay(2000);
	cleardevice();
	f.close();


	fstream f1;
	f1.open("C:\\a.dat",ios::binary|ios::app|ios::in);
	gotoxy(1,1);
	char a[20],b[30];
	cout<<"\n Name: ";
	gets(a);
	cout<<"\n Password: ";
	gets(b);
	while(f1.read((char*)&w1,sizeof(w1)))
	{
		if(strcmp(w1.name,a)==0 && strcmp(w1.pass,b)==0)
		{
			cout<<"Account Balance: Rs"<<w1.cash<<endl;
		}
	}
	getch();
}
