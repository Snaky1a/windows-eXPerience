#include <iostream>

void mainMenu();

void tweaksCollection();

void softwareCollection();

int main()
{
	mainMenu();
	return 0;
}

void mainMenu()
{
	int choice = 0;
	do
	{
		std::cout << "Windows eXPerience - Main menu\n"
				  << "Choose an option:\n"
				  << "1. Windows XP Tweaks collection\n"
				  << "2. Latest version of software running on Windows XP\n"
				  << "3. Exit" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			tweaksCollection();
			break;
		case 2:
			softwareCollection();
			break;
		case 3:
			std::cout << "Exiting program." << std::endl;
			std::system("pause");
			return;
		default:
			std::cout << "Invalid choice. Please try again." << std::endl;
			std::system("pause");
			std::system("cls");
			break;
		}
	} while (choice != 3);
}

void tweaksCollection()
{
	std::cout << "Windows eXPerience - Tweaks collection" << std::endl;
	// TODO: Add tweaks collection menu
	std::system("pause");
}

void softwareCollection()
{
	std::cout << "Windows eXPerience - Software collection" << std::endl;
	// TODO: Add software collection menu
	std::system("pause");
}