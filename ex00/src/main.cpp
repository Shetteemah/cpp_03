#include "../include/ClapTrap.hpp"

int main()
{
    std::string player_name;
    std::string enemy_name;
    std::string player_clone;
    std::cout << "Enter your name: ";
    std::cin >> player_name;
    std::cout << "Now enter opponent's name: ";
    std::cin >> enemy_name;
    std::cout << "\n" << " =================================== " << "\n\n";
    player_clone = player_name + "'s clone";

    ClapTrap player_one;
    ClapTrap player_two(player_name);
    std::cout << "\n" << " =================================== " << "\n\n";


    player_one.attack(enemy_name);
    // std::cout << "\n";
    player_one.takeDamage(10);
    player_one.takeDamage(10);
    // std::cout << "\n";
    player_one.beRepaired(5);
    // std::cout << "\n";
    player_one.attack(enemy_name);
    std::cout << "\n";
    player_two.beRepaired(3);
    std::cout << "\n";
    for (int i = 0; i < 12; i++)
        player_two.attack(player_clone);
    player_two.beRepaired(3);
    std::cout << "\n";
    return (0);
}