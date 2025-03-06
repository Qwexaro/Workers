#include <iostream>
#include <vector>
#include <string>


class Worker 
{
	int id, age;
	std::string name, post, departament;
	char floor;
public:
	Worker() : id{ -1 }, age{ -1 }, name{"unknow"}, post{"unknow"}, departament{"unknow"}, floor{'N'}{}

	Worker(int _id) : Worker() { id = _id; }
	Worker(int _id, int _age) : Worker(_id) { age = _age; }
	Worker(int _id, int _age, std::string _name) : Worker(_id, _age) { name = _name; }
	Worker(int _id, int _age, std::string _name, std::string _post) : Worker(_id, _age, _name) { post = _post; }
	Worker(int _id, int _age, std::string _name, std::string _post, std::string _departament) : Worker(_id, _age, _name, _post) { departament = _departament; }
	Worker(int _id, int _age, std::string _name, std::string _post, std::string _departament, char _floor) : Worker(_id, _age, _name, _post, _departament) { floor = _floor; }
	Worker(int id, int age, std::string name, std::string post, std::string departament, char floor) : id{id}, age{age}, name{name}, post{post}, departament{departament}, floor{floor} { }

	void printInfo()
	{
		std::cout << "Id: " << id << ", age: " << age << ", name: " << name 
			<< ", post: " << post << ", departament: " << departament << ", floor: " << floor << std::endl;
	}
	Worker& setWorker(int _age, std::string _name, std::string _post, std::string _departament, char _floor)
	{
		if (_age > -1) Worker(id ,_age,  _name, _post,  _departament, _floor);
		return *this;
	}
};


void editWorker(std::vector<Worker>& worker)
{
	int index = 0;
	system("cls");
	std::cout << "Enter index for set worker: "; std::cin >> index;
	std::cout << "Enter age for set worker: "; std::cin >> index;
	std::cout << "Enter name for set worker: "; std::cin >> index;
	std::cout << "Enter post for set worker: "; std::cin >> index;
	std::cout << "Enter departament for set worker: "; std::cin >> index;
	std::cout << "Enter floor for set worker: "; std::cin >> index;
	
	for (int i = 0; i < worker.size(); i++)
	{
		if (i == index)
		{
			worker.at(i).setWorker();
		}
	}
}

void addWorker(std::vector<Worker>& worker)
{

}

void deleteWorker(std::vector<Worker>& worker)
{

}

void menu()
{
	std::cout << "1 - edit worker\n"
		<< "2 - add worker\n"
		<< "3 - delete worker\n"
		<< "4 - print info with workers"
		<< "0 - exit";
}

int main()
{

	std::vector<Worker>workers;
	int choice = 0;
	for (int i = 0; i < 3; i++)
	{
		workers.push_back(Worker(i, 19, "Sanya", "Zam", "cadrovi", 'M'));
	}
	do
	{
		system("cls");
		menu();
		switch (choice)
		{
			case 1: editWorker(workers); break;
			case 2: addWorker(workers); break;
			case 3: deleteWorker(workers); break;
			case 4: for (int i = 0; i < workers.size(); i++) workers.at(i).printInfo();
			case 0: std::cout << "GoodBye!" << std::endl;
			default: break;
		}

	} 
	while (choice != 0);
	return 0;
}