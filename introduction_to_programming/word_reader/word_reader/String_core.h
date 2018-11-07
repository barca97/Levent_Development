#pragma once

namespace Str_Ops
{
	void copy(char *dest, const char *src)
	{
		int length = 0;
		for (;;)
		{
			if (src[length] == 0) break;

			dest[length] = src[length];
			length++;
		}

		dest[length] = 0;
	}

	int length(char *dest, const char *src)
	{
<<<<<<< HEAD
		int length = dest[length];
		int number_of_steps = length / 2;

		for (int i = 0; i < number_of_steps; i++)
		{
			int left = i;
			int right = length - i - 1;

			if (src[left] != src[right]);
		}
		return 0;
=======
		int length = 0;

		return length;
>>>>>>> 412603af7b0ee383141592d8bb4779ea452a2018
	}
}