# Создание массива
planets = ["Меркурий", "Венера", "Земля"]
print("Список планет:", planets)

# Создание стека
history = []
history.append("начало")
history.append("середина")
history.append("конец")

# Удаление элемента из стека
last_event = history.pop()  # Удаляет "конец"
print("Последнее событие:", last_event)
print("Оставшиеся события в истории:", history)
