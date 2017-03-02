#pragma once

 class IElevatorControlSystemFactory {

 public:
	 virtual void pickUp(int pickUpFloor) = 0;
	 virtual void destination(int elevatorID, int destinationFloor)=0;
	 virtual void step() = 0;

};
