#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "arr.h"
#define BUFFER_SIZE 10

/* hash map data structure implemented within C */

struct hash_item {
	int value;
	int key;
};

struct hash_table {
	struct hash_item item;
	int size[BUFFER_SIZE];
};



int main() {
	struct hash_table h_map;
//	int hash_map[5];
//	h_map.size = 5;
//	int val, key;
	char buffer[BUFFER_SIZE];
	char *ptr;
	for (int i=0; i < ARR_LEN(h_map.size); i++) {
		printf("Enter values to store: \n");
		fgets(buffer, BUFFER_SIZE, stdin);
		h_map.item.value = strtol(buffer, &ptr, BUFFER_SIZE);
		h_map.item.key = i;	
		h_map.size[i] = h_map.item.value;
//		hash_map[i] = val;
	}
	
	for (int m=0; m < ARR_LEN(h_map.size); m++) {
		printf("Element[%d] is: %d\n", m, h_map.size[m]);
	}
//	arrprint(hash_map);

	return 0;
}
