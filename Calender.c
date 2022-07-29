#include <stdio.h>
int i,space=0;
void main()
{
    int m;
    for(m=1;m<=12;m++){
        month_display(m);
        printf("\n\tSat\tSun\tMon\tTue\tWed\tThu\tFri\n\n");
        dis_spa();
        if(m==2)dis_feb();
        else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)dis_31();
        else if(m==4||m==6||m==9||m==11)dis_30();
    }
}
void month_display(int m)
{
    if(m==1)printf("\nJanuary:\n");
    else if(m==2)printf("\nFebruary:\n");
    else if(m==3)printf("\nMarch:\n");
    else if(m==4)printf("\nApril:\n");
    else if(m==5)printf("\nMay:\n");
    else if(m==6)printf("\nJune:\n");
    else if(m==7)printf("\nJuly:\n");
    else if(m==8)printf("\nAugust:\n");
    else if(m==9)printf("\nSeptember:\n");
    else if(m==10)printf("\nOctober:\n");
    else if(m==11)printf("\nNovember:\n");
    else if(m==12)printf("\nDecember:\n");
}
dis_spa()
{
    for(i=1;i<space;i++){
        printf("\t ");
    }
 }
void dis_feb()
{
    for(i=1;i<=28;i++){
        printf("\t%d",i);
        if(space%7==0){
            printf("\n");
            space=0;
        }
    space++;
    }
}
void dis_30()
{
    for(i=1;i<=30;i++){
        printf("\t%d",i);
        if(space%7==0){
            printf("\n");
            space=0;
        }
        space++;
    }
}
void dis_31()
{
    for(i=1;i<=31;i++){
        printf("\t%d",i);
        if(space%7==0){
            printf("\n");
            space=0;
        }
        space++;
    }
}
