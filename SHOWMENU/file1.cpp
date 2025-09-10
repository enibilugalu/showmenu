#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void task1() {
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hi, " << name << "! In 10 years you will be " << age + 10 << " and you will already be a great programmer!" << endl;
}

void task5() {
    double monthlySaving;
    double total = 0;
    int months = 0;
    cout << "Enter your monthly saving amount: ";
    cin >> monthlySaving;
    while (total < 1000) {
        total += monthlySaving;
        months++;
    }
    cout << "It will take " << months << " months to save 1000." << endl;
}

void task3() {
    bool flag = true;
    while (flag) {
        cout << "1 left\n2 right\n3 straight ahead\n4 back\n5 ?\n";
        int ptr;
        cin >> ptr;
        switch (ptr) {
        case 1:
            cout << "Met a dragon (lose)" << endl;
            break;
        case 2:
            cout << "Found a treasure" << endl;
            break;
        case 3:
            cout << "Went to the river" << endl;
            break;
        case 4:
            cout << "Back to start" << endl;
            break;
        case 5:
            cout << "Defeated the dragon (win)" << endl;
            flag = false;
            break;
        default:
            cout << "Invalid option" << endl;
        }
    }
}

void task4() {
    string player;
    string options[3] = { "rock", "scissors", "paper" };
    srand(static_cast<unsigned int>(time(NULL)));
    cout << "Enter rock, paper or scissors: ";
    cin >> player;
    string computer = options[rand() % 3];
    cout << "Computer: " << computer << endl;

    if (player == computer) {
        cout << "Draw" << endl;
    }
    else if ((player == "rock" && computer == "scissors") ||
        (player == "scissors" && computer == "paper") ||
        (player == "paper" && computer == "rock")) {
        cout << "You win" << endl;
    }
    else {
        cout << "You lose" << endl;
    }
}

void task2_1() {
    int score;
    double total = 0;
    for (int i = 1; i <= 5; i++) {
        cout << "Enter points " << i << ": ";
        cin >> score;
        total += score;
    }
    double average = total / 5;
    cout << "Average: " << average << endl;
}

void task2_2() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    bool isAdult = age >= 18;
    if (isAdult) {
        cout << "You are an adult" << endl;
    }
    else {
        cout << "You are not an adult" << endl;
    }
}

void task2_3() {
    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;
    int code = static_cast<int>(symbol);
    cout << "Code of '" << symbol << "' in ASCII: " << code << endl;
}

void task6()
{
    int length;
    cout << "enter lenght: ";
    cin >> length;
    cout << "\nrailway\n";
    for (int i = 0; i < length; i++)
    {
        cout << "#";
    }
}

void task7()
{
    int number;
    cout << "Enter a value: ";
    cin >> number;

    int* ptr = &number;
    *ptr = *ptr + 10;

    cout << "Variable address: " << ptr << endl;
    cout << "Variable address: " << &number << endl;
    cout << "Variable value: " << *ptr << endl;
    

    cout << "New variable value: " << number << endl;
}

void task8()
{

}

void showMenu() {
    while (true) {
        cout << "\n=== MENU ===\n";
        cout << "1 - Variables\n";
        cout << "2 - Data types\n";
        cout << "3 - switch-case (mini game)\n";
        cout << "4 - if-else (rock/paper/scissors)\n";
        cout << "5 - while (savings)\n";
        cout << "6 - railway(for)\n";
        cout << "7 - adress(pointer)\n";
        cout << "8 - link\n";
        cout << "0 - Exit\n";
        cout << "Choose an option: ";

        int item;
        cin >> item;

        if (item == 0) break;

        switch (item) {
        case 1: task1(); break;
        case 2: task2_1(); task2_2(); task2_3(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
        case 8: task8(); break;
        default: cout << "Invalid choice!" << endl;
        }
    }
}

int main() {
    showMenu();
    return 0;
}
