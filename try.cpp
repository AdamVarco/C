// An efficient C++ program to remove all spaces
// from a string
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Function to remove all spaces from a given string
void removeSpaces(char *str)
{
	// To keep track of non-space character count
	int count = 0;

	// Traverse the given string. If current character
	// is not space, then place it at index 'count++'
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			str[count++] = str[i]; // here count is
								// incremented
	str[count] = '\0';
}

// Driver program to test above function
int main()
{
	char str[] = "g eeks for ge eeks ";
	removeSpaces(str);
	cout << str << endl;
	std::string holder;
	cout << "\n Enter a string ";
	cin >> holder;
	string holder2 = holder;
	std::transform(holder2.begin(), holder2.end(), holder2.begin(), ::tolower);
	std::transform(holder.begin(), holder.end(), holder.begin(), ::tolower);
    std::reverse(holder.begin(),holder.end());
    if(holder == holder2)
        cout<< holder <<  " is a palindrome" << endl;
	return 0;
}
