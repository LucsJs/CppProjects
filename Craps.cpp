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

int lancarDado();
void telaInicial();

int main() {
	int face1, face2, somaFaces;
	
	srand(time(0));
	
	face1 = lan�arDado();
	face2 = lan�arDado();
	
	
}

int lancarDado() {
	return rand % 6 + 1;
	
}

void telaInicial() {
	std::cout << 
}


