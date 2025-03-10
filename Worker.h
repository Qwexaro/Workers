#include <iostream>
#include <vector>
#include <string>

class Worker 
{
	int id, age;
	std::string name, floor, post, departament;
public:
	
	Worker();
	Worker(int _id);
	Worker(int _id, std::string _name);
	Worker(int _id, std::string _name, std::string _floor);
	Worker(int _id, std::string _name, std::string _floor, int _age);
	Worker(int _id, std::string _name, std::string _floor, int _age, std::string _post);
	Worker(int _id, std::string _name, std::string _floor, int _age, std::string _post, std::string _departament);
	
	int getId();
	std::string getName();
	std::string getFloor();
	int getAge();
	std::string getPost();
	std::string getDepartament();

	Worker& setName(std::string _name);
	Worker& setPost(std::string _post);
	Worker& setFloor(std::string _floor);
	Worker& setAge(int _age);
	Worker& setDepartament(std::string _departament);
	
	void printInfo();
};

void editWorker(std::vector<Worker>& workers);
void printWorkers(std::vector<Worker>& workers);
void addWorker(std::vector<Worker>& workers, int& id);
void deleteWorker(std::vector<Worker>& workers);

void errorMessage();
void displayEditMenu();
void runMenu(std::vector<Worker>& workers, int& id);