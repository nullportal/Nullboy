#include "emulator.hpp"

void Emulator::run()
{

	while (emulatorRunning)
	{
		//While shit isn't burning down we'll process things
		//--------------------------------------------------
		if (!processor.isHalted)
		{
			processor.emulateCycle();
		}
	}
}

Emulator::Emulator()
{
	


	emulatorRunning = true;

	//Make the Magic Happen
	this->run;
}
