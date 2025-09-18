import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Массив (список) цветов
        List<String> colors = Arrays.asList("Red", "Green", "Blue", "Yellow", "Purple");
        
        // Стек для хранения команд
        Stack<String> commands = new Stack<>();
        
        // Добавление команд в стек
        commands.push("create");   // ["create"]
        commands.push("edit");     // ["create", "edit"]
        commands.push("delete");   // ["create", "edit", "delete"]
        
        // Удаление команды из стека
        String lastCommand = commands.peek();  // получаем последнюю команду
        commands.pop();                       // удаляем её из стека
        
        System.out.println("Последняя команда: " + lastCommand);
        System.out.println("Количество оставшихся команд: " + commands.size());
        System.out.println("Список цветов: " + colors);
    }
}
