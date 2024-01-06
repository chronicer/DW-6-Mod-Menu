#pragma once
#include "../game/UnitsOnMap/UnitsInTargets.h"

struct UnitsOnMapMain
{
public:
	UnitOnMap m_nAlliedUnitsOnMap[6];
	int field_90;
	int field_94;
	int field_98;
	UnitOnMap m_nEnemyUnitsOnMap[6];
	int field_12C;
	int field_130;
	int field_134;
	UnitsInTargets m_nTargetsNames[3];
	UnitOnMap m_nUnitsAgain[6];
	int field_39C;
	int field_3A0;
	int field_3A4;
};


//VALIDATE_SIZE(UnitsOnMapMain, 0x18);