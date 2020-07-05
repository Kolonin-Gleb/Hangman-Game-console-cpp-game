#include "Food category.h"

namespace foodCategory
{
	void startLevel()
	{
		system("cls");


		vector<string>foodWords;
		foodWords.push_back("аспцеп");
		foodWords.push_back("ъхвмхжю");
		foodWords.push_back("нцспеж");
		foodWords.push_back("кхлнм");
		foodWords.push_back("йнркерю");

		random_shuffle(foodWords.begin(), foodWords.end());

		const string SECRET_WORD = foodWords[0];

		startGame(SECRET_WORD);
	}
};
