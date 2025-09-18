#include <iostream>
#include <vector>
#include <stack>

int main() {
    // Массив (вектор) имён городов
    std::vector<std::string> cities = {"Moscow", "Berlin", "Paris", "Tokyo", "New York"};
    
    // Стек целых чисел для хранения оценок
    std::stack<int> grades;
    
    // Заполняем стек оценками
    std::vector<int> gradeList = {5, 4, 3, 2, 1};
    for (const auto& grade : gradeList) {
        grades.push(grade);
        std::cout << "Добавлена оценка: " << grade << std::endl;
    }
    
    // Выводим массив городов
    std::cout << "\nСписок городов: ";
    for (const auto& city : cities) {
        std::cout << city << " ";
    }
    
    // Работа со стеком оценок
    std::cout << "\n\nТекущая оценка на вершине стека: " << grades.top();
    grades.pop();
    std::cout << "\nКоличество оставшихся оценок: " << grades.size() << std::endl;
    
    return 0;
}
