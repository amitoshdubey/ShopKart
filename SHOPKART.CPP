#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>

float total=0, bill1=0, bill2=0, bill3=0, bill4=0, bill5=0;

class work
{
	public:
	char name[20];
	char pass[30];
	double cash;
}w1;

int account()
{
	cleardevice();
	fstream f1;
	f1.open("C:\\a.dat",ios::binary|ios::app|ios::in);
	char a[20],b[30];
	setcolor(RED);
	outtextxy(200,20,"ACCOUNT DETAILS:");
	outtextxy(50,100,"Name");
	gotoxy(20,8);
	gets(a);
	outtextxy(40,150,"Password");
	gotoxy(20,11);
	gets(b);
	while(f1.read((char*)&w1,sizeof(w1)))
	{
		if(strcmp(w1.name,a)==0 && strcmp(w1.pass,b)==0)
		{
			return 1;
		}
	}
	return 0;
}


class fruits
{
	int qty[60],s_no[60],rate[60];
	float sum;
	char name[60][80];
	int x;
	public:
	fruits();
	void display();
	void getitems();
	void bill();
	int total()
	{
		return sum;
	}
}a;

fruits::fruits()
{
	x=1;
	strcpy(name[x++],"Apple");
	strcpy(name[x++],"Banana");
	strcpy(name[x++],"Carrot");
	strcpy(name[x++],"Cherry");
	strcpy(name[x++],"Fig");
	strcpy(name[x++],"Garlic");
	strcpy(name[x++],"Grape");
	strcpy(name[x++],"Kiwi");
	strcpy(name[x++],"Lemon");
	strcpy(name[x++],"Mango");
	strcpy(name[x++],"Melon");
	strcpy(name[x++],"Mushroom");
	strcpy(name[x++],"Olive");
	strcpy(name[x++],"Orange");
	strcpy(name[x++],"Peanut");
	strcpy(name[x++],"Pear");
	strcpy(name[x++],"Pineapple");
	strcpy(name[x++],"Strawberry");
	strcpy(name[x++],"Tomato");
	strcpy(name[x++],"Watermelon");
	for(int i=1;i<=x;i++)
	{
		qty[i]=0;
		s_no[i]=i;
	}
	x=1;
	rate[x++]=160;
	rate[x++]=30;
	rate[x++]=40;
	rate[x++]=60;
	rate[x++]=70;
	rate[x++]=40;
	rate[x++]=105;
	rate[x++]=200;
	rate[x++]=70;
	rate[x++]=50;
	rate[x++]=25;
	rate[x++]=120;
	rate[x++]=110;
	rate[x++]=80;
	rate[x++]=50;
	rate[x++]=140;
	rate[x++]=60;
	rate[x++]=60;
	rate[x++]=20;
	rate[x++]=25;
	sum=0;
}

void fruits::display()
{
	gotoxy(1,2);
	textcolor(WHITE);
	cout<<"\t--------------------------------------------------------------\n";
	cout<<"\tS.no            Name of the item        Rate          Quantity\n";
	cout<<"\t--------------------------------------------------------------\n";
	for(int i=1;i<x;i++)
	{
		if(strlen(name[i])<8)
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
		else
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
	}
}

void fruits::getitems()
{
	int z,a;
	do
	{
		cleardevice();
		display();
		settextstyle(1,2,3);
		outtextxy(5,50,"Enter 0 to Quit this Menu");
		cout<<"\n\t\t************** BILL= Rs "<<sum<<" ****************"<<endl;
		cout<<"\n\t\t S.no. of item you like: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>a;
		if(a==0)
			break;
		textcolor(WHITE);
		cout<<"\t\t   Enter Quantity: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>z;
		for(int j=1;j<=x;j++)
		{
			if(j==a)
			{
				qty[j]+=z;
				sum=sum+rate[j]*z;
			}
		}
		}while(a!=0);
}

void fruits::bill()
{
	cleardevice();
	gotoxy(1,3);
	cout<<"\n\t\t   ***** Final Bill *****\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"S.no            Name of the item        Rate          Quantity\n";
	cout<<"--------------------------------------------------------------\n";
	for(int j=1;j<=x;j++)
	{
		if(qty[j]>0)
		{
			if(strlen(name[j])<8)
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
			else
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
		}
	}
	cout<<"--------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t   Total:  Rs"<<sum<<"\n";
	cout<<"--------------------------------------------------------------\n";
	getch();
}

class frozen_food
{
	int qty[60],s_no[60],rate[60];
	float sum;
	char name[60][80];
	int x;
	public:
	frozen_food();
	void display();
	void getitems();
	void bill();
	int total()
	{
		return sum;
	}
}b;

frozen_food::frozen_food()
{
	x=1;
	strcpy(name[x++],"French Fries");
	strcpy(name[x++],"Smilies");
	strcpy(name[x++],"Cheese Pockets");
	strcpy(name[x++],"Green Peas");
	strcpy(name[x++],"Veg Samosas");
	strcpy(name[x++],"Spring Roll");
	strcpy(name[x++],"Chicken Sausage");
	strcpy(name[x++],"Fish Fries");
	strcpy(name[x++],"Chicken Nuggets");
	strcpy(name[x++],"Chicken Kebabs");
	strcpy(name[x++],"Potato Wedges");
	strcpy(name[x++],"Sweet Corn");
	strcpy(name[x++],"Frozen Mix Veg");
	strcpy(name[x++],"Aloo Tikki");
	strcpy(name[x++],"Veg Kathi Roll");
	strcpy(name[x++],"Veg Pizza(Mini)");
	strcpy(name[x++],"Veg Pizza");
	strcpy(name[x++],"Chicken Pizza");
	strcpy(name[x++],"Chicken Kathi");
	strcpy(name[x++],"Ckicken Samosas");
	for(int i=1;i<=x;i++)
	{
		qty[i]=0;
		s_no[i]=i;
	}
		x=1;
	rate[x++]=120;
	rate[x++]=110;
	rate[x++]=140;
	rate[x++]=80;
	rate[x++]=120;
	rate[x++]=100;
	rate[x++]=200;
	rate[x++]=180;
	rate[x++]=200;
	rate[x++]=180;
	rate[x++]=150;
	rate[x++]=160;
	rate[x++]=120;
	rate[x++]=100;
	rate[x++]=110;
	rate[x++]=180;
	rate[x++]=220;
	rate[x++]=250;
	rate[x++]=250;
	rate[x++]=180;
	sum=0;
}

void frozen_food::display()
{
	gotoxy(1,2);
	textcolor(WHITE);
	cout<<"\t--------------------------------------------------------------\n";
	cout<<"\tS.no            Name of the item        Rate          Quantity\n";
	cout<<"\t--------------------------------------------------------------\n";
	for(int i=1;i<x;i++)
	{
		if(strlen(name[i])<8)
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
		else
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
	}
}

void frozen_food::getitems()
{
	int z,a;
	do
	{
		cleardevice();
		display();
		settextstyle(1,2,3);
		outtextxy(5,50,"Enter 0 to Quit this Menu");
		cout<<"\n\t\t************** BILL= Rs "<<sum<<" ****************"<<endl;
		cout<<"\n\t\t S.no. of item you like: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>a;
		if(a==0)
			break;
		textcolor(WHITE);
		cout<<"\t\t   Enter Quantity: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>z;
		for(int j=1;j<=x;j++)
		{
			if(j==a)
			{
				qty[j]+=z;
				sum=sum+rate[j]*z;
			}
		}
		}while(a!=0);
}

void frozen_food::bill()
{
	cleardevice();
	gotoxy(1,3);
	cout<<"\n\t\t   ***** Final Bill *****\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"S.no            Name of the item        Rate          Quantity\n";
	cout<<"--------------------------------------------------------------\n";
	for(int j=1;j<=x;j++)
	{
		if(qty[j]>0)
		{
			if(strlen(name[j])<8)
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
			else
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
		}
	}
	cout<<"--------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t   Total:  Rs"<<sum<<"\n";
	cout<<"--------------------------------------------------------------\n";
	getch();
}




class drinks
{
	int qty[60],s_no[60],rate[60];
	float sum;
	char name[60][80];
	int x;

	public:
	drinks();
	void display();
	void getitems();
	void bill();
	int total()
	{
		return sum;
	}
}d;

drinks::drinks()
{
	x=1;
	strcpy(name[x++],"Coka-Cola");
	strcpy(name[x++],"Sprite");
	strcpy(name[x++],"Fanta");
	strcpy(name[x++],"Thumbs Up");
	strcpy(name[x++],"Diet Coke");
	strcpy(name[x++],"Real juice");
	strcpy(name[x++],"Appyfizz");
	strcpy(name[x++],"Red Bull");
	strcpy(name[x++],"Blue-O");
	strcpy(name[x++],"Tango");
	strcpy(name[x++],"Real (Lichi)");
	strcpy(name[x++],"Real (Guava)");
	strcpy(name[x++],"Real (Mixed)");
	strcpy(name[x++],"Rasana");
	strcpy(name[x++],"Real Nimbu");
	strcpy(name[x++],"Coconut Water");
	strcpy(name[x++],"Soda");
	strcpy(name[x++],"Dr.Pepper");
	strcpy(name[x++],"Cold Coffee");
	strcpy(name[x++],"Iced Tea");
	for(int i=1;i<=x;i++)
	{
		qty[i]=0;
		s_no[i]=i;
	}
	x=1;
	rate[x++]=25;
	rate[x++]=25;
	rate[x++]=25;
	rate[x++]=25;
	rate[x++]=25;
	rate[x++]=12;
	rate[x++]=15;
	rate[x++]=25;
	rate[x++]=30;
	rate[x++]=25;
	rate[x++]=12;
	rate[x++]=12;
	rate[x++]=12;
	rate[x++]=15;
	rate[x++]=20;
	rate[x++]=20;
	rate[x++]=12;
	rate[x++]=40;
	rate[x++]=50;
	rate[x++]=30;
	sum=0;
}

void drinks::display()
{
	gotoxy(1,2);
	textcolor(WHITE);
	cout<<"\t--------------------------------------------------------------\n";
	cout<<"\tS.no            Name of the item        Rate          Quantity\n";
	cout<<"\t--------------------------------------------------------------\n";
	for(int i=1;i<x;i++)
	{
		if(strlen(name[i])<8)
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
		else
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
	}
}

void drinks::getitems()
{
	int z,a;
	do
	{
		cleardevice();
		display();
		settextstyle(1,2,3);
		outtextxy(5,50,"Enter 0 to Quit this Menu");
		cout<<"\n\t\t************** BILL= Rs "<<sum<<" ****************"<<endl;
		cout<<"\n\t\t S.no. of item you like: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>a;
		if(a==0)
			break;
		textcolor(WHITE);
		cout<<"\t\t   Enter Quantity: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>z;
		for(int j=1;j<=x;j++)
		{
			if(j==a)
			{
				qty[j]+=z;
				sum=sum+rate[j]*z;
			}
		}
		}while(a!=0);
}

void drinks::bill()
{
	cleardevice();
	gotoxy(1,3);
	cout<<"\n\t\t   ***** Final Bill *****\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"S.no            Name of the item        Rate          Quantity\n";
	cout<<"--------------------------------------------------------------\n";
	for(int j=1;j<=x;j++)
	{
		if(qty[j]>0)
		{
			if(strlen(name[j])<8)
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
			else
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
		}
	}
	cout<<"--------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t   Total:  Rs"<<sum<<"\n";
	cout<<"--------------------------------------------------------------\n";
	getch();
}



class vegetables
{
	int qty[60],s_no[60],rate[60];
	float sum;
	char name[60][80];
	int x;

	public:
	vegetables();
	void display();
	void getitems();
	void bill();
	int total()
	{
		return sum;
	}
}e;

vegetables::vegetables()
{
	x=1;
	strcpy(name[x++],"Potato");
	strcpy(name[x++],"Tomato");
	strcpy(name[x++],"Onion");
	strcpy(name[x++],"Lady Finger");
	strcpy(name[x++],"Brinjal");
	strcpy(name[x++],"Cabbage");
	strcpy(name[x++],"Cauliflower");
	strcpy(name[x++],"Spinach");
	strcpy(name[x++],"Coriender");
	strcpy(name[x++],"Garlic");
	strcpy(name[x++],"Green Chilly");
	strcpy(name[x++],"Ginger");
	strcpy(name[x++],"Lemon");
	strcpy(name[x++],"Raddish");
	strcpy(name[x++],"Carrot");
	for(int i=1;i<=x;i++)
	{
		qty[i]=0;
		s_no[i]=i;
	}
	x=1;
	rate[x++]=28;
	rate[x++]=45;
	rate[x++]=35;
	rate[x++]=55;
	rate[x++]=30;
	rate[x++]=40;
	rate[x++]=70;
	rate[x++]=50;
	rate[x++]=80;
	rate[x++]=60;
	rate[x++]=70;
	rate[x++]=70;
	rate[x++]=100;
	rate[x++]=80;
	rate[x++]=60;
	sum=0;
}

void vegetables::display()
{
	gotoxy(1,2);
	textcolor(WHITE);
	cout<<"\t--------------------------------------------------------------\n";
	cout<<"\tS.no            Name of the item        Rate          Quantity\n";
	cout<<"\t--------------------------------------------------------------\n";
	for(int i=1;i<x;i++)
	{
		if(strlen(name[i])<8)
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
		else
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
	}
}

void vegetables::getitems()
{
	int z,a;
	do
	{
		cleardevice();
		display();
		settextstyle(1,2,3);
		outtextxy(5,50,"Enter 0 to Quit this Menu");
		cout<<"\n\t\t************** BILL= Rs "<<sum<<" ****************"<<endl;
		cout<<"\n\t\t S.no. of item you like: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>a;
		if(a==0)
			break;
		textcolor(WHITE);
		cout<<"\t\t   Enter Quantity: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>z;
		for(int j=1;j<=x;j++)
		{
			if(j==a)
			{
				qty[j]+=z;
				sum=sum+rate[j]*z;
			}
		}
		}while(a!=0);
}

void vegetables::bill()
{
	cleardevice();
	gotoxy(1,3);
	cout<<"\n\t\t   ***** Final Bill *****\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"S.no            Name of the item        Rate          Quantity\n";
	cout<<"--------------------------------------------------------------\n";
	for(int j=1;j<=x;j++)
	{
		if(qty[j]>0)
		{
			if(strlen(name[j])<8)
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
			else
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
		}
	}
	cout<<"--------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t   Total:  Rs"<<sum<<"\n";
	cout<<"--------------------------------------------------------------\n";
	getch();
}


class others
{
	int qty[60],s_no[60],rate[60];
	float sum;
	char name[60][80];
	int x;

	public:
	others();
	void display();
	void getitems();
	void bill();
	int total()
	{
		return sum;
	}
}f;

others::others()
{
	x=1;
	strcpy(name[x++],"Lays (Small)");
	strcpy(name[x++],"Lays (Large)");
	strcpy(name[x++],"Parle-G");
	strcpy(name[x++],"Hide & Seek");
	strcpy(name[x++],"Oreo");
	strcpy(name[x++],"Haldiram Bhujia");
	strcpy(name[x++],"Aloo Lacha");
	strcpy(name[x++],"Bournvita");
	strcpy(name[x++],"Cornflaks");
	strcpy(name[x++],"BhelPuri");
	strcpy(name[x++],"Britania Cake");
	strcpy(name[x++],"Cheese Slices");
	strcpy(name[x++],"Cheese(Chedar)");
	strcpy(name[x++],"Butter - Amul");
	strcpy(name[x++],"Yogurt (Plain)");
	strcpy(name[x++],"Yogurt (Badam)");
	strcpy(name[x++],"Yogurt (Kesar)");
	strcpy(name[x++],"Chach (Plain)");
	strcpy(name[x++],"Chach (Masala)");
	strcpy(name[x++],"Cheese Slice");
	for(int i=1;i<=x;i++)
	{
		qty[i]=0;
		s_no[i]=i;
	}
	x=1;
	rate[x++]=10;
	rate[x++]=20;
	rate[x++]=10;
	rate[x++]=12;
	rate[x++]=20;
	rate[x++]=100;
	rate[x++]=120;
	rate[x++]=160;
	rate[x++]=200;
	rate[x++]=90;
	rate[x++]=70;
	rate[x++]=250;
	rate[x++]=220;
	rate[x++]=160;
	rate[x++]=50;
	rate[x++]=60;
	rate[x++]=60;
	rate[x++]=20;
	rate[x++]=25;
	rate[x++]=150;
	sum=0;
}

void others::display()
{
	gotoxy(1,2);
	textcolor(WHITE);
	cout<<"\t--------------------------------------------------------------\n";
	cout<<"\tS.no            Name of the item        Rate          Quantity\n";
	cout<<"\t--------------------------------------------------------------\n";
	for(int i=1;i<x;i++)
	{
		if(strlen(name[i])<8)
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
		else
		cout<<"\t"<<s_no[i]<<"\t\t"<<name[i]<<"\t\t"<<rate[i]<<"\t\t"<<qty[i]<<"\n";
	}
}

void others::getitems()
{
	int z,a;
	do
	{
		cleardevice();
		display();
		settextstyle(1,2,3);
		outtextxy(5,50,"Enter 0 to Quit this Menu");
		cout<<"\n\t\t************** BILL= Rs "<<sum<<" ****************"<<endl;
		cout<<"\n\t\t S.no. of item you like: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>a;
		if(a==0)
			break;
		textcolor(WHITE);
		cout<<"\t\t   Enter Quantity: ";
		line(40,0,40,600);
		line(0,0,0,600);
		cin>>z;
		for(int j=1;j<=x;j++)
		{
			if(j==a)
			{
				qty[j]+=z;
				sum=sum+rate[j]*z;
			}
		}
		}while(a!=0);
}

void others::bill()
{
	cleardevice();
	gotoxy(1,3);
	cout<<"\n\t\t   ***** Final Bill *****\n";
	cout<<"--------------------------------------------------------------\n";
	cout<<"S.no            Name of the item        Rate          Quantity\n";
	cout<<"--------------------------------------------------------------\n";
	for(int j=1;j<=x;j++)
	{
		if(qty[j]>0)
		{
			if(strlen(name[j])<8)
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
			else
			cout<<s_no[j]<<"\t\t"<<name[j]<<"\t\t"<<rate[j]<<"\t\t"<<qty[j]<<"\n";
		}
	}
	cout<<"--------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t   Total:  Rs"<<sum<<"\n";
	cout<<"--------------------------------------------------------------\n";
	getch();
}

void shopping()
{
	int y=220,g;
	do
	{
		abc:
		cleardevice();
		setcolor(3);

		line(20,115,80,115);
		line(25,118,75,118);
		line(80,110,123,55);
		line(80,115,130,50);
		line(135,47,195,47);
		line(130,50,200,50);

		settextstyle(7,0,6);
		setcolor(3);
		outtextxy(120,53," H O P P I N G ");
		settextstyle(8,0,3);
		setcolor(7);

		outtextxy(20,175,"Please select an option:");
		settextstyle(8,0,2);
		outtextxy(120,y,">>");
		outtextxy(170,220,"1. Fruits");
		outtextxy(170,260,"2. Frozen Food");
		outtextxy(170,300,"3. Drinks");
		outtextxy(170,340,"4. Vegetables");
		outtextxy(170,380,"5. Other food items (Biscuit etc.)");
		g=getch();
		if(g==80 && y<380)
		{
			y=y+40;
			goto abc;
		}
		else if(g==72 && y>220)
		{
			y=y-40;
			goto abc;
		}
		if(g==13)
		{
			if(y==220)
			{
				cleardevice();
				a.display();
				a.getitems();
				a.bill();
				::bill1 = ::bill1 + a.total();
			}
			if(y==260)
			{
				cleardevice();
				b.display();
				b.getitems();
				b.bill();
				::bill2 = ::bill2 + b.total();
			}
			if(y==300)
			{
				cleardevice();
				d.display();
				d.getitems();
				d.bill();
				::bill3 = ::bill3 + d.total();
			}
			if(y==340)
			{
				cleardevice();
				e.display();
				e.getitems();
				e.bill();
				::bill4 = ::bill4 + e.total();
			}
			if(y==380)
			{
				cleardevice();
				f.display();
				f.getitems();
				f.bill();
				::bill5 = ::bill5 + f.total();
			}
		}
	}while(g!=27);
	::total = ::bill1 +::bill2 +::bill3 +::bill4 +::bill5;
	if(::total!=0)
	{
		cleardevice();
		gotoxy(1,3);
		cout<<"\n\t\t   ***** Final Bill *****\n";
		cout<<"\t -----------------------------------------------\n";
		cout<<"\t S.no            Category           Total Amount\n";
		cout<<"\t -----------------------------------------------\n";
		cout<<"\t  1.              Fruits      \t\t"<<::bill1<<"\n";
		cout<<"\t  2.	   	  Frozen Foods\t\t"<<::bill2<<"\n";
		cout<<"\t  3.		  Drinks      \t\t"<<::bill3<<"\n";
		cout<<"\t  4.		  Vegetables  \t\t"<<::bill4<<"\n";
		cout<<"\t  5.		  Others      \t\t"<<::bill5<<"\n";
		cout<<"\n\t\t\t\t Total Amount = "<<::total;
		fstream f1("C:\\a.dat",ios::binary|ios::app|ios::in);
		w1.cash=w1.cash-::total;
		f1.write((char*)&w1,sizeof(w1));
		f1.close();
		getch();
	}
}

void ins()
{
	ifstream fin("ins.txt");
	char lin[80];
	while(fin.getline(lin,80))
		cout<<lin<<endl;
	fin.close();
}

void fail()
{
	cleardevice();
	setcolor(RED);
	outtextxy(200,200,"NOT VALID ACCOUNT !");
	delay(1000);
}

void main()
{

	int gd= DETECT,gm,c;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	cleardevice();
	for(int j=120;j<=280;j++)
	{
		setcolor(j-119);
		line(120,215,j,215);
		line(118,218,j+2,218);
		line(116,221,j+4,221);
		line(114,224,j+6,224);
		line(112,226,j+8,226);
		delay(10);
	}
	for(int k=1;k<=50;k++)
	{
		setcolor(k%13);
		line(280,215,280+k,215-k);
		line(282,218,282+k,218-k);
		line(284,221,284+k,221-k);
		line(286,224,286+k,224-k);
		line(288,226,288+k,226-k);
		delay(10);
	}
	for(j=1;j<=160;j++)
	{
		setcolor(j+1);
		line(330,165,330+j,165);
		line(332,168,332+j,168);
		line(334,171,334+j,171);
		line(336,174,336+j,174);
		line(338,176,338+j,176);
		delay(10);
	}
	setcolor(3);
	settextstyle(1,0,5);
	outtextxy(100,400,"S");
	delay(500);
	outtextxy(140,400,"H");
	delay(500);
	outtextxy(180,400,"O");
	delay(500);
	outtextxy(220,400,"P");
	delay(500);
	outtextxy(260,400,"-");
	delay(500);
	outtextxy(300,400,"K");
	delay(500);
	outtextxy(340,400,"A");
	delay(500);
	outtextxy(380,400,"R");
	delay(500);
	outtextxy(420,400,"T");
	delay(500);
	cleardevice();
	int y=220;
	do
	{
		abc:
		cleardevice();
		setcolor(3);
		bar(0,30,700,140);
		setcolor(0);

		line(20,115,80,115);
		line(25,118,75,118);

		line(80,110,123,55);
		line(80,115,130,50);

		line(135,47,195,47);
		line(130,50,200,50);

		settextstyle(7,0,6);
		setcolor(3);
		outtextxy(120,53," H O P-K A R T");
		settextstyle(8,0,3);
		setcolor(7);

		outtextxy(20,175,"Please select an option:");
		settextstyle(8,0,2);
		outtextxy(140,y,">>");
		outtextxy(190,220,"1. Shopping");
		outtextxy(190,270,"2. Instructions for usage");
		outtextxy(190,320,"3. Credits");
		c=getch();
		if(c==80 && y<320)
		{
			y=y+50;
			goto abc;
		}
		else if(c==72 && y>220)
		{
			y=y-50;
			goto abc;
		}
		if(c==13)
		{
			if(y==220)
			{
				cleardevice();
				int zz;
				zz=account();
				if(zz==1)
				{
					cleardevice();
					delay(400);
					cleardevice();
					shopping();
					cleardevice();
				}
				else
					fail();
				cleardevice();
			}
			else if(y==270)
			{
				cleardevice();
				ins();
				getch();
			}
			else if(y==320)
			{
				cleardevice();
				settextstyle(7,0,6);
				outtextxy(200,50,"CREDITS :");
				settextstyle(7,0,3);
				outtextxy(220,180,"Project Made by:");
				outtextxy(170,250,"1. Amitosh Dubey (XII-D)");
				outtextxy(190,300,"2. Aditya Laad(XII-B)");
				getch();
			}
			else
				break;
		}
	}while(c!=27);
}
