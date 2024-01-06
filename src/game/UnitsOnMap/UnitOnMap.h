#pragma once

struct UnitOnMap
{
public:
	int m_nUnitType;
	int m_nUnitId;
	int m_nUnitNameId;
	int m_nPosX;
	int m_nPosY;
	int m_nId;
};


VALIDATE_SIZE(UnitOnMap, 0x18);