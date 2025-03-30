#include <iostream>

int main() {
	int result;
	int passados = 0;
	int reprovados = 0;
	
	for (int i = 1; i <= 10; i++) {
		std::cout << "Insira o " << i << "º resultado: ";
		std::cin >> result;
		if (result == 1) {
			passados++;
			
		} else {
			reprovados++;
			
		}
		
	}
	
	std::cout << passados << " alunos passaram e " << reprovados << " reprovaram.\n";
	if (passados > 8) {
		std::cout << "Aumentar a mensalidade escolar.\n";
		
	}
	return 0;
	
}
