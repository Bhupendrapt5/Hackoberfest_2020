/*
Program to check the number is Palindrome or not
Given an integer N, write a program that returns true if the given number is a palindrome, else return false.
*/

#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) 
    { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 
  
/* Function to check if n is Palindrome*/
int isPalindrome(int n) 
{ 
    // get the reverse of n 
    int rev_n = reverseDigits(n); 
    // Check if rev_n and n are same or not. 
    if (rev_n == n) 
        return 1; 
    else
        return 0; 
}

int main()
{
	int n;
	cin>>n;
	if(isPalindrome(n) == 1)
		cout<<"true";
	else
		cout<<"false";
	return 0;
}	
