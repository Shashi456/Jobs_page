//loading screen
void graph1()
{
int gd=DETECT,gm,a,z,b,c,i,x=0,gdriver=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BLACK);
settextstyle(0,0,2);
setlinestyle(2,1,1);
outtextxy(200,180,"LOADING,PLEASE WAIT...");

outtextxy(100,410,"Redirecting to Jobs Page");

for(i=10;i<800;i++)
{
delay(10);
line(x,200,x,215);
x++;
}

getch();
}

//login screen

int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
rectangle(250,30,387,48);
rectangle(275,143,398,160);
rectangle(275,175,398,192);


char p[50],u[50];
gotoxy(20,1);
setbkcolor(RED);
gotoxy(34,3);
cout<<"Jobs Page Login";
gotoxy(15,7);
cout<<"To continue as Guest User ,";
cout<<"Please fill in the following";
gotoxy(25,10);
cout<<"NAME:";

gotoxy(20,12);
cout<<"Mobile no.:";
gotoxy(20,25);
rectangle(273,220,345,240);
gotoxy(37,15);
cout<<"SUBMIT";
gotoxy(48,15);
cout<<"(Press Enter)";

gotoxy(51,10);


gotoxy(51,12);


 gotoxy(36,10);
gets(u);


gotoxy(36,12);
gets(p)
gotoxy(25,20);
cout<<"Aunthentication in progress";
for(int j=0;j<5;++j)
{
delay(1000);
cout<<".";
}
}