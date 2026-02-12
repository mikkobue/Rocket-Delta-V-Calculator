#include <iostream>
#include <cmath>


double stage(double specific_Impuls, double dry_mass, double wet_mass){
  const double gravity = 9.80665;
  
  
  return specific_Impuls * gravity * std::log(wet_mass / dry_mass);
}



int main(){
  int stages;
  double total_velocity = 0;
  
  std::cout << "Amount of stages: ";
  std::cin >> stages;
  
  for(int i = 0; i < stages; i++){
    double s_impuls;
    double d_mass;
    double w_mass;
    
    std::cout << std::endl << "---Stage: " << i + 1 << "---" << std::endl;
    
    std::cout << "Dry Mass: ";
    std::cin >> d_mass;
   
    std::cout << "Wet Mass: ";
    std::cin >> w_mass;
    
    std::cout << "Specific Impuls: ";
    std::cin >> s_impuls;
    
    total_velocity += stage(s_impuls, d_mass, w_mass);
    
  }

  std::cout << std::endl << "the total Delta V is: " << total_velocity << " m/s";
  
  return 0;
}
