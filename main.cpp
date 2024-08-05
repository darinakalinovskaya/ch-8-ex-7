#include <math.h>
#include <iostream>
#include <vector>
#include <limits>
using namespace std;


void pr(const vector<string>&v) {
for (string num : v) {
cout << num << endl;
}
cout << endl;
}

// Функція для виведення пар (ім'я, вік)
void pr_pair(const vector<string>& names, const vector<double>& ages) {
    for (size_t i = 0; i < names.size(); ++i) {
        cout << "(" << names[i] << ", " << ages[i] << ")" << endl;
    }
}


int main() {
   vector<string> names;
   vector<double> ages;
   string name;
   double age;

      // Введення імен та віків
    cout << "name and age:" << endl;
    while (true) {
        cout << "name: ";
        cin >> name;
        if (name == "stop") break;
        names.push_back(name);
        cout << "age for " << name << ": ";
        cin >> age;
        ages.push_back(age);
      }

      // Виведення введених пар
      cout << "\nВведені пари (ім'я, вік):" << endl;
      print_pairs(names, ages);

      // Створення копії імен для сортування
      vector<string> sorted_names = names;
      sort(sorted_names.begin(), sorted_names.end());

      // Створення вектора віків, упорядкованих відповідно до відсортованих імен
      vector<double> sorted_ages(names.size());
      for (size_t i = 0; i < sorted_names.size(); ++i) {
          for (size_t j = 0; j < names.size(); ++j) {
              if (sorted_names[i] == names[j]) {
                  sorted_ages[i] = ages[j];
                  break;
              }
          }
      }

      // Виведення відсортованих пар
      cout << "\nВідсортовані пари (ім'я, вік):" << endl;
        pr_pair(sorted_names,sorted_ages);


  

}