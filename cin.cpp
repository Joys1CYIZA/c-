//declare variable
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float number1,number2,summation;
int main(int argc, char** argv) {
	

  cout << "Type the first number: ";
  cin >> number1;
  cout << "Type the second number: ";
  cin >> number2;
  summation= number1 + number2;
  cout << "Sum is: " << summation;
	return 0;
}