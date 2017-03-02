#include"ElevatorControlSystem.h"
#include<vector>

ElevatorControlSystem::ElevatorControlSystem(int numberOfElevators, int numberOfFloors)
{
	this->numberOfElevators = numberOfElevators;
	this->numberOfFloors = numberOfFloors;

	for (int i = 0; i < this->numberOfElevators; i++)
	{   
		elevators.push_back(new Elevator(1));
	}

}

void ElevatorControlSystem::pickUp(int pickUpFloor)
{
	this->pickUpLocations.push(pickUpFloor);
}

void ElevatorControlSystem::destination(int elevatorID, int destinationFloor)
{
	this->elevators.at(elevatorID)->addNewDestination(destinationFloor);
}

void ElevatorControlSystem::step()
{
	for (Elevator* currentElevator : elevators)
	{
		switch (currentElevator->status())
		{
		case EMPTY: if (!pickUpLocations.empty())
						{
							currentElevator->addNewDestination(pickUpLocations.front());
							pickUpLocations.pop();
						}
					break;
		case OCCUPIED: if (currentElevator->direction()== UP)
						{
						currentElevator->moveUp();
						break;
						}
					   else if (currentElevator->direction() == DOWN)
					   {
						   currentElevator->moveDown();
						   break;
					   }
					   else {
						   currentElevator->popDestination();
						   break;
					   }

		}
	}
}


std::vector<Elevator*> ElevatorControlSystem::getElevators()
{
	return this->elevators;
}