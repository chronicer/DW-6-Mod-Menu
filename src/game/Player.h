#pragma once
#include "../game/Character.h"
#include "../game/Character.cpp"


class Player : public Character
{
public:
	int field_2D8;
	int field_2DC;
	int field_2E0;
	int field_2E4;
	int field_2E8;
	int field_2EC;

	void Init()
	{
		((void(__thiscall*)(Player*))(shared::base + 0xDCF20))(this);
	}

	virtual ~Player() {};

	static inline Player& Instance = *(Player*)((shared::base + 0x35C4BC)+0xEC0);
};


VALIDATE_SIZE(Player, 0x2F0);
