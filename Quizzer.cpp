//Quizzer
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Seed the random number generator
	srand(time(0));
	
	//Welcome
	cout << "QUIZZER!\n\n";

	//Operations Menu
	cout << "Pick an operation:\n";
	cout << "1. Addition\n";
	cout << "2. Multiplication\n";
    cout << "3. Subtraction\n";
	
	//Choosing an operation
	string operation;
	cin >> operation;

	//Operation data validation -- loop while data is NOT good
	while( ! (operation == "1" || operation == "2" || operation == "3") )
	{
		cout << "Choose 1 or 2 or 3.\n";
		cin >> operation;
	}

	//Difficulty level menu
	cout << "\nPick a difficulty level:\n";
	cout << "1. Easy\n";
	cout << "2. Medium\n";
	cout << "3. Hard\n";
    cout << "4. Super Hard\n";

	//Choosing a difficulty level
	string difficulty;
	cin >> difficulty;

	//Common Variables
	int a, b;			//two numbers used for each problem
	int score = 0;		//number correct
	int user_answer;

	//We'll give the users numbers based on the difficulty level.
	int low;		//problems will use numbers as low as this
	if(difficulty == "1")
    {
        cout << "You picked Easy." << endl;
		low = 2;
    }
	else if(difficulty == "2")
    {   
        cout << "You picked Meduim." << endl;
		low = 4;
    }
	else if (difficulty == "3")
    {
        cout << "You picked Hard!" << endl;
		low = 6;
    }
    else
        cout << "You picked Super Hard!" << endl;
        low = 8;

	if(operation == "1")	//addition
	{
		for(int problem = 0; problem < 10; problem++)
		{
			//Generate numbers for the problem
			a = rand() % 5 + low;
			b = rand() % 5 + low;

			//Obtain answer from user
            int user_Attempt = 0;
            while(user_Attempt < 2)
            {
			 cout << a << " + " << b << " = ";
			 cin >> user_answer;
            

			 //Process user's answer
			 if(user_answer == a + b)
			 {
				score++;
				cout << "Correct!\n";
                break;
			 }
             
             user_Attempt++;
			 
            }
           if(user_answer != a + b)
           {
             cout << "Sorry, the right answer is " << a + b << "." << endl;
           }
			
			 
		}

		//Feedback when done with 10 problems
		cout << "Your score is " << score << "." << endl;
	}
	else if (operation == "2")		//operation "2" is multiplication
	{
		for(int problem = 0; problem < 10; problem++)
		{
			//Generate numbers for the problem
			a = rand() % 5 + low;
			b = rand() % 5 + low;

			//Obtain answer from user
			int user_Attempt = 0;
            while(user_Attempt < 2)
            {
			 cout << a << " * " << b << " = ";
			 cin >> user_answer;
            

			 //Process user's answer
			 if(user_answer == a * b)
			 {
				score++;
				cout << "Correct!\n";
                break;
			 }
             
             user_Attempt++;
			 
            }
           if(user_answer != a * b)
           {
             cout << "Sorry, the right answer is " << a * b << "." << endl;
           }
		}

		//Feedback when done with 10 problems
		cout << "Your score is " << score << "." << endl;
	}
    else
    {
        for(int problem = 0; problem < 10; problem++)
		{
			//Generate numbers for the problem
            
            a = rand() % 5 - low;
			b = rand() % 5 - low;
            
            while( a - b < 0)
            {
                a = rand() % 5 - low;
			    b = rand() % 5 - low;
            }

			//Obtain answer from user
			int user_Attempt = 0;
            while(user_Attempt < 2)
            {
			 cout << a << " - " << b << " = ";
			 cin >> user_answer;
            

			 //Process user's answer
			 if(user_answer == a - b)
			 {
				score++;
				cout << "Correct!\n";
                break;
			 }
             
             user_Attempt++;
			 
            }
           if(user_answer != a - b)
           {
             cout << "Sorry, the right answer is " << a - b << "." << endl;
           }
		}

		//Feedback when done with 10 problems
		cout << "Your score is " << score << "." << endl;
    }

    string User_input;
    cout << "Would you like to play again." << endl;
    cout << "Yes\n";
    cout << "No\n";
    cin >> User_input;
    
    if(User_input == "Yes" || User_input == "YES" || User_input == "yes")
    {
        main();
    }

	return 0;
}
