#pragma once

#include "../game/Battle/UnitLieutenantsInfo.h"

struct UnitInfoForSpawn
{
public:
	int field_0;
	int field_4;
	int field_8;
	int field_C;
	int field_10;
	int field_14;
	int field_18;
	int field_1C;
	int field_20;
	int field_24;
	int field_28;
	int m_nUnitId;
	UnitLieutenantsInfo m_nUnitLieutenantsInfo[10];
	int field_80;
};


VALIDATE_SIZE(UnitInfoForSpawn, 0x84);
