#include <iostream>
using namespace std;

int sum(int a, int b);
int min(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
   cout << "###Calculatrice###" << endl;

   cout << "Enter the operation you would like to do" << endl;
   int operation;
   cin >> operation;

   // useless comments

   cout << "Enter the first number" << endl;
   int first_num;
   cin >> first_num;

   cout << "Enter the second number" << endl;
   int second_num;
   cin >> second_num;

   if (operation == 1) {
      sum(first_num, second_num);
   } else if (operation == 2) {
     min(first_num, second_num);
   } else if (operation == 3) {
      multiply(first_num, second_num);
   } else if (operation == 4) {
      divide(first_num, second_num);
   }

   return 0;
}

int sum(int a, int b) {
   return a + b;
}

int min(int a, int b) {
   return a - b;
}

int multiply(int a, int b) {
   return a * b;
}

int divide(int a, int b) {
   return a / b;
}
