// Мой шаблон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

#include "Functions.h"
#include "Food category.h"
#include "Sport category.h"

using namespace std;

enum GameActions
{
	CHECK_RULES = 1,
};

enum WordCategories
{
	FOOD_CATEGORY = 1,
	SPORT_CATEGORY = 2,
	RANDOM_CATEGORY = 3
};

int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\t\t\t\t\t\t Игра Виселица" << endl;

	int gameAction = atoi(enterAction().c_str());

	if (gameAction == CHECK_RULES)
	{
		showGameRules();
		system("pause");
		system("cls");
	}

	short wordCategory = atoi(enterCategory().c_str());

	if (wordCategory == RANDOM_CATEGORY)
	{
		wordCategory = chooseRandomCategory();
	}
	if (wordCategory == FOOD_CATEGORY)
	{
		foodCategory::startLevel();
	}
	else if (wordCategory == SPORT_CATEGORY)
	{
		sportCategory::startLevel();
	}


	system("pause");
	return 0;
}
