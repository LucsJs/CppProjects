// craps
/*
Um jogador rola dois dados. Cada dado tem seis faces. Essas faces contêm 1, 2, 3, 4, 5 e 6 pontos. Depois que os dados param de
rolar, a soma dos pontos nas faces viradas para cima é calculada. Se a soma é 7 ou 11 na primeira rolagem dos dados, o jogador
ganha. Se a soma é 2, 3 ou 12 na primeira rolagem dos dados (chamado ‘craps’), o jogador perde (isto é, a ‘casa’ ganha). Se a soma 
for 4, 5, 6, 8, 9 ou 10 na primeira rolagem dos dados, essa soma torna-se a ‘pontuação’ do jogador. Para ganhar, você deve continuar
a lançar o dado até ‘fazer sua pontuação’. O jogador perde se obtiver um 7 antes de fazer sua pontuação.
*/

#include <iostream>
#include <cstdlib>

int lancarDado();
void telaInicial();

int main() {
	int face1, face2, somaFaces;
	
	srand(time(0));
	
	face1 = lançarDado();
	face2 = lançarDado();
	
	
}

int lancarDado() {
	return rand % 6 + 1;
	
}

void telaInicial() {
	std::cout << 
}


