Task 0:
Write a function that allocates memory using malloc. The function returns a pointer to the allocated memory. If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.

Task 1:
Write a function that concatenates two strings. The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated. If the function fails, it should return NULL. If n is greater or equal to the length of s2 then use the entire string s2. If NULL is passed, treat it as an empty string.

Task 2:
Write a function that allocates memory for an array, using malloc. The \_calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then \_calloc returns NULL. If malloc fails, then \_calloc returns NULL.

Task 3:
Write a function that creates an array of integers. The array created should contain all the values from min (included) to max (included), ordered from min to max. Return: the pointer to the newly created array. If min > max, return NULL. If malloc fails, return NULL

Task 4: