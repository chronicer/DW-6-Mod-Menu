#pragma once

#include "../game/Battle/TeamSettings.h"
#include "../game/Battle/UnitInformation.h"
#include "../game/Battle/UnitInfoAfterSpawn.h"
#include "../game/Battle/UnitInfoInBattle.h"
#include "../game/Battle/UnitInfoForSpawnFull.h"

struct BattleInformation
{
public:
	int* m_nUnitsFirstArrayForSpawnInfo;
	int field_4;
	int field_8;
	TeamSettings m_nTeamSettings[3];
	UnitInformation m_nUnitInfo[80];
	UnitInfoAfterSpawn m_nUnitInfoAfterSpawn[300];
	UnitInfoInBattle m_nUnitInfoInBattle[150];
	UnitInfoForSpawnFull m_nUnitInfoForSpawnFull;
};


VALIDATE_SIZE(BattleInformation, 0x34EC4);
//0x5020
//0x725C0 - full size