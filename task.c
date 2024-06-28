#include<stdio.h>
int main(){
	int choice;
	printf("enter your choice : ");
	scanf("%d",&choice);
	if(choice == 1){
		printf("you have enter pizza\n");
		int pizza=150,q,total;	
		printf("enter your quantity :\n");
		scanf("%d",&q);
		total= pizza * q;
		printf("total bill is : %d",total);
	}
	else if(choice==2){
		printf("you have enter burger\n");
		int burger=120,q,total;	
		printf("enter your quantity :\n");
		scanf("%d",&q);
		total= 120 * q;
		printf("total bill is : %d",total);
	}
	else if(choice==3){
		printf("you have enter dosa");
	}
	else if(choice==4){
		printf("you have enter idli");
	}
	
	

}

