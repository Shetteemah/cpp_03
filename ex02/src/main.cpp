#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int main()
{
    std::string player_name;
    std::string enemy_name;
    std::string player_clone;
    std::cout << "Enter your name: ";
    std::cin >> player_name;
    std::cout << "Now enter opponent's name: ";
    std::cin >> enemy_name;
    player_clone = player_name + "'s clone";

    std::cout << "\n" << "╔════╗─────────╔╗──╔═╗───────╔═══╗╔╗───────╔════╗";
    std::cout << "\n" << "║╔╗╔╗║────────╔╝╚╗─║╔╝───────║╔═╗║║║───────║╔╗╔╗║";
    std::cout << "\n" << "╚╝║║╚╝╔══╗╔══╗╚╗╔╝╔╝╚╗╔══╗╔═╗║║─╚╝║║─╔══╗╔═╩╣║║╚╝╔═╗╔══╗╔══╗";
    std::cout << "\n" << "──║║──║║═╣║══╣─║║─╚╗╔╝║╔╗║║╔╝║║─╔╗║║─║╔╗║║╔╗║║║──║╔╝║╔╗║║╔╗║";
    std::cout << "\n" << "──║║──║║═╣╠══║─║╚╗─║║─║╚╝║║║─║╚═╝║║╚╗║╔╗║║╚╝║║║──║║─║╔╗║║╚╝║";
    std::cout << "\n" << "──╚╝──╚══╝╚══╝─╚═╝─╚╝─╚══╝╚╝─╚═══╝╚═╝╚╝╚╝║╔═╝╚╝──╚╝─╚╝╚╝║╔═╝";
    std::cout << "\n" << "─────────────────────────────────────────║║─────────────║║";
    std::cout << "\n" << "─────────────────────────────────────────╚╝─────────────╚╝" << "\n";

    ClapTrap player_one;
    ClapTrap player_two(player_name);
    std::cout << "\n" << "========================================================================= " << "\n\n";

    player_one.attack(enemy_name);
    player_one.takeDamage(10);
    player_one.takeDamage(10);
    player_one.beRepaired(5);
    player_one.attack(enemy_name);
    std::cout << "\n";
    player_two.beRepaired(3);
    // std::cout << "\n";
    // for (int i = 0; i < 12; i++)
    //     player_two.attack(player_clone);
    player_two.beRepaired(3);

    std::cout << "\n" << "╔════╗─────────╔╗──╔═╗───────╔═══╗────────────╔════╗";
    std::cout << "\n" << "║╔╗╔╗║────────╔╝╚╗─║╔╝───────║╔═╗║────────────║╔╗╔╗║";
    std::cout << "\n" << "╚╝║║╚╝╔══╗╔══╗╚╗╔╝╔╝╚╗╔══╗╔═╗║╚══╗╔══╗╔══╗╔╗╔╗╚╝║║╚╝╔═╗╔══╗╔══╗";
    std::cout << "\n" << "──║║──║║═╣║══╣─║║─╚╗╔╝║╔╗║║╔╝╚══╗║║╔═╝║╔╗║║╚╝║──║║──║╔╝║╔╗║║╔╗║";
    std::cout << "\n" << "──║║──║║═╣╠══║─║╚╗─║║─║╚╝║║║─║╚═╝║║╚═╗║╔╗║╚╗╔╝──║║──║║─║╔╗║║╚╝║";
    std::cout << "\n" << "──╚╝──╚══╝╚══╝─╚═╝─╚╝─╚══╝╚╝─╚═══╝╚══╝╚╝╚╝─╚╝───╚╝──╚╝─╚╝╚╝║╔═╝";
    std::cout << "\n" << "───────────────────────────────────────────────────────────║║";
    std::cout << "\n" << "───────────────────────────────────────────────────────────╚╝" << "\n";

    ScavTrap player_three;
    ScavTrap player_four(player_name);
    std::cout << "\n" << "========================================================================= " << "\n\n";

	player_three.attack(enemy_name);
	// for (int i = 0; i < 50; i++)
	// 	player_three.attack("CloneTrap");
	player_three.beRepaired(22);
	player_three.takeDamage(21);
	player_three.beRepaired(22);
	player_three.guardGate();
	player_three.guardGate();
	player_four.attack(player_clone);
	player_four.takeDamage(101);
	player_four.takeDamage(15);
	player_four.attack(player_clone);

    std::cout << "\n" << "╔════╗─────────╔╗──╔═╗───────╔═══╗───────────╔════╗";
    std::cout << "\n" << "║╔╗╔╗║────────╔╝╚╗─║╔╝───────║╔══╝───────────║╔╗╔╗║";
    std::cout << "\n" << "╚╝║║╚╝╔══╗╔══╗╚╗╔╝╔╝╚╗╔══╗╔═╗║╚══╗╔═╗╔══╗╔══╗╚╝║║╚╝╔═╗╔══╗╔══╗";
    std::cout << "\n" << "──║║──║║═╣║══╣─║║─╚╗╔╝║╔╗║║╔╝║╔══╝║╔╝║╔╗║║╔╗║──║║──║╔╝║╔╗║║╔╗║";
    std::cout << "\n" << "──║║──║║═╣╠══║─║╚╗─║║─║╚╝║║║─║║───║║─║╔╗║║╚╝║──║║──║║─║╔╗║║╚╝║";
    std::cout << "\n" << "──╚╝──╚══╝╚══╝─╚═╝─╚╝─╚══╝╚╝─╚╝───╚╝─╚╝╚╝╚═╗║──╚╝──╚╝─╚╝╚╝║╔═╝";
    std::cout << "\n" << "─────────────────────────────────────────╔═╝║─────────────║║";
    std::cout << "\n" << "─────────────────────────────────────────╚══╝─────────────╚╝" << "\n";

	FragTrap player_five;
	FragTrap player_six(player_name);
    std::cout << "\n" << "========================================================================= " << "\n\n";

	player_five.highFivesGuys();
	player_five.attack(player_clone);
	player_five.takeDamage(101);
	player_five.takeDamage(1);
	player_five.attack(player_clone);
	player_six.highFivesGuys();
	// for(int i = 0; i < 101; i++)
	// 	player_six.attack("FragTrap-clone");
    std::cout << "\n" << "========================================================================= " << "\n\n";
    return (0);
}
