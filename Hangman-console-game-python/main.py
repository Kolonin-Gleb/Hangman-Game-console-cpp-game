import os

import functions
import level_functions as lvlfunc

os.system("cls")
print("\t\t\t\t\t\t Игра Виселица")

gameAction = functions.enterAction()

if(gameAction == "1"):
	functions.showGameRules()
	os.system("pause")
	os.system("cls")

level = functions.chooseLevel()
os.system("cls")

if level == "1":
	lvlfunc.startEasyLevel()
elif level == "2":
	lvlfunc.startMediumLevel()
else:
	lvlfunc.startHardLevel()




