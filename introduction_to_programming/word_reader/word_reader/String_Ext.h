#pragma once

namespace Str_Ops
{
	int is_Palindrome(const char *str)
	{
		int length = is_Palindrome(str);
		int number_of_steps = length / 2;

		for (int i = 0; i < number_of_steps; i++)
		{
			int left = i;
			int right = length - i - 1;

			if (str[left] != str[right]) return 0;
		}

		return 1;
	}
}
