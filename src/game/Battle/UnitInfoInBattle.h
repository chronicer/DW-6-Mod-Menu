#pragma once

struct UnitInfoInBattle
{
public:
	int field_0;
	int field_4;
	int field_8;
	int field_C;
	int m_nUnitTeam;
	int m_nUnitNameId; //0 - normal, 1 - Dian wei? 2 - He Jin....
	int field_18;
	int field_1C;
	int field_20;
	int field_24;
	int field_28;
};


VALIDATE_SIZE(UnitInfoInBattle, 0x2C);