#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int cosno;
	char cosname[10];
	int noofunit,lastmonthunit,diff;
	float tax;
	float total,finaltotal;
	
	printf("\n Enter Consumer number : ");
	scanf("%d",&cosno);
	
	printf("\n Enter Consumer name : ");
	scanf("%s",&cosname);
	
	printf("\n Enter number of unit : ");
	scanf("%d",&noofunit);
	
	printf("\n Enter Previus Month Unit : ");
	scanf("%d",&lastmonthunit);
	
	
	
	//calculations..
	
	diff = noofunit - lastmonthunit;
	
	
	if(diff<=100) {
		total= diff*3.33;
		
	}
	
	else if(diff>100||diff<=300){
		total= (100*3.33)+((diff-100)*7.77);
		
	}
	else if(diff>300||diff<=500){
	    total= (100*3.33)+(200*7.77)+((diff-100)*11.11);
		
    }
    
    
    tax= total*0.06;
	finaltotal = total+tax;
	
	
	
	printf("\n------------------------------------------------------------------------------------------");
	printf("\n\t\tName\t\tConsumer no\t\tAddress");
	printf("\n\t\t%s\t\t%d\t\t\tPune",cosname,cosno);
	printf("\n------------------------------------------------------------------------------------------");
	printf("\n Current Month Unit\t\t : %d",noofunit);
	printf("\n Previous month unit\t\t : %d", lastmonthunit);
	printf("\n Total \t\t\t\t: %f",total);
	printf("\n Tax \t\t\t\t : %f", tax);
	printf("\n Final Total\t\t\t : %f",finaltotal);
	printf("\n--------------------------------THANK YOU-----------------------------------------------------");
	
	
	
	
	
	
	
	return 0;
}
