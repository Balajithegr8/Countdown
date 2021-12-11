#include <stdio.h>
#include <windows.h> //Including windows header file is very important to use sleep and clear commands

int coundown(){
	int k;
	printf("Enter the countdown time in seconds :");
	scanf("%d",&k);
	while(k--){
		printf("You have %d seconds left\n",k);
		Sleep(995);
		system ("cls");
	}
	int j=5;
	while(j--){
		printf("BEEP ");
		Beep(10000000, 450);
		
	}

}

int main()
{
	coundown();
    return 0;
}