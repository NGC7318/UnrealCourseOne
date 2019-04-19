#include <iostream>
#include <string>

//function decleration
void PrintIntro(int WordLength);
std::string GetGuess();
void RepeatGuess(std::string Guess);

int main()
{
	constexpr int GAME_CYCLE = 5;
	constexpr int WORD_LENGTH = 9;

	PrintIntro(WORD_LENGTH);

	// loop for number of turns for guesses
	for (size_t i = 1; i < GAME_CYCLE; i++)
	{
		RepeatGuess(GetGuess());
	}
	
	return 0;
} // end main

void PrintIntro(int WordLength)
{
	// introduce game
	std::cout << "Welcome to Bulls and Cows, a fun word game!" << std::endl;
	std::cout << "Can you guess the " << WordLength <<
		" letter isogram I am thinking of?" << std::endl << std::endl;
} // end PrintIntro

std::string GetGuess()
{
	std::string Guess;

	// get guess from user
	std::cout << "What is your guess?" << std::endl;
	getline(std::cin, Guess);

	return Guess;
} // end GetGuess

void RepeatGuess(std::string Guess)
{
	// repeat guess from user
	std::cout << "Your guess is: " << Guess << std::endl <<std::endl;
} // end RepeatGuess