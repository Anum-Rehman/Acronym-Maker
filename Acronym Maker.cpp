#include<stdio.h>
#include<conio.h>
#define size 500

int is_alpha(char ch);
int is_full();
int is_empty();
int empty();
void enqueue(char value);
char dequeue();
int is_capital(char ch);
int is_small(char ch);
void long_form(char ch);

int rear=-1;
int front=-1;
char arr[size];
char sentence[size];
char word[size];

main(){
	char acronym[size];
	int i=0,j=0,k=0,choice;
	char token;
	printf("Enter your choice:\n1-Generate Long Form\t2-Generate Short Form\n");
	choice=getche();
	switch(choice){
		case '1':{
			printf("\n\nSimply enter your words and press enter to generate possible acronym. That's it!:\n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			gets(word);
			printf("\nGiven Input:\n%s",word);
	
			printf("\n\nLong Form:\n");
			printf("~~~~~~~~~~\n\n");
			int l; 	char letter;
			letter=word[l];
			while(letter !='\0'){
			long_form(letter);

			l++;
			letter=word[l];
	}
			break;
		}
		case '2':{
			printf("\n\nSimply enter your words and press enter to generate possible acronym. That's it!:\n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			gets(word);
			printf("\nGiven Input:\n%s",word);
			token=word[i];
			if(is_alpha(token)){
				if(is_small(token))
					token=token-32;
			enqueue(token);
		}
			else 
			sentence[k++]=token;
			i++;
			token=word[i];
			while(token !='\0'){
				if(token==' '){
				i++;
				token=word[i];
				if(is_alpha(token)){
				if(is_small(token))
				token=token-32;
				enqueue(token);
			}
				else
				sentence[k++]=token;
		}
			else if(is_capital(token)){
		 		enqueue(token);
		}
			else if(token=='-'){
				enqueue(token);
				i++;
				token=word[i];
				if(is_alpha(token)){
					if(is_small(token))
					token=token-32;
				enqueue(token);
			}
				else
				sentence[k++]=token;
		}
			else{
		 		sentence[k++]=token;
		}
				i++;
				token=word[i];
		}
		if(is_empty()){
			printf("\n\nSorry you must type alphabetic characters");
		}
		else{
		while(!empty()){
			acronym[j++]=dequeue();
		}
		printf("\n\nShort Form:\n");
		printf("~~~~~~~~~~~\n%s",acronym);
		printf("\n\n");
	}
			break;
		}
	}

}
	
	
int is_full(){
	if (rear==size-1)
		return 1;
		else
		return 0;		
}

int is_empty(){
	if(front==-1 && rear==-1)
		return 1;
	else
	return 0;
}

void enqueue(char value){
	if(is_full())
	printf("QUEUE UNDERFLOW\n");
	else
		if(front==-1)
		front=0;
		arr[++rear]=value;
}
char dequeue(){
if (is_empty())
printf("Queue is empty");

else{
	return(arr[front++]);	
}
}

int empty(){
	if(front>rear)
	return 1;
	else
	return 0;
	
}

int is_alpha(char ch){
		if(ch>='a' && ch <='z')
		return 1;
	
	if(ch>='A' && ch<='Z')
		return 1;
	
	
	else 
		return 0;
}

int is_capital(char ch){
	if(ch>='A' && ch<='Z')
	return 1;
	else 
	return 0;
}

int is_small(char ch){
	if(ch>='a' && ch<='z')
	return 1;
	else 
	return 0;
}

void long_form(char ch){
	if (ch=='A')
		printf("A: Amazing");
	else if (ch=='a')
		printf("\nA: Awesome");
	else if (ch=='B')
		printf("\nB: Best");
	else if (ch=='b')
		printf("\nB: Benefitial");
	else if (ch=='C')
		printf("\nC: Classic");
	else if (ch=='c')
		printf("\nC: Creative");
	else if (ch=='D')
		printf("\nD: Divine");
	else if (ch=='d')
		printf("\nD:Delight");
	else if (ch=='E')
		printf("\nE: Elegant");
	else if (ch=='e')
		printf("\nE: Efficient");
	else if (ch=='F')
		printf("\nF: Fabulous");
	else if (ch=='f')
		printf("\nF: Funny");
	else if (ch=='G')
		printf("\nG: Glamorous");
	else if (ch=='g')
		printf("\nG: Great");
	else if (ch=='H')
		printf("\nH: Hard");
	else if (ch=='h')
		printf("\nH: Honored");
	else if (ch=='I')
		printf("\nI: Imaginary");
	else if (ch=='i')
		printf("\nI: Ideal");
	else if (ch=='J')
		printf("\nJ: Jubilant");
	else if (ch=='j')
		printf("\nJ: Joy");
	else if (ch=='K')
		printf("\nK: Knowledgeable");
	else if (ch=='k')
		printf("\nK: Keen");
	else if (ch=='L')
		printf("\nL: Lovely");
	else if (ch=='l')
		printf("\nL: Lowered");
	else if (ch=='M')
		printf("\nM: Memorable");
	else if (ch=='m')
		printf("\nM: Motivating");
	else if (ch=='N')
		printf("\nN: Nutritious");
	else if (ch=='n')
		printf("\nN: Nice");
	else if (ch=='O')
		printf("\nO: Obidient");
	else if (ch=='o')
		printf("\nO: Open");
	else if (ch=='P')
		printf("\nP: Pretty");
	else if (ch=='p')
		printf("\nP: Perfect");
	else if (ch=='Q')
		printf("\nQ: Quiet");
	else if (ch=='q')
		printf("\nQ: Quick");
	else if (ch=='R')
		printf("\nR: Right");
	else if (ch=='r')
		printf("\nR: Reward");
	else if (ch=='S')
		printf("\nS: Soft");
	else if (ch=='s')
		printf("\nS: Successful");
	else if (ch=='T')
		printf("\nT: Thriling");
	else if (ch=='t')
		printf("\nT: Truthful");
	else if (ch=='U')
		printf("\nU: Upright");
	else if (ch=='u')
		printf("\nU: Upstanding");
	else if (ch=='V')
		printf("\nV: Violent");
	else if (ch=='v')
		printf("\nV: Victory");
	else if (ch=='W')
		printf("\nW: Wonderful");
	else if (ch=='w')
		printf("\nW: Well");
	else if (ch=='X')
		printf("\nX: Xeranthemum");
	else if (ch=='x')
		printf("\nX: Xerophilous");
	else if (ch=='Y')
		printf("\nY: Yes");
	else if (ch=='y')
		printf("\nY: Yummy");
	else if (ch=='Z')
		printf("\nZ: Zealous");
	else if (ch=='z')
		printf("\nZ: Zetetic");
	else if (ch==' ')
		printf("\n");
	else
			printf("\n%c:\tNot exist in the List",ch);
}
