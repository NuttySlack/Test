#include <iostream>
#include <string>
#include <sstream>
#include <istream>

using namespace std;

//Used for entering numbers into the calculator and prevents letters from being entered
void LongDoubleUserInput()
{

}
//Used for getting the users choice at the menu
void FuncMenuUserInput(int &UserInput)
{
	string Input = "";
	while (true)
	{
		//Gets the users input and puts it into input
		getline(cin, Input);
		//Creates mystream and links it to input
		stringstream mystream(Input);
		//Puts the value of input into userinput
		if (mystream >> UserInput)
			break;
		//If thats not the case then the string contains illegal characters
		cout << "Please enter numbers only";
	}
}
int main()

{
	//Stores the Value the user wants to use
	long double VarUserCalcInput = 0;
	//Stores the option the user has chosen
	int VarUserMenuChoice = 0;


	cout << "Please Choose from the menu";
	//Call on FuncMenuUserInput to get user input for the menu
	FuncMenuUserInput(VarUserMenuChoice);

//This is where content is added.
	//SOme more content added.
	


}