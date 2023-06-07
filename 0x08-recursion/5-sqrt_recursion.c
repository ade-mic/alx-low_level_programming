#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _sqrt_recursion - returns tthe natural square root of a number
 * @n: natural number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int start, end, mid, ans;

	start = 0;
	end = n;
	while (start <= end) {
		mid = (start + end) / 2;

		// If number is perfect square
		// then break
		if (mid * mid == n) {
			ans = mid;
			return ans;
		}
		else if ( mid  mid < n) {
			ans
}
