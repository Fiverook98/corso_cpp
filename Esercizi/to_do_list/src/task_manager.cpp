#include "task_manager.hpp"

void TaskManager::addTask(const std::string& desc){
      tasks.push_back({desc, false});
      std::cout << "Attività aggiunta!\n";
}

void TaskManager::showTasks() const{
      std::cout << "\nLista delle attività:\n";
      for(auto& task : tasks){
            int count = 1;
            std::cout << count << ". " << task.description;
            std::cout << (task.completed ? " [Completata!]\n" : "[Da fare!]\n");
            count++;
      }
}

void TaskManager::completeTask(size_t index){
      if(index > 0 && index <= tasks.size()){
            tasks[index - 1].completed = true;
            std::cout << "Attività completata!\n";
      } else {
            std::cout << "Indice non valido!\n";
      }
}