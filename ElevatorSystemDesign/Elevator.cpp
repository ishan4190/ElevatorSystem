#include"Elevator.h"

Elevator::Elevator(int currentFloor)
{
	this->currentFloor = currentFloor;
	
}

void Elevator::addNewDestination(int destination)
{
	if (destination > 0)
	this->destinationFloors.push(destination);
}

void Elevator::moveDown()
{
	this->currentFloor--;
}

void Elevator::moveUp()
{
	this->currentFloor++;
}

ELEVATOR_DIRECTION Elevator::direction()
{
	if (!destinationFloors.empty())
	{
		if (currentFloor < destinationFloors.front())
			return UP;
		else if (currentFloor > destinationFloors.front())
			return DOWN;
		else
			return ON_HOLD;
	}

	return ON_HOLD;
}

ELEVATOR_STATUS Elevator::status()
{
	if (destinationFloors.empty())
		return EMPTY;
	else
		return OCCUPIED;
}

int Elevator::getCurrentFloor()
{
	return this->currentFloor;
}

void Elevator::setCurrentFloor(int currentFloor)
{
	this->currentFloor = currentFloor;
}

void Elevator::popDestination()
{
	if (!this->destinationFloors.empty())
		this->destinationFloors.pop();
}

int Elevator::nextDestination()
{
	if (!destinationFloors.empty())
		return this->destinationFloors.front();
}
