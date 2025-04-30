#include "task_manager.hpp"

int main() {
      TaskManager manager;
      int choice;
      std::string desc;

      while(true){
            std::cout << "\n1. Aggiungi attività\n2. Mostra attività\n3. Completa attività\n4. Esci\nScegli: ";
            std::cin >> choice;
            std::cin.ignore();

            switch (choice){
                  case 1:
                        std::cout << "Descrizione attività: ";
                        std::getline(std::cin, desc);
                        manager.addTask(desc);
                        break;
                  case 2:
                        manager.showTasks();
                        break;
                  case 3:
                        size_t index;
                        std::cout << "Numero dell'attività da completare: ";
                        std::cin >> index;
                        manager.completeTask(index);
                        break;
                  case 4:
                        std::cout << "Arrivederci!\n";
                        return 0;
                  default:
                        std::cout << "Scelta non valida.\n";

            }
      }

      return 0;
}