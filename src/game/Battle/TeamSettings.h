#pragma once

struct TeamSettings
{
public:
	int field_0;
	int m_nTeamColor;
	int m_nTeamNameId;
	int m_nDamageToTeamId;
	int m_nUnitIdForCondition;
	int m_nUnitOnBasesType; //not use it, because units then became with black textures
	int m_nUnitType; //not use it >2, because game crashes
	int field_1C;
	int field_20;
	int field_24;
	int field_28;
	int field_2C;
	int field_30;
	int m_nTimer;
	int field_38;
	int field_3C;
	int field_40;
	int field_44;
	int field_48;
	int field_4C;
	int m_nTeamMorale;
	int field_54;
	int m_nTriggers;
	int field_5C;
	int field_60;
	int field_64;
	int field_68;
	int field_6C;
	int field_70;
	int field_74;
	int field_78;
	int field_7C;
	int field_80;
	int field_84;
	int field_88;
	int field_8C;
	int field_90;
	int field_94;
	int field_98;
	int field_9C;
	int field_A0;
	int field_A4;
	int field_A8;
	int field_AC;
	int m_nUnitsCount; //don't change it
	int m_nUnitsCount2;
	int m_nBattlegroundUnitsInfo;//bitwise
	int field_BC;
	int field_C0;
	int field_C4;
	int field_C8;
	int m_nUnitsReplics;
	int field_D0;
	int field_D4;
	int field_D8;
};


VALIDATE_SIZE(TeamSettings, 0xDC);