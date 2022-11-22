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
	 int  Count_Number =0;
	 char  newline;
     bool completed = false;
     fprintf(output,"entered number/n");
     while(completed == false) {
         cout<<"Entere Number";
     	 cin >> EnteredNumber;
     	 fscanf(num,"%d",&OriginalNumber);
         	if (EnteredNumber > OriginalNumber) {
                fprintf(output,"%d",EnteredNumber);
			    cout <<"enter a lower number";
			    Count_Number++;
         	} 
			if (EnteredNumber < OriginalNumber) {
			    fprintf(output,"%d",EnteredNumber);
		        cout <<"enter a larger number";
			    Count_Number++;
			}
			if (EnteredNumber == OriginalNumber){
			    fprintf(output,"%d",EnteredNumber);
			    cout <<"comleted";
			    Count_Number++;
			    completed = true;
			}
		}
     fprintf(output,"total numbers entered: %d", Count_Number);
     fclose(num);
     fclose(output);
     return 0;
}
