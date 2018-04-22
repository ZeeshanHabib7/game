#include<iostream>
using namespace std;

int main(){
	int i,j,k,l[3];
	int guess;
	int num[]={1,2,3};
	char choice;
	int flag=0;
do{

cout<<"\n\t\tWELCOME TO THE BAGEL GAME\n";
cout<<"  \t\t===========================";
do{

cout<<"\n\nPls Guess 3 digit number (only non zero digit are accepted )"<<endl;
cin>>guess;
	if(guess==0){
	cout<<"Please Donot press the zero (0) button\n";
	}

	else{
		l[2]=guess%10;
		i=guess/10;
		l[1]=i%10;
		j=i/10;
		l[0]=j%10;
		k=j/10;

for(int i=0;i<1;i++){
	if(num[i]==l[i])
			{
				if(num[i+1]==l[i+1]){
					if(num[i+2]==l[i+2]){
						cout<<"Congratulations!!! You Won "<<endl;
					}
				}
			}
			
	if(num[i+1]==l[i+1] && num[i] != l[i] || num[i+2] != l[i+2]){
		cout<<"Fermi ";
	}
	if(num[i+2]==l[i+2] && num[i] != l[i] || num[i+1] != l[i+1]){
		cout<<"Fermi ";
	}
	
	if(num[i+0]==l[i+0] && num[i+1] != l[i+1] || num[i+2] != l[i+2]){
		cout<<"Fermi ";
	}
	
	if(num[i]==l[i+2]||num[i+2]==l[i]||num[i+1]==l[i+2]||num[i+2]==l[i+1]||num[i]==l[i+1]||num[i+1]==l[i]){
		cout<<"Pico ";
	}
	
if (num[i] != l[i] && num[i] != l[i + 1] && num[i] != l[i + 2])
				{
					if (num[i + 1] != l[i + 1] &&num[i + 1] != l[i] && num[i + 1] != l[i + 2])
					{
						if (num[i + 2] != l[i + 2] && num[i + 2] != l[i] && num[i + 2] != l[i + 1]){

							cout << "Bagel ";
						}
					}
				}
			}		
} flag=flag+1;
}while(flag!=3);
cout<<"\nSorry!! U Lose"<<endl;
cout<<"\n\nIf U Want To Play Again Press y Else Press n"<<endl;
cin>>choice;
}while(choice=='y'|| choice=='Y');
	return 0;
}

