/*
#include "Elevator.h"
#include<iostream>
#include <string>

int main()
{
	static const int SECOND_FLOOR = 2;
	static const int EIGHTH_FLOOR = 8;
	static const int BASEMENT_FLOOR = 0;

	std::string direction;

	Elevator elevator(0); // intialize elevator with currentFloor as 0 or GroundFloor

	std::cout << "Elevator intially at floor: "<<elevator.getCurrentFloor()<<std::endl;
	/// Testing moveUp////////////////
	elevator.moveUp();
	elevator.moveUp();

	std::cout << "Elevator after moving up twice: " << elevator.getCurrentFloor()<<std::endl;

	elevator.moveDown();
	elevator.moveDown();

	std::cout << "Elevator after moving down twice: " << elevator.getCurrentFloor()<<std::endl;
	
	//addNewDestination//////////

	elevator.addNewDestination(SECOND_FLOOR);
	std::cout << "Elevators next destination is: " << elevator.nextDestination()<<std::endl;

	//////////TEST DIRECTION UP////////////////////
	if (elevator.direction() == UP) direction = "UP";
	else direction = "DOWN";
	std::cout << "Elevators Direction is: " << direction<< std::endl;

	///POP DESTINTION///////////
	elevator.popDestination();

	//addNewDestination//////////

	elevator.addNewDestination(10);
	std::cout << "Elevators next destination is: " << elevator.nextDestination() << std::endl;

	//////////TEST DIRECTION DOWN////////////////////

	if (elevator.direction() == UP) direction = "UP";
	else direction = "DOWN";
	std::cout << "Elevators Direction is: " << direction<< std::endl;


	

	//////////CHECK STATUS////////////////////
     
	 
	 
	std::cout << "Elevator status is: " << elevator.status()<< std::endl;


}
*/