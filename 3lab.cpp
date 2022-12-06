#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
     FILE *num , *output;
     output = fopen("endgame.txt","w");
     fprintf(output,"entered number/n");
     fclose(output);
     int  OriginalNumber = 0;
	 int  EnteredNumber = 0;
	 int  Count_Number =0;
	 char  newline;
     bool completed = false;
     while(completed == false) {
         cout<<"Entere Number";
     	 cin >> EnteredNumber;
     	 num = fopen("startgame.txt", "r");
     	 fscanf(num,"%d",&OriginalNumber);
         	if (EnteredNumber > OriginalNumber) {
         	    output = fopen("endgame.txt","w");
                fprintf(output,"%d",EnteredNumber);
                fclose(output);
			    cout <<"enter a lower number";
			    Count_Number++;
         	} 
			if (EnteredNumber < OriginalNumber) {
			    output = fopen("endgame.txt","w");
			    fprintf(output,"%d",EnteredNumber);
			    fclose(output);
		        cout <<"enter a larger number";
			    Count_Number++;
			}
			if (EnteredNumber == OriginalNumber){
			    output = fopen("endgame.txt","w");
			    fprintf(output,"%d",EnteredNumber);
			    fclose(output);
			    cout <<"comleted";
			    Count_Number++;
			    completed = true;
			}
		 fclose(num);
		}
	 output = fopen("endgame.txt","w");
     fprintf(output,"total numbers entered: %d", Count_Number);
     fclose(output);
     return 0;
}
