#include <stdio.h>
int main()
{
    int date,mon,year,y=0;
    printf("\nWelcome to Date Calculator :)");
    printf("\nEnter Date : ");
    scanf("%d", &date);
    printf("\nEnter Month : ");
    scanf("%d", &mon);
    printf("\nEnter Year : ");
    scanf("%d", &year);
    printf("\nPresent Date : %d / %d / %d",date,mon,year);
    if (year>=0)
        {    
        if ((date>=1)&&(date<=31))
            {
            if (year%100==0)
                {
                if (year%400==0)
                    {
                    y++;
                    }
                else
                    {
                    y=0;
                    }
                }
            else 
                {
                if (year%4==0)
                    {
                    y++;
                    }
                else 
                    {
                    y=0;
                    }
                }
            switch (mon)
                {
                case 1: case 3: case 5: case 7: case 8: case 10:
                if (date==31)
                    {
                    date=1;
                    mon++;;
                    printf("\nNext Date is : %d / %d / %d",date,mon,year);
                    break;
                    }
                else   
                    {
                    date++;
                    printf("\nNext Date is : %d / %d / %d",date,mon,year);
                    break;
                    }
                case 4: case 6: case 9: case 11:
                if (date>= 31){
                    printf("\nThis Date isn't valid in this Month.\n");
                    break;
                }
                else if (date==30)
                    {
                    date=1;
                    mon++;
                    printf("\nNext Date is : %d / %d / %d",date,mon,year);
                    break;
                    }
                
                
                else
                    {
                    date++;
                    printf("\nNext Date is : %d / %d / %d",date,mon,year);
                    break;
                    }
                case 2:
                if (y==1)
                    {
                    if (date==29)
                        {
                        date=1;
                        mon++;
                        printf("\nNext Date is : %d / %d / %d",date,mon,year);
                        break;
                        }
                    else if(date>=30){
                    printf("\nThis date doesnt occur in Feburary month.\n");
                    break;
                }
                    else    
                        {
                        date++;
                        printf("\nNext Date is : %d / %d / %d",date,mon,year);
                        break;
                        }
                    }
                else if (y==0)
                    {
                    if (date==28)
                        {
                        date=1;
                        mon++;
                        printf("\nNext Date is : %d / %d / %d",date,mon,year);
                        break;
                        }
                    else if(date>=29){
                    printf("\nThis date doesnt occur in Feburary month.\n");
                    break;
                }
                    else
                        {
                        date++;
                        printf("\nNext Date is : %d / %d / %d",date,mon,year);
                        break;
                        }
                    }
                case 12 :
                if (date==31)
                    {
                    date=1;
                    mon=1;
                    year++;
                    printf("\nNext Date is : %d / %d / %d",date,mon,year);
                    break;
                    }
                else
                    {
                    date++;
                    printf("\nNext Date is : %d / %d / %d",date,mon,year);
                    break;
                    }
                default :
                printf("\nPlease pay attention, you are giving INVALID MONTH !!");
                }
            }
        else
            {
            printf("\nPlease pay attention, you are giving INVALID DATE !!");
            }
        }
    else
        {
        printf("\nSorry but this is only for ANNO DOMINI, not BEFORE CHRIST !!");
        }
    return 0;
}