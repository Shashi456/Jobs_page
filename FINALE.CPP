#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<GRAPHICS.h>
#include<math.h>
#include<iomanip.h>
#include<process.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
void graph()
{
int gd=DETECT,gm,a,b,c,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setbkcolor(BLACK);
settextstyle(8,0,0);
rectangle(0,5,635,80);
outtextxy(170,20,"The Jobs Page");
settextstyle(3,0,1);
line(0,440,635,440);
outtextxy(10,440,"Co-founded by");
outtextxy(150,440,"-Kushagra");
outtextxy(290,440,"-Pawan Ammanamanchi");
outtextxy(500,440,"-Shashank");
settextstyle(2,0,0);
outtextxy(250,460,"Copyright Inc.");
circle(140,250,120);
circle(140,250,60);
settextstyle(1,0,1);
outtextxy(120,225,"Top");
outtextxy(100,245,"Companies");
circle(55,225,29);
settextstyle(0,0,1);
outtextxy(38,225,"Apple");
circle(57,284,29);
circle(95,328,29);
circle(152,340,29);
circle(205,312,29);
circle(229,259,29);
circle(215,201,29);
circle(168,166,29);
circle(109,166,29);
line(60,160,92,215);
line(61,161,93,215);
line(62,162,94,215);
outtextxy(31,284,"Siemens");
outtextxy(74,328,"T.C.S");
outtextxy(125,340,"Infosys");
outtextxy(179,311,"Goldman");
outtextxy(180,319,"Sachs");
outtextxy(202,259,"Cummins");
outtextxy(190,201,"I.B.M");
outtextxy(146,166,"H.C.L");
outtextxy(86,166,"Wipro");
settextstyle(6,0,3);
outtextxy(350,90,"About us:-");
line(350,118,450,118);
settextstyle(4,0,1);
outtextxy(463,95,"Created for ");
outtextxy(350,115,"offering jobs and using technology");
outtextxy(350,135,"to do it .The jobs page,");
outtextxy(350,155,"Connecting people and Companies ");
outtextxy(350,175,"as well as making jobs all over ");
outtextxy(350,195,"the world . ");
settextstyle(0,0,1);
outtextxy(350,285,"C o n t a c t u s");
outtextxy(350,300,"o");
outtextxy(350,315,"n");
outtextxy(350,330,"t");
outtextxy(350,345,"a");
outtextxy(350,360,"c");
outtextxy(350,375,"t");
outtextxy(350,390,"u");
outtextxy(350,405,"s");
settextstyle(5,0,1);
outtextxy(370,290,"Office :- 101 Ultimatrix ");
outtextxy(370,310,"Cyberabad , Hyderabad.");
outtextxy(370,330,"-550002.");
outtextxy(370,350,"Ph.no:-9801234511");
outtextxy(370,370,"Fax:-040675431");
line(0,40,45,5);
line(635,40,590,5);
line(0,50,45,80);
line(635,50,590,80);
getch();
closegraph();


int qu,amat,exp1;
class uid
{private:
int age;
char name[50];
char add[100];
char amat[50];
char exjob[50];
char qua[50];
int exp;
float salary;
char csi[50];
public:
static int id;
uid()
{age=0;
exp=0;
salary=0;
strcpy(name,"---");
strcpy(add,"---");
strcpy(exjob,"---");
strcpy(qua,"---");
strcpy(csi,"---");
strcpy(amat,"---");
}
void dd();
void rd();
}u1,u2;
void uid::dd()
{cout<<"Age:-"<<age<<endl;
cout<<"Name:-"<<name<<endl;
cout<<"Address:-"<<add<<endl;
cout<<"Almamater:-"<<amat<<endl;
cout<<"Other Colleges Studied in:-"<<csi<<endl;
cout<<"Qualifications:-"<<qua<<endl;
cout<<"Ex-Job:-"<<exjob<<endl;
cout<<"Salary:-"<<salary<<endl;
cout<<"Experience:-"<<exp<<endl;}

void alma()
{fstream f1;
f1.open("Univ.txt",ios::out|ios::binary);


void uid::rd()
{char ch,ch1;
char univ[20][50]={"1.Harvard","2.Mit","3.Cambridge","4.Oxford","5.Iit Mumbai","6.Nit","7.Bits","8.Yale","9.Iiit","10.Caltech","11.Cornell","12.Iit Delhi","13.Iisc Bangalore","14.Iim Indore","15.Stanford","16.Ucla","17.Other"};
char qual[10][100]={"1.B.sc in Chem/phy/bio ","2.Mechanincal Engineering","3. Electronical Engineering","4.Eng. in C.s","5. Aeronautical Engineering ","6.Bachelor in Economics","7.B.B.A","8.Chatered Accountant","9. 5-year integrated course in Eng/Science","10. 5-year integrated in Economics/Fin","11.Others"};
cout<<"Enter Your Age:";
cin>>age;
cout<<"\nEnter your Name:";
gets(name);
cout<<"\nEnter your Address";
gets(add);
cout<<"Enter your almamater"<<endl;
for(int i=0;i<20;i++)
{cout<<univ[i]<<endl;}
cin>>::amat;
char x[50];
int g,h,e;
for(g=0,h=2;g<50;g++,h++)
{x[g]=univ[::amat-1][h];}
x[g-1]='/0';
strcpy(amat,x);

cout<<"Enter your qualifications"<<endl;
for(i=0;i<11;i++)
{cout<<qual[i]<<endl;}
cin>>::qu;
char z[50];
for(g=0,h=2;g<50;g++,h++)
{z[g]=qual[::qu-1][h];}
z[g-1]='/0';
strcpy(qua,z);

cout<<"Enter your experience in years"<<endl;
cin>>exp;
cout<<"have you worked in any organisation before "<<endl;
cout<<"{Y/N}"<<endl;
cin>>ch;
if((ch=='y') || (ch=='Y'))
{cout<<"Enter your job post "<<endl;
gets(exjob);
cout<<"Enter your current salary"<<endl;
cin>>salary;
::exp1=exp;}
cout<<"Have you studied in any college other than your almamater"<<endl;
cout<<"{Y/N}"<<endl;
cin>>ch1;
if((ch1=='y') || (ch1=='Y'))
{cout<<"Enter the college's name "<<endl;
gets(u.csi);
int uid::id=100;}
}
int l=0;
void Enter()
{fstream f1;
f1.open("Site.Dat",ios::out|ios::binary);
cout<<"Enter the Number of Records"<<endl;
int y;
cin>>y;
for(i=0;i<y;i++)
{u1.rd();
f1.write((char*)&u1,sizeof(u1));
l++;
}
ofstream fwrite("id.txt");
fwrite<<l;
fwrite.close();
f1.close();}
void idr()
{ifstream fread("id.txt");
fread>>l;
fread.close();
for(int i=0;i<l;i++)
{u2.id++;}
}

void read()
{fstream f2;
f2.open("Site.Dat",ios::in|ios::binary);
cout<<"The Existing Records :"<<endl;
while(f2.read((char*)&u1,sizeof(u1)))
{u1.dd();}
f2.close();}

void delete(int e)
{fstream f3;
f3.open("Site.Dat",ios::in|ios::binary);
fstream f4;
int f;
f4.open("Temp.Dat",ios::out|ios::binary);
while(f3.read((char*)&u1,sizeof(u1)))
{if(u1.id==e)
{f=1;
u1.dd();}
else
f5.write((char*)&u1,sizeof(u1));}
f4.close();
f5.close();
remove("Site.Dat");
rename("Temp.Dat","Site.Dat");
if(found==1)
cout<<"Record Deleted"<<endl;
else
cout<<"Record not found"<<endl;}







