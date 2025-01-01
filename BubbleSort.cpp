#include <iostream>

void troca(int *a, int *b) {
   
	int aux = *a;
	*a = *b;
	*b = aux;

}

void bubble_sort(int v[], int n) {
  
	for (int x = 0; x < n-1; x++) {
		
		for (int y = x + 1; y < n; y++) {
			
			if (v[x] > v[y]) {
				troca(&v[x], &v[y]);
				
			}
			
		}
		
	}
	  
}


int main() {
	int v[] = {3, 4, 1, 7, 9, 2, 5, 8, 6, 0};
	
	bubble_sort(v, 10);
	
	for (int z = 0; z < 10; z++) {
		std::cout << v[z] << " ";
	}
	
	std::cout << "\n";
	
	return 0;
}
