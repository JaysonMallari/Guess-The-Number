/*guessTheNumber.cpp
Jayson Mallari
My__Boo
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
	int randomNum;
	bool guessTheNumber(int);

int main()
{
	int myNum;
	srand(time(0));
	randomNum = rand()%100 + 1;
	cout<<"Guess the number from 1 to 100"<<endl;
	cin>>myNum;

	while(guessTheNumber(myNum)!= true){
		cout<<"please Try Again !!!"<<endl;
		cin>>myNum;
	}

	cout<<"You Guess It Right!!!"<<endl;
return 0;
}

	bool guessTheNumber(int num){

		if (num < randomNum){
			cout<<"Your guess is to low ."<<endl;
		}
		else if (num > randomNum){
			cout<<"Your guess is to high ."<<endl;
		}
		else{
			return true;
		}
	}
