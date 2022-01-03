#include "functions.h"
#include <string>
#include <iostream>

int main()
{
	std::cout << "<<<TUGAS AKHIR>>>\n"
			  << "oleh Athallah Naufal - 21525094\n\n";
	std::string inputClassGlobal{classNameInput()};
	bool breaker{boolCheck(inputClassGlobal)};
	std::string nameInput0{}, gradeInput0{}, nameInput1{}, gradeInput1{}, result{}, character{}, name[100], grade[100], name1[100], grade1[100];
	int i{}, j{}, count{}, namesArrayTrueSize{}, namesArrayTrueSize1{}, gradesArrayTrueSize{}, gradesArrayTrueSize1{};
	if (breaker == true)
	{
		nameInput0 = nameInput(classNameFunc(inputClassGlobal, 0));
		breaker = boolCheck(nameInput0);
		if (breaker == true)
		{
			gradeInput0 = gradeInput(classNameFunc(inputClassGlobal, 0));
			breaker = boolCheck(gradeInput0);
			if (breaker == true)
			{
				nameInput1 = nameInput(classNameFunc(inputClassGlobal, 1));
				breaker = boolCheck(nameInput1);
				if (breaker == true)
				{
					gradeInput1 = gradeInput(classNameFunc(inputClassGlobal, 1));
					breaker = boolCheck(gradeInput1);
					j = 0;
					i = 0;
					result = "";
					for (count = 0; count <= 1; count++)
					{
						if (count == 0)
						{
							parser(name, nameInput0, breaker);
							namesArrayTrueSize = arraySize(nameInput0, breaker);
							parser(grade, gradeInput0, breaker);
							gradesArrayTrueSize = arraySize(gradeInput0, breaker);
						}
						else
						{
							parser(name1, nameInput1, breaker);
							namesArrayTrueSize1 = arraySize(nameInput1, breaker);
							parser(grade1, gradeInput1 ,breaker);
							gradesArrayTrueSize1 = arraySize(gradeInput1, breaker);
						}
					}
					allResult(namesArrayTrueSize, namesArrayTrueSize1, gradesArrayTrueSize, gradesArrayTrueSize1, name, name1, grade, grade1, inputClassGlobal);
				}	
			}
		}
	}
	std::cout << "\nProgram has ended\n";
	return 0;
}