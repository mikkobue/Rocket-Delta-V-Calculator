#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::cout << "---Delta V Calculator for Rocket---" << std::endl;

    double dry_Mass;
    double initial_Mass;
    double specific_impuls; 
    const double Gravity = 9.80665;

    std::cout << "Give the wet mass: ";
    std::cin >> initial_Mass; 
    
    std::cout << std::endl << "Give the dry mass: ";
    std::cin >> dry_Mass;
    
    std::cout << std::endl << "Give the specific impuls: ";
    std::cin >> specific_impuls; 
    
    std::cout << std::endl;

    double delta_V = specific_impuls * Gravity * std::log(initial_Mass / dry_Mass);

    std::cout << "delta V of the rocket is: " << delta_V << " m/s" << std::endl;


    return 0;
}