#pragma once

#include "../game/Battle/UnkBattleStruct.h"
#include "../game/Battle/UnitInfoForSpawn.h"

struct UnitInfoForSpawnFull
{
public:
	UnkBattleStruct m_nUnkBattleStruct[3];
	UnitInfoForSpawn m_nUnitInfoForSpawn[36];
};

VALIDATE_SIZE(UnitInfoForSpawnFull, 0x12FC);