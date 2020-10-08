#include<iostream>
using namespace std;


bool isPalindrome(int x) {
    unsigned int reverse = 0;
    int temp = x;
    if (x < 0)
        return false;
    while (temp != 0)
    {
        reverse = temp % 10 + reverse * 10;
        temp = temp / 10;
    }
    if (reverse == x)
        return true;
    else
        return false;
}


int main()
{
    long long int number;
	cout << "Enter a number" << endl;
    cin >> number;
    if (isPalindrome(number))
        cout << "The integer is a palindrome" << endl;
    else
        cout << "The integer is not a palindrome" << endl;
	return 0;
}