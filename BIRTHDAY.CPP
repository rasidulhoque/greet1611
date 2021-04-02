#include<stdio.h>
#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
 int i,j;
 char h='\3';
 
 //strings of your need
 printf("hey its a greeting program");
 delay(1000);
 printf("\ngreet someone special");
 delay(1000);
 printf("\nand make him/her her laugh:)");

//heart of 4 letters
printf("\n");
printf("\n\n\n");
 for(i=0;i<=2;i++)
 {
  delay(1000);
  for(j=0;j<=17;j++){
  if(j>=3-i && j<=6+i || j>=12-i && j<=15+i)
  {
   printf("143");
  }
  else
  {
   printf("   ");
  }
  }
  printf("\n");
 }

 for(i=0;i<9;i++)
 {
 delay(1000);
  for(j=0;j<=17;j++)
  {
   if(j>=i+1 && j<=17-i)
   printf("143");

  else
  printf("   ");
 }
 printf("\n");
 }

//birthday name
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");

for(i=1;i<450;i++)
{
 cleardevice();
 settextstyle(1,0,5);
 moveto(250+i,200);
 setcolor(RED);
 outtext("HAPPY BIRTHDAY");

 moveto(250,200+i);
 setcolor(YELLOW);
 outtext("HAPPY BIRTHDAY");

 moveto(250-i,200);
 setcolor(BLUE);
 outtext("HAPPY BIRTHDAY");

 moveto(250,200-i);
 setcolor(WHITE);
 outtext("HAPPY BIRTHDAY");

 moveto(250,200);
 setcolor(GREEN);
 outtext("HAPPY BIRTHDAY");

}
 printf("\t\t  THAT'S ALL!! \t\t");
 getch();
 closegraph() ;
 return 0
}				