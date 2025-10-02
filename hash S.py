# Два списка: для инструментов и их количества
tools = ["hammer", "screwdriver", "wrench"]
count = [3, 7, 2]

# Цель: найти количество нужного инструмента
goal = "screwdriver"

# Поиск через цикл
for i in range(len(tools)):
    if tools[i] == goal:
        print(f"Количество {tools[i]}: {count[i]}")

# Вывод всех инструментов
print("\nВсе инструменты:")
for i in range(len(tools)):
    print(f"Инструмент: {tools[i]}, Кол-во: {count[i]}")