//##Competition with computer and player
/*Rule:
	1.There are two items with random points from 10 to 100
	2.Every turn, player have to reduce at least one point from one item
	3.Each turn, one player can only reduce point from one item
	4.The player in whose turn points of two items both return to null is the winner
	5.Player can choose to go first or not.
	*/
/*Advancement:
	1.Replace entering all number to some word   how to scan&condition by a word
	2.better module one day
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//A stands for program, B for real man player

int main(void){
	//Define how many points for each item
	int Point1,Point2;
	srand(time(NULL));
	Point1=rand()%90+10;
	srand(time(NULL)+4.56); //change another seed of random func
	Point2=rand()%90+10;
	//Get two random value for two points
	printf("The points for item1:%d     item2:%d \n",Point1,Point2);
	
	//Decide who do first
	int Sequence;
	printf("Do before or after computer?\nPress 1 if you go first   Press 2 if you go after computer\n");
	printf("Your choice:\n");
	scanf("%d",&Sequence);
	
	int PointP; //Points that player reducing
	int PointC;//Points that computer reducing
	int N; //Decide which item is designated by player
	
	//reacting program
	if (Sequence==1){
		//Player do first
		while (Point1!=0||Point2!=0) {
			//Get the input value from player
			printf("\nEnter which item you are going to choose:");
			scanf("%d",&N);
			printf("\nEnter how much are you going to reduce:");
			scanf("%d",&PointP);
			//calculate player part
			if(N==1){
				//select item1
				Point1=Point1-PointP;
			} else if(N==2){
				//select item2
				Point2=Point2-PointP;
			}
			printf("\nPlayer turn: item1: %d      item2: %d",Point1,Point2);
			
			//To check if the player wins
			if (Point1==0&&Point2==0){
				printf("\nGood job, you win.\n");
			} else{       //reaction part
				if (Point1>Point2){
					//1 is larger item
					Point1=Point2;
					printf("\nComputer turn: item1: %d      item2: %d",Point1,Point2);
				} else if(Point1<Point2){
					//2 is larger item
					Point2=Point1;
					printf("\nComputer turn: item1: %d      item2: %d",Point1,Point2);
				} else if (Point1==Point2){
					//use the random number, try to mislead player
					//don't need to care to use which item
					srand(time(NULL)); //use later time
					int randN;  //a random number
					randN=rand()%Point1+1; //Range from 1 to Point1
					if (randN==Point1) {   //Make sure no mistake  low possibility
						Point1=(randN/2);
					} else{                 //common situation
						Point1=randN;
					}
					printf("\nComputer turn: item1: %d      item2: %d",Point1,Point2);
				}
			if (Point1==0&&Point2==0){
			printf("\nSee,my program wins~~\n");	
			}// reaction part ends 
			
		}
		}// while loop done
			
		} else if (Sequence==2){
		//Computer do first
		while(Point1!=0||Point2!=0){
			if (Point1>Point2){
					//1 is larger item
					Point1=Point2;
					printf("\nComputer turn: item1: %d      item2: %d",Point1,Point2);
				} else if(Point1<Point2){
					//2 is larger item
					Point2=Point1;
					printf("\nComputer turn: item1: %d      item2: %d",Point1,Point2);
				} else if (Point1==Point2){
					
					//use the random number, try to mislead player
					//don't need to care to use which item
					
					srand(time(NULL)); //use later time
					int randN;  //a random number
					randN=rand()%Point1+1; //Range from 1 to Point1
					if (randN==Point1) {   //Make sure no mistake  low possibility
						Point1=(randN/2);
					} else{                 //common situation
						Point1=randN;
					}
					printf("\nComputer turn: item1: %d      item2: %d",Point1,Point2);
		}    //computer turn ends
		
			if (Point1==0&&Point2==0){
			printf("\nSee,my program wins~~\n");
		} else{
			//Get the input value from player
			printf("\nEnter which item you are going to choose:");
			scanf("%d",&N);
			printf("\nEnter how much are you going to reduce:");
			scanf("%d",&PointP);
			//calculate player part
			if(N==1){
				//select item1
				Point1=Point1-PointP;
			} else if(N==2){
				//select item2
				Point2=Point2-PointP;
			}
			printf("\nPlayer turn: item1: %d      item2: %d",Point1,Point2);
			if (Point1==0&&Point2==0);
			printf("\nGood job, you win.\n");
		
		}
	}//while loop done
	}//else if ends
}