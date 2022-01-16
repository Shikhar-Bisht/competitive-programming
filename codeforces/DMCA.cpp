// C program for the above approach
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
// Function to find the square-root of N
int findSQRT(int number)
{
	int start = 0, end = number;
	int mid;

	// To store the answer
	float ans;

	// To find integral part of square
	// root of number
	while (start <= end) {

		// Find mid
		mid = (start + end) / 2;

		// If number is perfect square
		// then break
		if (mid * mid == number) {
			ans = mid;
			break;
		}

		// Increment start if integral
		// part lies on right side
		// of the mid
		if (mid * mid < number) {
			start = mid + 1;
			ans = mid;
		}

		// Decrement end if integral part
		// lies on the left side of the mid
		else {
			end = mid - 1;
		}
	}
	return ans;
}

// Driver Code
int main()
{

	// Given number
	int N;
	cin>>N;

	// Function call
	printf("%d ", findSQRT(N));
	return 0;
}

