#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
size_t min(size_t, size_t);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif /* _SEARCH_ALGOS_H_ */
