#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

class Task
{
public:
    string description;
    bool completed;

    Task(const string &desc) : description(desc), completed(false) {}
};

class ToDoList
{
private:
    vector<Task> tasks;

    void clearInputBuffer()
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

public:
    void addTask()
    {
        string description;
        cout << "Enter task description: ";
        getline(cin, description);
        tasks.emplace_back(description);
        cout << "Task added successfully.\n";
    }

    void viewTasks()
    {
        if (tasks.empty())
        {
            cout << "No tasks in the list.\n";
            return;
        }

        cout << "Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i)
        {
            cout << i + 1 << ". [" << (tasks[i].completed ? "X" : " ") << "] "
                 << tasks[i].description << "\n";
        }
    }

    void markTaskCompleted()
    {
        viewTasks();
        if (tasks.empty())
            return;

        size_t index;
        cout << "Enter the number of the task to mark as completed: ";
        cin >> index;

        if (cin.fail() || index < 1 || index > tasks.size())
        {
            cout << "Invalid task number.\n";
            return;
        }

        tasks[index - 1].completed = true;
        cout << "Task marked as completed.\n";
    }

    void removeTask()
    {
        viewTasks();
        if (tasks.empty())
            return;

        size_t index;
        cout << "Enter the number of the task to remove: ";
        cin >> index;

        if (cin.fail() || index < 1 || index > tasks.size())
        {
            cout << "Invalid task number.\n";
            return;
        }

        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully.\n";
    }

    void run()
    {
        while (true)
        {
            cout << "\n--- To-Do List Menu ---\n";
            cout << "1. Add Task\n";
            cout << "2. View Tasks\n";
            cout << "3. Mark Task as Completed\n";
            cout << "4. Remove Task\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";

            int choice;
            cin >> choice;

            if (cin.fail())
            {
                cout << "Invalid input. Please enter a number.\n";
                continue;
            }

            switch (choice)
            {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting program. Goodbye!\n";
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }
};

int main()
{
    ToDoList todoList;
    todoList.run();
    return 0;
}