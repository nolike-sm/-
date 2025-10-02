#include <iostream>
#include <string>

using namespace std;

public class Main {
    public static void main(String[] args) {
        String[] items = {"LAPTOP", "PHONE"};
        int[] prices = {1200, 800};

        for(int i = 0; i < items.length; i++) {
            if(items[i].equals("PHONE")) {
                System.out.println(prices[i]);  // вывод: 800
            }
        }
    }
}