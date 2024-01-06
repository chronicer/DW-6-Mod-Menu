#pragma once

class Character
{
public:
	int field_4;
	int field_8;
	int field_C;
	int field_10;
	float m_fPos_x;
	float m_fPos_y;
	float m_fPos_z;
	int field_20;
	int field_24;
	float m_fDirection;
	int field_2C;
	int field_30;
	int* m_nCurrentModelPointer;
	int field_38;
	int field_3C;
	int field_40;
	int* m_nCurrentAnimation;
	float m_fActionAnimPos_1;
	float m_fActionAnimPos_2;
	float m_fAnimationSpeed;
	float m_fAnimationSpeedTotal;
	int m_nCurrentAction;
	float m_fActionAnimPos_3;
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
	unsigned int m_nPlayerKeysValues;
	int field_9C;
	int* m_nCViewPointer;
	int m_nCharacterControlType; //0 - player 1 keys, 1 - player 2 keys, 2 and more - enemies, no control
	float m_nDirection;
	int m_nPlayerMovingKeys;
	int field_B0;
	int field_B4;
	int field_B8;
	int field_BC;
	float m_fDefenseBonusTotalTime;
	float m_fDefenseBonusCurrentTime;
	float m_fSpeedBonusTotalTime;
	float m_fSpeedBonusCurrentTime;
	int field_D0;
	int field_D4;
	int field_D8;
	int field_DC;
	int field_E0;
	int field_E4;
	//int m_nCharacterHasPlayerAttacks;
struct {
	unsigned short b01 : 1;
	unsigned short b02 : 1;
	unsigned short b03 : 1;
	unsigned short b04 : 1;
	unsigned short b05 : 1;
	unsigned short b06 : 1;
	unsigned short b07 : 1;
	unsigned short b08 : 1;

	unsigned short b09 : 1;
	unsigned short b10 : 1;
	unsigned short b11 : 1;
	unsigned short b12 : 1;
	unsigned short b13 : 1;
	unsigned short b14 : 1;
	unsigned short b15 : 1;
	unsigned short b16 : 1;

	unsigned short b17 : 1;
	unsigned short b18 : 1;
	unsigned short b19 : 1;
	unsigned short b20 : 1;
	unsigned short b21 : 1;
	unsigned short b22 : 1;
	unsigned short b23 : 1;
	unsigned short b24 : 1;

	unsigned short b25 : 1;
	unsigned short b26 : 1;
	unsigned short b27 : 1;
	unsigned short b28 : 1;
	unsigned short b29 : 1;
	unsigned short b30 : 1;
	unsigned short b31 : 1;
	unsigned short b32 : 1;
} m_bCharacterHasPlayerAttacks;
	int field_EC;
	int field_F0;
	int field_F4;
	int field_F8;
	int m_nAuraType; //3 - max
	float m_fLifeBarSizeMain;
	float m_fLife;
	float m_fLifeBarSize;
	float m_fMusouBarSize;
	float m_fMusou;
	int field_114;
	float m_fRenbu_1;
	//float m_fRenbu_2;
	struct {
		unsigned short b01 : 1;
		unsigned short b02 : 1;
		unsigned short b03 : 1;
		unsigned short b04 : 1;
		unsigned short b05 : 1;
		unsigned short b06 : 1;
		unsigned short b07 : 1;
		unsigned short b08 : 1;

		unsigned short b09 : 1;
		unsigned short b10 : 1;
		unsigned short b11 : 1;
		unsigned short b12 : 1;
		unsigned short b13 : 1;
		unsigned short b14 : 1;
		unsigned short b15 : 1;
		unsigned short b16 : 1;

		unsigned short b17 : 1;
		unsigned short b18 : 1;
		unsigned short b19 : 1;
		unsigned short b20 : 1;
		unsigned short b21 : 1;
		unsigned short b22 : 1;
		unsigned short b23 : 1;
		unsigned short b24 : 1;

		unsigned short b25 : 1;
		unsigned short b26 : 1;
		unsigned short b27 : 1;
		unsigned short b28 : 1;
		unsigned short b29 : 1;
		unsigned short b30 : 1;
		unsigned short b31 : 1;
		unsigned short b32 : 1;
	} m_bRenbu_2;
	int field_120;
	float field_124;
	float field_128;
	int field_12C;
	float m_fAttackDamage;
	float field_134;
	float m_fSpeed;
	float m_fBlockSpeed;
	float m_fJumpHeight;
	int m_nTomes;
	int field_148;
	int* m_nSelectedCharacterParams;
	int field_150;
	int field_154;
	int m_nArmor;
	int* m_nCharacterAnimations;
	int field_160;
	int field_164;
	int field_168;
	int field_16C;
	int field_170;
	int field_174;
	int field_178;
	int field_17C;
	float m_fPos;
	int field_184;
	int field_188;
	int field_18C;
	int field_190;
	int field_194;
	int field_198;
	int field_19C;
	float m_fUnkPos;
	int field_1A4;
	int field_1A8;
	int field_1AC;
	int field_1B0;
	int field_1B4;
	int field_1B8;
	int field_1BC;
	int field_1C0;
	int field_1C4;
	int field_1C8;
	int field_1CC;
	float m_fPos_Y_Constant;
	int field_1D4;
	int field_1D8;
	int field_1DC;
	int field_1E0;
	int field_1E4;
	int field_1E8;
	int field_1EC;
	int field_1F0;
	int field_1F4;
	int field_1F8;
	int field_1FC;
	int field_200;
	int field_204;
	int field_208;
	int field_20C;
	int field_210;
	int field_214;
	int field_218;
	int field_21C;
	int field_220;
	Character* m_nCurrentEnemy;
	int field_228;
	int field_22C;
	int field_230;
	int field_234;
	int field_238;
	int field_23C;
	int field_240;
	int field_244;
	int field_248;
	int field_24C;
	int field_250;
	int field_254;
	int field_258;
	int field_25C;
	int field_260;
	int* m_nCurrentWeaponModel;
	int field_268;
	int field_26C;
	int field_270;
	int field_274;
	int field_278;
	int field_27C;
	int field_280;
	int field_284;
	int field_288;
	int field_28C;
	int field_290;
	int field_294;
	int field_298;
	int field_29C;
	int field_2A0;
	int field_2A4;
	int field_2A8;
	int field_2AC;
	int field_2B0;
	int field_2B4;
	int field_2B8;
	int field_2BC;
	int field_2C0;
	int field_2C4;
	int field_2C8;
	int field_2CC;
	int field_2D0;
	int field_2D4;

   

	BOOL CharacterIsInBlock()
	{
		return ((BOOL(__thiscall*)(Character*))(shared::base + 0xE5550))(this);
	}

	int Unk(float a1)
	{
		return ((int(__thiscall*)(Character*,float a1))(shared::base + 0xE17C0))(this, a1);
	}


	void SetPosXZ(__int64 x, __int64 z)
	{
		((void(__thiscall*)(Character*, __int64 x, __int64 z))(shared::base + 0xD26F0))(this,x, z);
	}

	double GetJumpHeight()
	{
		return ((double(__thiscall*)(Character*))(shared::base + 0xE1CF0))(this);
	}

	unsigned int UpdateControl()
	{
		return ((unsigned int(__thiscall*)(Character*))(shared::base + 0xEDF40))(this);
	}

	int UpdateControl2()
	{
		return ((int(__thiscall*)(Character*))(shared::base + 0xEDEE0))(this);
	}

	int UpdateCView()
	{
		return ((int(__thiscall*)(Character*))(shared::base + 0xEDFD0))(this);
	}

	virtual ~Character() {};
};


VALIDATE_SIZE(Character, 0x2D8);