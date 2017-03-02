#include<iostream>
#include"ElevatorControlSystem.h"
#include"Elevator.h"
#include<vector>

int main()
{
	ElevatorControlSystem ecs(2, 20);
	std::vector<Elevator*> elevators;

	// requesting one elevator /////////

	ecs.pickUp(10);
	for (int i = 0; i < 10; i++)
	{
		ecs.step();
	}
	elevators = ecs.getElevators();
	if (elevators.at(0)->getCurrentFloor() == 10)
	{
		std::cout << "Elevator 0 is at floor" << 10<<std::endl;
	}

	
	// elevator at hold after reaching floor 10//////////
	std::cout << "Current elevator direction :" << elevators.at(0)->direction() << std::endl;

	//elevator empty after reaching destination i.e. floor 10
	std::cout<<"Current elevator status :"<<elevators.at(0)->status()<<std::endl;

	/////////////test checking elevator 2 is not moving


}