#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
     FILE *num , *output;
     num = fopen("startgame.txt", "r");
     output = fopen("endgame.txt","w");
     int  OriginalNumber = 0;
	 int  EnteredNumber = 0;
	 int  CountNumber =0;
     fscanf(num,"%d",&OriginalNumber);
     bool completed = false;
     fprintf(output,"entered number/n");
     do()
     {
         cin >> EnteredNumber;
         if (EnteredNumber > OriginalNumber) {
             fprintf(output,&EnteredNumber"/n");
			 cout <<"enter a lower number";
			 CountNumber++;
         } 
		 else if EnteredNumber < OriginalNumber) {
			fprintf(output,&EnteredNumber"/n");
			cout <<"enter a larger number";
			CountNumber++;
		}
		 else if (EnteredNumber == OriginalNumber){
			fprintf(output,&EnteredNumber"/n");
			cout <<"comleted";
			CountNumber++;
			completed = true;
		}
     }while(completed != true);
     fprintf(output,"total numbers entered:",&CountNumber);
     return 0;
}
