#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
int number, sum = 0;

cout << "Введіть число: ";
cin >> number;

while (number != 0) {
sum += number % 10; 
number /= 10;       
}

cout << "Сума цифр числа: " << sum << endl;

return 0;
}
