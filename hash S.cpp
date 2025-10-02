#include <iostream>
#include <string>

using namespace std;

int main() {
    string animals[] = {"cat", "dog"};
    int counts[] = {5, 8};

    string target = "dog";
    bool found = false;

    for(int i = 0; i < 2; i++) {
        if(animals[i] == target) {
            cout << "Количество " << target << ": " << counts[i] << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Животное не найдено" << endl;
    }

    cout << "\nВсе животные:" << endl;
    for(int i = 0; i < 2; i++) {
        cout << "Животное: " << animals[i] << ", Количество: " << counts[i] << endl;
    }

    return 0;
}