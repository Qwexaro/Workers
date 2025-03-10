#include "Worker.h"

void printWorkers(std::vector<Worker>& workers)
{
    system("cls");
    for (int i = 0; i < workers.size(); i++) workers.at(i).printInfo();
    std::cout << std::endl;
}

void editName(std::vector<Worker>& workers, int id)
{
    std::cin.ignore();
    std::string name;
    std::cout << "Enter new full name: "; std::getline(std::cin, name);
    workers.at(id).setName(name);
}

void editFloor(std::vector<Worker>& workers, int id)
{
    std::string floor;
    std::cout << "Enter new floor: "; std::cin >> floor;
    workers.at(id).setFloor(floor);
}

void editAge(std::vector<Worker>& workers, int id)
{
    int age = 0;
    std::cout << "Enter new age: "; std::cin >> age;
    workers.at(id).setAge(age);
}

void editPost(std::vector<Worker>& workers, int id)
{
    std::string post;
    std::cout << "Enter new post: "; std::cin >> post;
    workers.at(id).setPost(post);
}

void editDepartament(std::vector<Worker>& workers, int id)
{
    std::string departament;
    std::cout << "Enter new departament: "; std::cin >> departament;
    workers.at(id).setDepartament(departament);
}

void editWorker(std::vector<Worker>& workers)
{
    system("cls");
    std::cout << "available ids for operation: ";

    for (int i = 0; i < workers.size(); i++) std::cout << workers.at(i).getId() << " ";

    int selected_id = 0; int choice = 0;
    std::cout << "\nEnter id of worker for edit: "; std::cin >> selected_id;
    system("cls");
    
    displayEditMenu();

    std::cin >> choice;
    for (int i = 0; i < workers.size(); i++)
    {
        if (workers.at(i).getId() == selected_id) 
        {
            switch (choice)
            {
                case 1: editName(workers, i); break;
                case 2: editFloor(workers, i); break;
                case 3: editAge(workers, i); break;
                case 4: editPost(workers, i); break;
                case 5: editDepartament(workers, i); break;
                case 0: break;
                default: errorMessage(); break;
            }
        }
    }

    system("cls");

}

void addWorker(std::vector<Worker>& workers, int& id)
{
    system("cls");
    std::string name, floor, post, departament;
    int age = 0;

    std::cin.ignore();
    std::cout << "Enter name: \n"; std::getline(std::cin, name);
    std::cout << "Enter age: \n"; std::cin >> age;
    std::cout << "Enter floor: \n"; std::cin >> floor;
    std::cout << "Enter post: \n"; std::cin >> post;
    std::cout << "Enter departament: \n"; std::cin >> departament;
    
    workers.push_back(Worker(id, name, floor, age, post, departament));

    id++;
}


void deleteWorker(std::vector<Worker>& workers)
{
    system("cls");

    int delete_id = 0;

    std::cout << "available ids for operation: ";

    for (int i = 0; i < workers.size(); i++) std::cout << workers.at(i).getId() << " ";
    
    std::cout << "\nEnter id of worker for delete: "; std::cin >> delete_id;

    for (int i = 0; i < workers.size(); i++)
    {
        if (workers.at(i).getId() == delete_id) 
        {
            workers.erase(workers.begin() + i);
            std::cout << "\nObject delete succefule!" << std::endl;
            break;
        }
    }
    std::cout << std::endl;
}