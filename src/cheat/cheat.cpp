#include "cheat.h"
#include "../gui/gui.h"
#include "../injector/injector.hpp"
#include "../IniReader.h"
#include "../KeyBind.h"
#include <string>
#include <sstream>

#pragma comment(lib, "D3dx9.lib") 

#include <iostream>
#include <string>

/* TODO #
*  Make functions for each cheat instead (since return will cancel the handle cheats instead of if condition  
*/



int __cdecl cheat::stringhash32(const char* a1)
{
	return ((int (__cdecl*)(const char*))(shared::base + 0xA03EA0))(a1);
}

void cheat::SetFunctionToAddress(unsigned int addr1, unsigned int addr2)
{

}


void cheat::WriteDoublePointer(unsigned int baseAddress, unsigned int offset, unsigned int value) noexcept
{
	unsigned int address = 0;
	address = injector::ReadMemory<unsigned int>(baseAddress, true);
	if (address)
		injector::WriteMemory<int>(address + offset, value, true);
}

unsigned int cheat::ReadSinglePointer(unsigned int baseAddress, unsigned int offset) noexcept
{
	return injector::ReadMemory<unsigned int>(baseAddress + offset, true);
}

void cheat::CheatMain()
{
	//injector::WriteMemory<byte>(0x400000, 0, true);
	
//	PlayerAction = injector::ReadMemory<unsigned int>(shared::base+0x35C4BC,true);
	//if (PlayerAction) PlayerAction = injector::ReadMemory<unsigned int>(PlayerAction + 0xEC0 + 0x58, true);

	//injector::WriteMemory<byte>(shared::base + 0x94786,116,true);
}

// Handles all cheats at once
void cheat::HandleCheats() noexcept
{
	static bool once = false;
	if (!once)
	{
		LoadConfig();

		//fix input
		unsigned int BaseAddress = injector::ReadMemory<unsigned int>(shared::base + 0x35C61C, true);
		if (BaseAddress)
			BaseAddress = injector::ReadMemory<unsigned int>(BaseAddress, true)+0x1C;
		if (BaseAddress)
			BaseAddress = injector::ReadMemory<unsigned int>(BaseAddress, true) + 0x5667;
		if (BaseAddress)
			injector::WriteMemory<byte>(BaseAddress,0, true);
		//fix input



		once = true;
	}
	CheatMain();
}




// Loads config (ini file)
void cheat::LoadConfig() noexcept
{
	CIniReader iniReader("ModMenu.ini");
}

// Saves config (ini file)
void cheat::SaveConfig() noexcept
{
	CIniReader iniReader("ModMenu.ini");

	//iniReader.WriteInteger("Player", "InfFuelContainer", infiniteFc);
}





// Resets cheats
void cheat::Reset() noexcept
{
	//infiniteFc = false;
}