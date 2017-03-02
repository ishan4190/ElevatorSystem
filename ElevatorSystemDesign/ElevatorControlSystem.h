#pragma once
#include"IElevatorControlSystemFactory.h"
#include "Elevator.h"
#include<vector>
#include<queue>

class ElevatorControlSystem : public IElevatorControlSystemFactory {
public:
	void pickUp(int pickUpFloor);
	void destination(int elevatorID, int destinationFloor);
	void step();
	ElevatorControlSystem(int numberOfElevator, int numberOfFloors);
	std::vector<Elevator*> getElevators();

private:
	static const int MAX_ELEVATORS = 16;
	int numberOfElevators;
	int numberOfFloors;
	std::vector<Elevator*> elevators;
	std::queue<int> pickUpLocations;
};
