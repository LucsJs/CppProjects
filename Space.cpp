// Treinando if/else
// Um boxeador interplanetário está querendo saber seu peso em outros planetas; ajudemos-o usando programação

#include <iostream>

int main() {
	
	double earth_w; // peso na terra
	double fight_w; // peso no planeta da luta
	double relative_gravity; // relaçao de gravd com a terra
	int n_planet; // numero do planeta
	std::string planet; // nome do planeta
	
	std::cout << "HI LITTLE MAC!\n";
	std::cout << "ENTER YOUR EARTH WEIGHT(KG): ";
	std::cin >> earth_w;
	
	std::cout << "DIGIT THE PLANET NUMBER: ";
	std::cin >> n_planet;
	
	if (n_planet == 1) {
	relative_gravity = 0.38;
	planet = "Mercury";
	
	} else if (n_planet == 2) {
	relative_gravity = 0.91;
	planet = "Venus";
	
	} else if (n_planet == 3){
	relative_gravity = 0.38;
	planet = "Mars";
	
	} else if (n_planet == 4){
	relative_gravity = 2.34;
	planet = "Jupiter";
	
	} else if (n_planet == 5){
	relative_gravity = 1.06;
	planet = "Saturn";
	
	} else if (n_planet == 6){
	relative_gravity = 0.92;
	planet = "Uranus";
	
	} else if (n_planet == 7){
	relative_gravity = 1.19;
	planet = "Neptune";
	
	} else {
	planet = "Unknown";
	
	}
	
	if (planet == "Unknown") {
	std::cout << "YOU DIGITED AN INVALID PLANET NUMBER\n";
	} else {
	fight_w = earth_w * relative_gravity;
	std::cout << "\nIn " << planet << " you will have " << fight_w << " Kg.\n"; 
	}
  
}
