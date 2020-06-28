#include "Functions.h"

string enterAction()
{
	string action = "";

	while (true)
	{
		cout << "Введите 1, чтобы ознакомится с правилами." << endl;
		cout << "Введите 2, чтобы выбрать категорию слов." << endl;
		cin >> action;
		if (action == "1" || action == "2")
		{
			return action;
		}
		else
		{
			cout << "Выбранное действие отсутствует!" << endl;
		}
	}
}

void showGameRules()
{
	cout << "\t\t Правила игры:" << endl;
	cout << "Компьютер загадывает вам слово из выбранной вами категории." << endl;
	cout << "Слово отображается, как ряд дефисов \"-\" " << endl;
	cout << "Ваша задача угадать, что это за слово вводя буквы," << endl;
	cout << "которые как вы предполагаете имеются в слове." << endl << endl;

	cout << "Если введенная вами буква есть в слове, то" << endl;
	cout << "все \"-\", загаданного слова где стоит" << endl;
	cout << "введенная вами буква заменяться на вашу букву."<< endl;
	cout << "У вас есть 8 попыток." << endl;
	cout << "Одна попытка отнимается, если введенная вами буква отсутствует в слове." << endl;
	cout << "Если попытки закончатся, то вы проиграли." << endl;
	cout << "Если вы отгадали все буквы слова, то вы победили." << endl << endl;
	cout << "Удачи и приятной игры!" << endl;
	cout << endl << endl;
}

string enterCategory()
{
	string action = "";

	while (true)
	{
		cout << "Введите 1, чтобы выбрать категорию Еда." << endl;
		cout << "Введите 2, чтобы выбрать категорию Спорт." << endl;
		cout << "Введите 3, чтобы выбрать случайную категорию." << endl;
		cin >> action;
		if (action == "1" || action == "2" || action == "3")
		{
			return action;
		}
		else
		{
			cout << "Выбранная категория отсутствует!" << endl;
		}
	}
}

short chooseRandomCategory()
{
	short randomCategory = rand() % (3 - 1) + 1; // от 1 до 2
	return randomCategory;
}

