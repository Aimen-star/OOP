#include <iostream>
#include <string>
using namespace std;
// Structure to store employee details
struct Employee {
 string name;
 int id;
 float salary;
 };
// Function to input employee data
void InputEmployeeData(Employee employee[], int count) {
 for (int i = 0; i < count; i++) {
 cout << "\nEnter details for Employee " << i + 1 << ":\n";
 cout << "Name: ";
 cin >>employee[i].name;
 cout << "ID: ";
 cin >> employee[i].id;
 cout << "Salary: ";
 cin >> employee[i].salary;
 }
}
// Function to display employee records
void DisplayEmployeeData(Employee employee[], int count) {
 cout << "\n--- Employee Records ---\n";
 for (int i = 0; i < count; i++) {
 cout << "IDr: " << employee[i].id << "\n";
 cout << "Name: " << employee[i].name << "\n";
 cout << "Salary: " << employee[i].salary << "\n\n";
 }
}
// Function to find the employee with the highest salary
void FindHighestSalary(Employee employee[], int count) {
 int topIndex = 0;
 for (int i = 1; i < count; i++) {
 if (employee[i].salary > employee[topIndex].salary) {
 topIndex = i;
 }
 }
 cout << "\n--- Highest Salary employee ---\n";
 cout << "Name: " << employee[topIndex].name << "\n";
 cout << "ID: " << employee[topIndex].id << "\n";
 cout << "Salary: " <<employee[topIndex].salary << "\n";
}
int main() {
 int numEmployee;
 cout << "Enter the number of employees: ";
 cin >> numEmployee;
 Employee employee[numEmployee]; // Structured array
 InputEmployeeData(employee, numEmployee);
 DisplayEmployeeData(employee, numEmployee);
 FindHighestSalary(employee, numEmployee);
 return 0;
}
