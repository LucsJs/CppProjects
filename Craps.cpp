// craps
/*
Um jogador rola dois dados. Cada dado tem seis faces. Essas faces cont�m 1, 2, 3, 4, 5 e 6 pontos. Depois que os dados param de
rolar, a soma dos pontos nas faces viradas para cima � calculada. Se a soma � 7 ou 11 na primeira rolagem dos dados, o jogador
ganha. Se a soma � 2, 3 ou 12 na primeira rolagem dos dados (chamado �craps�), o jogador perde (isto �, a �casa� ganha). Se a soma 
for 4, 5, 6, 8, 9 ou 10 na primeira rolagem dos dados, essa soma torna-se a �pontua��o� do jogador. Para ganhar, voc� deve continuar
a lan�ar o dado at� �fazer sua pontua��o�. O jogador perde se obtiver um 7 antes de fazer sua pontua��o.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int lancarDado();
void telaInicial();
int opcoes();
bool opValid(int);

int main() {
	int face1, face2, somaFaces, op;
	
	srand(time(0));
	
	telaInicial();
	while(!opValid(op = opcoes())) {
		std::cout << "Please enter a valid option.";
	}
	
	if (op == 2) {
		std::cout << "Um jogador rola dois dados. Cada dado tem seis faces. Essas faces cont�m 1, 2, 3, 4, 5 e 6 pontos. Depois que os dados param de"
				  << "rolar, a soma dos pontos nas faces viradas para cima � calculada. Se a soma � 7 ou 11 na primeira rolagem dos dados, o jogador"
				  << "ganha. Se a soma � 2, 3 ou 12 na primeira rolagem dos dados (chamado �craps�), o jogador perde (isto �, a �casa� ganha). Se a soma" 
	 			  << "for 4, 5, 6, 8, 9 ou 10 na primeira rolagem dos dados, essa soma torna-se a �pontua��o� do jogador. Para ganhar, voc� deve continuar"
				  << "a lan�ar o dado at� �fazer sua pontua��o�. O jogador perde se obtiver um 7 antes de fazer sua pontua��o.\n";
	}
	
	return 0;
}

int lancarDado() {
	return rand() % 6 + 1;
	
}

void telaInicial() {
	std::cout << "=-==--==-==\n";
	std::cout << " C R A P S \n";
	std::cout << "=-==--==-==\n";
	std::cout << "Welcome to craps!\n\n";
	
	
}

int opcoes() {
	int op;
	
	std::cout << "START GAME..[1]\n";
	std::cout << "RULES.......[2]\n";
	std::cout << "EXIT........[3]\n";
	std::cout << "Enter your option: ";
	std::cin >> op;
	return op;
	
}

bool opValid(int op){
	switch (op) {
		case 1:
		case 2:
		case 3:
			return true;
		defalt:
			return false;	
	}
	
}






















