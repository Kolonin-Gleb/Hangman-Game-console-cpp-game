import random
import os

import start_game
import start_game_functions as s_g_f

def startEasyLevel():
	lives = 10
	ls = ["АДРЕС", "БОКАЛ", "ВЕСЛО", "ГОЛОД", "ЖЕТОН"] #5ти буквенные слова
	random.shuffle(ls)
	
	print("\t\tИгра началась!")

	if (s_g_f.startRound(ls, lives) == True):
		print("Вы прошли легкий уровень! Поздравляем!")
		

def startMediumLevel():
	lives = 8
	ls = ["БАБУШКА", "ЛЕГЕНДА", "МИНИСТР", "РАБОЧИЙ", "ЧАРОДЕЙ", "ЭКВАТОР"]  #7ми буквенные слова
	random.shuffle(ls)

	print("\t\tИгра началась!")

	if (s_g_f.startRound(ls, lives) == True):
		print("Вы прошли средний уровень! Поздравляем!")


def startHardLevel():
	lives = 5
	ls = ["АТМОСФЕРА", "ИСКУССТВО", "ОБУЧЕНИЕ", "УЛУЧШЕНИЕ", "ЭКОНОМИКА", "ЯЗЫЧЕСТВО"] #9ти буквенные слова
	random.shuffle(ls)

	print("\t\tИгра началась!")

	if (s_g_f.startRound(ls, lives) == True):
		print("Вы прошли средний уровень! Поздравляем!")
