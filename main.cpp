#include "functions.h"
#include <string>
#include <vector>
#include <iostream>

int main()
{
	//Quits when breaker is false
	std::cout << "<<<Parser>>>\n\n";
	
	//Acquire the attributes name
	std::string inputClassGlobal{classNameInput()};
	bool breaker{boolCheck(inputClassGlobal)};
	
	if (breaker == true)
	{
		//Variables declaration
		std::string character{}, inputForNames{}, inputForGrades{};
		int count{}, otherCount{}, totalColumn{};
		
		//Numbers of attributes "classes"
		totalColumn = numbersOfColumn(inputClassGlobal);
	
		std::vector<std::vector<std::string>> nameRow(totalColumn);
		std::vector<std::vector<std::string>> gradeRow(totalColumn);

		//Store the index of x value from each class
		int indexHighestValue[totalColumn];
		int indexLowestValue[totalColumn];
		int meanValue[totalColumn];

		//Main program - Iterate x times based on the totalColumn's value
		for (count = 0; count < totalColumn; count++)
		{
			if (breaker == true)
			{
				//Acquire names
				inputForNames = nameInput(classNameFunc(inputClassGlobal, count, totalColumn));
				breaker = boolCheck(inputForNames);	
			}
			else
			{
				return 0;
			}
			
			if (breaker == true)
			{
				//Acquire grades
				inputForGrades = gradeInput(classNameFunc(inputClassGlobal, count, totalColumn));
				breaker = boolCheck(inputForGrades);
			}
			else
			{
				return 0;
			}
			
			if (breaker == true)
			{
				//Parse the names and grades -> Store them into the reserve vectors
				parser(nameRow, inputForNames, count);
				parser(gradeRow, inputForGrades, count);	

				//Populate the arrays with index values of each
				indexHighestValue[count] = highestValue(gradeRow, count);
				indexLowestValue[count] = lowestValue(gradeRow, count);
				meanValue[count] = avrgValue(gradeRow, count);
			}
			else
			{
				return 0;
			}
		}
		//JUST FOR DEBUGGING PURPOSE
		if (breaker == true)
		{
			for (count = 0; count < nameRow.size(); count++)
			{
				for (otherCount = 0; otherCount < nameRow[count].size(); otherCount++)
				{
					std::cout << "\nValue of nameRow [" << count << "][" << otherCount << "]: " << nameRow[count][otherCount];
				}
			}
	
			for(count = 0; count < gradeRow.size(); count++)
			{
				for (otherCount = 0; otherCount < gradeRow[count].size(); otherCount++)
				{
					std::cout << "\nValue of gradeRow [" << count << "][" << otherCount << "]: " << gradeRow[count][otherCount];
				}
			}
			
			for (count = 0; count <= sizeof(indexHighestValue)/sizeof(indexHighestValue[0]) - 1; count++)
			{
				std::cout << "\nIndex(Highest Value) " << count << ": " << indexHighestValue[count]
 						  << "\nIndex(Lowest Value) " << count << ": " << indexLowestValue[count]
						  << "\nAverage Value " << count << ": " << meanValue[count];
			}				
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}