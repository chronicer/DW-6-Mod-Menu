#pragma once
#include <Windows.h>
#include <Psapi.h>
#include "shared.h"
#include <string>

namespace cheat
{


	//inline bool &OnFocus = *(bool*)(shared::base + 0x19D509C);

	void HandleCheats() noexcept;
	void LoadConfig() noexcept;
	void SaveConfig() noexcept;
	void Reset() noexcept;


	int hex_to_int(const std::string& str);
	inline std::string error = "";


	unsigned int ReadSinglePointer(unsigned int baseAddress, unsigned int offset) noexcept;
	void WriteDoublePointer(unsigned int baseAddress, unsigned int offset, unsigned int value) noexcept;


	int __cdecl stringhash32(const char* a1);

	void SetFunctionToAddress(unsigned int addr1, unsigned int addr2);

	void CheatMain();

	inline unsigned int PlayerAction;


}