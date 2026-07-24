#include <iostream>
#include <vector>

using namespace std;

class Employee
{
	string firstName;
	string lastName;
    public: int salary;

public:
	Employee(string firstName, string lastName, int salary)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->salary = salary;
	}

	void display()
	{
		cout << "first name: " << firstName << endl;
		cout << "last name: " << lastName << endl;
		cout << "salary: " << salary << endl;
		cout << endl;
	}
};

void bubbleSort(vector<Employee*>& employees)
{
	;
	for (int i = 0; i < employees.size() - 1; ++i)
		{
		for (int i = 0; i < employees.size() - 1 -i; ++i)
		{
			if (employees[i] -> salary > employees[i + 1] -> salary)
			{
				//int [t] = employees[i];
				//employees[i] = employees[i +1];
				//employees[i +1] = t;
				swap(employees[i], employees[i + 1]);
			}
			}
		}
}

void displayArray(vector<Employee*>& employees)
{
	for (int i = 0; i < employees.size(); ++i)
	{
		employees[i]->display();
	}
	cout << endl;
}

int main()
{
	vector<Employee*> employees;
	employees.push_back(new Employee("Jan", "Kowalski", 3200));
	employees.push_back(new Employee("Eryk", "Kowalski", 2500));
	employees.push_back(new Employee("Oskar", "Nowak", 2800));
	employees.push_back(new Employee("Adam", "Nowak", 3500));
	employees.push_back(new Employee("Maciej", "Nowak", 4000));

	bubbleSort(employees);

	displayArray(employees);

	return 0;
}