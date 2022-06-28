/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//TIC TAC TOE GAME PROGRAM IN C++ LANGUAGE

#include <iostream>
#include <stdlib.h>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();

int main(){
	int player = 1, i ,choice;
	char mark; // X,O
	do {
		drawBoard();
		player = (player % 2) ? 1 : 2;
		cout<<"Player"<<player<<", enter the choice :";
		cin>>choice;
		mark = (player == 1) ? 'X' : 'O';
		if(choice == 1 && square[1] == '1')
			square[1] = mark;
		else if(choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			square[9] = mark;
			
			else {
			    cout<<"Invalid option !";
				player--;
			}
			i = checkWin();
			player++;	
		
	}while(i == -1);
	
	drawBoard();
	if(i==1){
	    cout<<"==>Player"<<--player<<" won";
	}
	else {
	    cout<<"==>Game Draw";
	}
		return 0;
}
int checkWin(){
	if(square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if(square[7] == square[8] && square[8] == square[9])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[3] == square[6] && square[6] == square[9])
		return 1;
	else if(square[1] == square[5] && square[5] == square[9])
		return 1;
	else if(square[3] == square[5] && square[5] == square[7])
		return 1;
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] !='4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else 
		return -1;	
}

void drawBoard(){
	cout<<endl<<endl<<"\t Tic Tac Toe"<<endl<<endl;
	cout<<"Player1 (X) - Player2 (O)"<<endl<<endl<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<square[1]<<"  |"<<"  "<<square[2]<<"  |"<<"  "<<square[3]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<square[4]<<"  |"<<"  "<<square[5]<<"  |"<<"  "<<square[6]<<"  "<<endl; 
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<square[7]<<"  |"<<"  "<<square[8]<<"  |"<<"  "<<square[9]<<"  "<<endl;
	cout<<"     |     |     "<<endl;	
}