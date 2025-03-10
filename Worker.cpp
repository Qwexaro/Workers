#include "Worker.h"

Worker::Worker() :
	id{ -1 }, name{ "unknow" }, floor{ "unknow" }, age{ -1 }, post{ "unknow" }, departament{ "unknow" }{}

Worker::Worker(int _id) : 
	Worker() { id = _id; }

Worker::Worker(int _id, std::string _name) : 
	Worker(_id) { name = _name; }

Worker::Worker(int _id, std::string _name, std::string _floor) : 
	Worker(_id, _name) { floor = _floor; }

Worker::Worker(int _id, std::string _name, std::string _floor, int _age) : 
	Worker(_id, _name, _floor) { age = _age; }

Worker::Worker(int _id, std::string _name, std::string _floor, int _age, std::string _post) :
	Worker(_id, _name, _floor, _age) { post = _post;}

Worker::Worker(int _id, std::string _name, std::string _floor, int _age, std::string _post, std::string _departament) :
	Worker(_id, _name, _floor, _age, _post) { departament = _departament; }

int Worker::getId() { return id;}

std::string Worker::getName() { return name; }

std::string Worker::getFloor() { return floor; }

int Worker::getAge() { return age; }

std::string Worker::getPost() { return post; }

std::string Worker::getDepartament() { return departament; }

Worker& Worker::setName(std::string _name)
{
	name = _name; return *this;
}

Worker& Worker::setPost(std::string _post)
{
	post = _post; return *this;
}

Worker& Worker::setFloor(std::string _floor)
{
	floor = _floor; return *this;
}

Worker& Worker::setAge(int _age)
{
	if (_age > 0 && _age < 80) age = _age;
	return *this;
}

Worker& Worker::setDepartament(std::string _departament)
{
	departament = _departament; return *this;
}

void Worker::printInfo()
{
	std::cout << "\nId: " << id << ", name: " << name << ", floor: " << floor 
		<< ", age: " << age << ", post: " << post << ", departament: " << departament << std::endl;
}