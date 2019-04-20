#include <iostream>
#include <string>

//function decleration
void PrintIntro();
void PlayGame();
std::string GetGuess();
void RepeatGuess(std::string Guess);
bool AskToPlayAgain();

int main()
{
	//loop to replay game
	do
	{
		PrintIntro();
		PlayGame();
	} while (AskToPlayAgain() == true);
	
	return 0; // exit program
} // end main

void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;

	// introduce game
	std::cout << "Welcome to Bulls and Cows, a fun word game!\n";
	std::cout << "Can you guess the " << WORD_LENGTH <<
		" letter isogram I am thinking of?\n\n";
} // end func

std::string GetGuess()
{
	std::string Guess;

	// get guess from user
	std::cout << "What is your guess?\n";
	getline(std::cin, Guess);

	return Guess;
} // end func

void RepeatGuess(std::string Guess)
{
	// repeat guess from user
	std::cout << "Your guess is: " << Guess << std::endl <<std::endl;
} // end func

bool AskToPlayAgain()
{
	std::string Response = "";

	std::cout << "Would you like to play again? (y/n)\n";
	getline(std::cin, Response);
	std::cout << std::endl << std::endl;

	return (Response[0] == 'y' || Response[0] == 'Y');
}

void PlayGame()
{
	constexpr int GAME_CYCLE = 5;

	// loop for number of turns for guesses
	for (size_t i = 1; i <= GAME_CYCLE; i++)
	{
		RepeatGuess(GetGuess());
	} //end forloop
} //end func