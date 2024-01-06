#pragma once
#include "KeyBinds.h"

namespace KeyBind
{
	void Hotkey(const char* label, unsigned int* k) noexcept;
	bool IsKeyPressed(unsigned int k) noexcept;
	const char* GetStringFromKey(unsigned int key) noexcept;
	bool SetToPressedKey(unsigned int* key) noexcept;
};