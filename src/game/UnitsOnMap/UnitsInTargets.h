#pragma once
#include "../game/UnitsOnMap/UnitOnMap.h"


class UnitsInTargets
{
public:
	UnitOnMap m_nUnitOnMap[6];
	int field_90;
	int field_94;
	static int field_98;

	virtual ~UnitsInTargets() {};
};
VALIDATE_SIZE(UnitsInTargets, 0x9C);