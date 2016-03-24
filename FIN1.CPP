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
int qu,amat;
int exp1;
struct uid
{int age ;
char name[50];
char add[100];
char amat[50];
char exjob[50];
char qua[50];
int exp;
float salary;
char csi[50];
};
void graph()
{
int gd=DETECT,gm,a,b,c,i;
initgraph(&gd,&gm,"E:\\SOFT\\TC\\BGI");
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

}

void menu();

void readdata(uid &u)
{char ch,ch1;
char univ[10][50]={"1.Harvard","2.Mit","3.Cambridge","4.Oxford","5.Iit","6.Nit","7.Bits","8.Yale","9.Iiit","10.Caltech"};
char qual[10][100]={"1.B.sc in Chem/phy/bio ","2.Mechanincal Engineering","3. Electronical Engineering","4.Eng. in C.s","5. Aeronautical Engineering ","6.Bachelor in Economics","7.B.B.A","8.Chatered Accountant","9. 5-year integrated course in Eng/Science","10. 5-year integrated in Economics/Fin"};
cout<<"Enter your age"<<endl;
cin>>u.age;
cout<<"Enter your name"<<endl;
gets(u.name);
cout<<"Enter your address"<<endl;
gets(u.add);
cout<<"Enter your almamater"<<endl;
for(int i=0;i<10;i++)
{cout<<univ[i]<<endl;}

cin>>::amat;
char x[50];
int g,h,e;
for(g=0,h=2;g<50;g++,h++)
{x[g]=univ[::amat-1][h];}
x[g-1]='/0';
strcpy(u.amat,x);
cout<<"Enter your qualifications"<<endl;
for(i=0;i<10;i++)
{cout<<qual[i]<<endl;}
cin>>::qu;
char z[50];
for(g=0,h=2;g<50;g++,h++)
{z[g]=qual[::qu-1][h];}
z[g-1]='/0';
strcpy(u.qua,z);
cout<<"Enter your experience in years"<<endl;
cin>>u.exp;
cout<<"have you worked in any organisation before "<<endl;
cout<<"{Y/N}"<<endl;
cin>>ch;
if((ch=='y') || (ch=='Y'))
{cout<<"Enter your job post "<<endl;
gets(u.exjob);
cout<<"Enter your current salary"<<endl;
cin>>u.salary;
::exp1=u.exp;}
else
{strcpy(u.exjob,"-----");
  u.salary=0;   }
cout<<"Have you studied in any college other than your almamater"<<endl;
cout<<"{Y/N}"<<endl;
cin>>ch1;
if((ch1=='y') || (ch1=='Y'))
{cout<<"Enter the college's name "<<endl;
gets(u.csi);}
else
{strcpy(u.csi,"----");}
}
void displaydata(uid u)
{
cout<<"Age : "<<u.age<<endl;
cout<<"Name : "<<u.name<<endl;
cout<<"Almamter : "<<u.amat<<endl;
cout<<"Existing Job : "<<u.exjob<<endl;
cout<<"Salary : "<<u.salary<<endl;
cout<<"Experience : "<<u.exp<<endl;
cout<<"Qualifications: "<<u.qua<<endl;
cout<<"Other colleges studied in: "<<u.csi<<endl;
} ;
void main()
{clrscr();
uid U;
graph();
clrscr();
readdata(U);
clrscr();
displaydata(U);
menu();
getch();}

void menu()
{int n;
x: cout<<"Enter the field you wish to have a job in -"<<endl;
cout<<"1.Educational sector";
cout<<"\n2.Financial sector";
cout<<"\n3.I.T sector";

cin>>n;
switch(n)
{case 1:
{int c;
cout<<"The post you wish to have "<<endl;
cout<<"1.Principal"<<endl;
cout<<"2.Lecturer"<<endl;
cout<<"3.Teacher"<<endl;
cin>>c;
switch(c)
{{
case 1:
{int ex;
char ch;
cout<<"Do you have a M.ed "<<endl<<"{Y/N}"<<endl;
cin>>ch;
if(((::qu==1) || (::qu==4) || (::qu==6)) && (::exp1>=12) && (((ch=='y') || (ch=='Y'))))
{cout<<"Job available at G.M.V.V"<<endl;
cout<<"Term of minimum 3 years "<<endl;
cout<<"For further details "<<endl<<"Contact :- 9567431234"<<endl; }
else
{cout<<"No job available , since you are low on one of the requirements" ;
goto y;};
break;
case 2:
{
char ch1;
cout<<"Do you have a Masters in any subject "<<endl;
cin>>ch1;
if(((::exp1>=5) && ((ch1=='y') || (ch1=='Y'))))
{cout<<"Job available at IIT "<<endl;
cout<<"Term of 5 years "<<endl;
cout<<"For further details "<<endl<<"Contact - 9998764312"<<endl;
}
else
{cout<<"No jobs available, since you are low on one of the requirements"<<endl;
goto y;};
break;
case 3:
{cout<<"Do you have a B.ed"<<endl;
int ch2;
cin>>ch2;
if((ch2=='y')|| (ch2=='Y'))
cout<<"Job available at Bhavans "<<endl<<"For further details "<<endl<<"Contact :9988776655"<<endl;
 };
 break;
y: default:
{char ch4;
cout<<"Do you wish to check for another job offering "<<endl;
cin>>ch4;
if((ch4=='y')||(ch4=='Y'))
goto x;
else
exit(0) ;};};};}}};
break;
case 2:
{int q;
cout<<"The Post you wish to have "<<endl;
cout<<"1.Executive Director"<<endl;
cout<<"2.Branch Manager "<<endl;
cout<<"3.Cluster Head"<<endl;
cin>>q;
switch(q)
{case 1:
{char chx;
cout<<"Do you have a mba"<<endl;
cin>>chx;
if((((chx=='y') || (chx=='Y')) && (::exp1>=10) || (((::amat>=1) && (::amat<=4)) && (::exp1>=4))))
{cout<<"Job Available at Goldman Sachs "<<endl;
cout<<"7-Digit salary / foreign transfer "<<endl;
cout<<"For further details"<<endl<<"Contact- 1102909875"<<endl;}
else
{cout<<"Jobs not available since you do not meet the requirement"<<endl;
goto z;};
break;
case 2:
{char chy;
cout<<"Do you have a Mba"<<endl;
cin>>chy;
if((((chy=='y') || (chy=='Y')) && (::exp1>=5) || (((::amat>=1) && (::amat<=4)) && (::exp1>=1))))
{cout<<"Job available at I.B.M"<<endl;
cout<<"5-digit salry / indian location"<<endl;
cout<<"For further details"<<endl<<"Contact-04023456712"<<endl;}
else
cout<<"Jobs not available since you do not meet requirement "<<endl;
goto z;};
break;
case 3:
{char chz;
cout<<"Do you have a Mba"<<endl;
cin>>chz;
if((((chz=='y') || (chz=='Y')) && (::exp1>=7) || (((::amat>=1) && (::amat<=4)) && (::exp1>=2))))
{cout<<"Job available at Infosys"<<endl;
cout<<"6 digit salary / foreign , indian placement available "<<endl;
cout<<"For further details"<<endl<<"Contact-12345671221"<<endl;}
else
{cout<<"No jobs available since you do not meet the requirements"<<endl;
goto z;};
break;
z: default:
{char ch5;
cout<<"Do you want to search for another job"<<endl;
cin>>ch5;
if((ch5=='y') || (ch5=='Y'))
goto x;
else
exit(0);}}}};
break;
case 3:
{cout<<"Enter the Job post you wish to have "<<endl;
cout<<"1.App software developer"<<endl;
cout<<"2.U.I developer "<<endl;
cout<<"3.Security developer"<<endl;
int v;
cin>>v;
switch(v)
{case 1:
{char ch7;
cout<<"Do you have a masters in computer science "<<endl;
cin>>ch7;
if((((ch7=='y') || (ch7=='Y')) && (::exp1>=5) || (((::amat>=1) && (::amat<=4)) && (::exp1>=2))))
{cout<<"Job available at Android(Google)"<<endl;
cout<<"6 digit salary / foreign placement"<<endl;
cout<<"For further details "<<endl<<"Contact -9090909090"<<endl;}
else
{cout<<"Job not available since you do not meet requirement"<<endl;
goto c;};
break;
case 2:
{char ch8;
cout<<"Do you have a masters in computer science "<<endl;
cin>>ch8;
if((((ch7=='y') || (ch7=='Y')) && (::exp1>=6) || (((::amat>=1) && (::amat<=4)) && (::exp1>=3))))
{cout<<"Job available at apple"<<endl;
cout<<"6-digit salary / silicon valley placement "<<endl;
cout<<"For further details "<<endl<<"Contact-8087868589"<<endl;}
else
{cout<<"Job not available since you do not meet requirements"<<endl;
goto c;};
break;
case 3:
{char ch9;
cout<<"Do you have a masters in computer science "<<endl;
cin>>ch8;
if((((ch7=='y') || (ch7=='Y')) && (::exp1>=3) || (((::amat>=1) && (::amat<=4)) && (::exp1>=1))))
{cout<<"Job available at facebook"<<endl;
cout<<"5 digit salary/indian placement"<<endl;
cout<<"For further details"<<endl<<"Contact-9876543210"<<endl;}
else
{cout<<"Job not available since you do not meet requirements"<<endl;
goto c;};
break;
c: default:
{char ch6;
cout<<"Do you want to search for another job"<<endl;
cin>>ch6;
if((ch6=='y') || (ch6=='Y'))
goto x;
else
exit(0); };};};};}}







}};}






