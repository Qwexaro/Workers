#include "Worker.h"

void displayMenu()
{
    std::cout << "1 - Print workers" << std::endl << "2 - Edit worker" << std::endl << "3 - Add worker"
    << std::endl << "4 - Delete worker" << std::endl << "0 - Exit" << std::endl << "~# ";
}

void displayEditMenu()
{
    system("cls");
    std::cout << "\n1 - Edit name" << std::endl << "2 - Edit floor" << std::endl
        << "3 - Edit age" << std::endl << "4 - Edit post" << std::endl
        << "5 - Edit departament" << std::endl << "0 - Exit" << std::endl 
        << "~# ";
}

void exit()
{
    system("cls"); std::cout << "GoodBye!" << std::endl;
}

void errorMessage()
{
    system("cls"); std::cout << "Command is not define !" << std::endl;
}

void runMenu(std::vector<Worker>& workers, int& id)
{
    int choice = 0;
    do
    {
        displayMenu();
        std::cin >> choice;
        switch (choice)
        {
            case 1: printWorkers(workers); break;
            case 2: editWorker(workers); break;
            case 3: addWorker(workers, id); break;
            case 4: deleteWorker(workers); break;
            case 0: exit(); break;
            default: errorMessage(); break;
        }
    } 
    while (choice != 0);
}