#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <iostream>
#include <vector>

struct Task{
      std::string description;
      bool completed;
};

class TaskManager{
private:
      std::vector<Task> tasks;
public:
      void addTask(const std::string &desc);
      void showTasks() const;
      void completeTask(size_t index);
};

#endif

