#include "Worker.h"

int main() 
{
    system("chcp 1251");
    
    int id = 0;
    
    std::vector<Worker> workers;
    for (int i = 0; i < 3; i++)
    {
        workers.push_back(Worker(i));
        id++;
    }
    runMenu(workers, id);

    return 0;
}