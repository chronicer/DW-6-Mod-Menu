#include "gui.h"
#include <Windows.h>
#include <string>
#include "../cheat/cheat.h"
#include "../injector/injector.hpp"
#include "../IniReader.h"
#include "../KeyBinds.h"
#include "../KeyBind.h"
#include "../kiero.h"

#include "../game/Character.h"
#include "../game/Character.cpp"
#include "../game/Player.cpp"
#include "../game/Player.h"
#include "../game/BriefingGUI.h"


#include "../game/BattleInformation.h"

#include "../game/Battle/UnitInfoForSpawnFull.h"
#include "../game/UnitsOnMap/UnitOnMap.h"
#include "../game/UnitsOnMap/UnitsInTargets.h"





#include "../minhook/include/MinHook.h"

#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_win32.h"
#include "../imgui/imgui_impl_dx9.h"

#include <string>
#include <All.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include "../imgui/imgui_internal.h"
#include <CPrimSprt.h>
#pragma warning(disable : 4996)


LPDIRECTINPUT8 dinput;
LPDIRECTINPUTDEVICE8 keyboard;
bool once1 = false;


IDirectInput8* g_pDirectInput = nullptr;
IDirectInputDevice8* g_pKeyboardDevice = nullptr;

HWND hwnd = nullptr; // Дескриптор окна

typename char __stdcall func(int* arg1, int* arg2, int arg3, int arg4);

int SetAction(int ActionId, Character* character,float a1, float a2)
{
	return ((int(__user_code*)(int ActionId, Character * character, float a1, float a2))(shared::base + 0xE1D80))(ActionId,character,a1,a2);
}

int* GetFreeMemoryPointer()
{
	return ((int*(__cdecl*)())(shared::base + 0x3120))();
}

DWORD* SetFreeMemoryPointer(int* a1, int a2)
{
	return ((DWORD* (__cdecl*)(int* a1, int a2))(shared::base + 0x3120))(a1,a2);
}

void VectorConstruct(int* a1, int a2,int a3, void* a4, void(__thiscall* a5)(void*))
{
	((void* (__stdcall*)(int* a1, int a2, int a3, void* a4, void(__thiscall * a5)(void*)))(shared::base + 0x3120))(a1, a2, a3, a4, a5);
}

char* CreateEnemyMaybe(int* Mem)
{
	return ((char* (__stdcall*)(int* Mem))(shared::base + 0xD6A70))(Mem);
}

int Unk222()
{
	//return ((int* (__cdecl*)(int a1))(shared::base + 0x138F40))(a1);
	return ((int (__cdecl*)())(shared::base + 0x4093E0))();
}

const void ReturnSelectedChara(int id1, int id2)
{
	return ((const void(__stdcall*)(int id1, int id2))(shared::base + 0x29C40))(id1,id2);
}

int GamePrint(char* const Buffer, const char* const Format, int a4, int exp)
{
	return ((int(*)(char* const Buffer, const char* const Format, int a4, int exp))(shared::base + 0x2AB50A))(Buffer, Format,a4,exp);
}

int ExpShow(int* a1, int* a2, char* const Buffer, int a4,int a5)
{
	return ((int(__stdcall*)(int* a1, int * a2, char* const Buffer, int a4,int a5))(shared::base + 0x16B5B0))(a1, a2,Buffer,a4,a5);
}

int* ExpShowMain(CPrimSprt* a1, float a2, int a3, int a4, int a5)
{
	return ((int*(__cdecl*)(CPrimSprt * a1, float a2, int a3, int a4, int a5))(shared::base + 0x16E0A0))(a1, a2, a3, a4, a5);
}

void ShowStatsMain(unsigned int BriefGUI)
{
	((void(__stdcall*)(unsigned int BriefGUI))(shared::base + 0x1EDF20))(BriefGUI);
}

void ShowStatsMainMain(int* BriefGUI)
{
	((void(__stdcall*)(int* BriefGUI))(shared::base + 0x1EDED0))(BriefGUI);
}

int SetNameFromResourceFont(void* obj, float a2, float a3, int a4, int a5, int a6)
{
	return ((int(__thiscall*)(void* obj, float a2, float a3, int a4, int a5, int a6))(shared::base + 0x1EDF20))(obj,a2,a3,a4,a5,a6);
}

int PersonalMenuCall(BriefingGUI* brief)
{
	return ((int(__stdcall*)(BriefingGUI * brief))(shared::base + 0x1FADB0))(brief);
}


const char* cmdLineCall()
{
	return ((const char* (*)())(shared::base + 0x2B6CA8))();
}

LONG64* UnitCreateMaybe(int a1)
{
	return ((LONG64* (__stdcall*)(int a1))(shared::base + 0x31530))(a1);
}

int UnitCreateMaybe2(int a1, int* a2)
{
	return ((int (__stdcall*)(int a1,int* a2))(shared::base + 0x300E0))(a1,a2);
}

int* UnitCreateMaybe3(int CharacterType)
{
	return ((int*(__fastcall*)(int CharacterType))(shared::base + 0xFDFF0))(CharacterType);
}

long* UnitCreateMaybe4(int* a1)
{
	return ((long* (__stdcall*)(int* a1))(shared::base + 0x130800))(a1);
}

int UnitCreateMaybe5(int* a1)
{
	return ((int (__stdcall*)(int* a1))(shared::base + 0x12FE70))(a1);
}

int UnitCreateMaybe6(int* a1)
{
	return ((int(__stdcall*)(int* a1))(shared::base + 0x1307B0))(a1);
}

int UnitCreateMaybe7(int* a1,int a2)
{
	return ((int(__stdcall*)(int* a1, int a2))(shared::base + 0x12F900))(a1,a2);
}

void UnitCreateMaybe8(int a1, int a2, float a3)
{
	 ((void(__cdecl*)(int a1, int a2, float a3))(shared::base + 0x126260))(a1, a2,a3);
}

long* GlobalUnitCreateMaybe(int* a1)
{
	return ((long*(__stdcall*)(int* a1))(shared::base + 0x31530))(a1);
}

CPrimSprt* CPrimSprtCreate(int a1, float a2)
{
	return ((CPrimSprt*(__cdecl*)(int a1, float a2))(shared::base + 0x9810))(a1, a2);
}

void LevelShow2(int* a1, float a2, float a3, char a4)
{
	((void(__stdcall*)(int* a1, float a2, float a3, char a4))(shared::base + 0x16DBF0))(a1,a2,a3,a4);
}


char LevelShow(int* a1, int* a2, float a3, char a4)
{
	char result;
	__asm
	{
		mov eax, a1
		mov ebx, a2
		push dword ptr[a4]
		push a3
		push ebx
		push eax
		call dword ptr[shared::base + 0x16DBF0]
		mov result, al
	}
	return result;
}

typename char __stdcall func(int* arg1, int* arg2, int arg3, int arg4)
{
	char result;
	__asm
	{
		mov eax, arg1
		mov ebx, arg2
		push arg3
		push arg4
		push ebx
		push eax
		call dword ptr[shared::base + 0x16DBF0]
		mov result, al
	}
	return result;
}

unsigned int TimeUp(int* a1)
{
	return ((unsigned int(__thiscall*)(int* a1))(shared::base + 0x14F980))(a1);
}

bool IsKeyPressed(unsigned int Key)
{

	unsigned int GameKeyPressed = injector::ReadMemory<unsigned int>(shared::base + 0x35BC08, true);
	signed int GameIsKeyPressed = injector::ReadMemory<signed int>(shared::base + 0x35BC18, true);
	int GameIsKeyPressed2 = injector::ReadMemory<int>(shared::base + 0x35BC0C, true);

	if (Key == GameKeyPressed && GameIsKeyPressed == -1 && GameIsKeyPressed2 == 128)
		return true;
	else return false;
}

// Renders gui for cheats
void gui::RenderGUI() noexcept
{


	static bool paused = false;

//	if (ImGui::IsKeyPressed(0x2D)) 
	//	show = !show;

	//if (!show && IsKeyPressed(0xD2))
		//show = !show;

	if (GetAsyncKeyState(0x2D) & 1)
		show = !show;
	
	//if (GetKeyState(VK_SPACE) & 0x8000) 
		//show = !show;
			// Логика обработки нажатия клавиши
		//}


	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (show)
	{

		

		ImGui::Begin("DW 6 Mod Menu", NULL, ImGuiWindowFlags_NoCollapse);
		ImGui::SetNextWindowSize({width, height});
		ImGuiIO io = ImGui::GetIO();
		io.MouseDrawCursor = true;
		io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange;
		if (ImGui::BeginTabBar("NOTITLE", ImGuiTabBarFlags_NoTooltip))
		{

			//ImGuiCustom();

			if (ImGui::BeginTabItem("Player"))
			{
				//ImGui::InputScalar("Forest draw fix", ImGuiDataType_U8, (void*)(shared::base+0x94786));
				ImGui::Checkbox("Increase draw distance", &gui::IncreaseDrawDistance);

				if (gui::IncreaseDrawDistance)
				{
					injector::WriteMemory<byte>(shared::base + 0x94786, 116, true);
					injector::WriteMemory<byte>(shared::base + 0x949C1, 117, true);
					injector::WriteMemory<byte>(shared::base + 0x94743, 10, true);
					injector::WriteMemory<byte>(shared::base + 0x94BD9, 0, true);
					injector::WriteMemory<byte>(shared::base + 0x94BF7, 1, true);
					injector::WriteMemory<float>(shared::base + 0x3152E0, 30000.0, true);
					injector::WriteMemory<byte>(shared::base + 0x8FB37, 150, true);
				}
				else
				{
					injector::WriteMemory<byte>(shared::base + 0x94786, 117, true);
					injector::WriteMemory<byte>(shared::base + 0x949C1, 116, true);
					injector::WriteMemory<byte>(shared::base + 0x94743, 1, true);
					injector::WriteMemory<byte>(shared::base + 0x94BD9, 1, true);
					injector::WriteMemory<byte>(shared::base + 0x94BF7, 0, true);
					injector::WriteMemory<float>(shared::base + 0x3152E0, 8000.0, true);
					injector::WriteMemory<byte>(shared::base + 0x8FB37, 30, true);
				}

				//Character* player = (Character*)((shared::base + 0x35C4BC)+0xEC0);
				unsigned int PlayerPointer = injector::ReadMemory<unsigned int>(shared::base + 0x35C4BC, true);
				unsigned int GUIMaybe = injector::ReadMemory<unsigned int>(shared::base + 0x35C588, true);
				unsigned int BriefMain = injector::ReadMemory<unsigned int>(shared::base + 0x35C5EC, true);
				int* BriefMain2 = 0;
				int* GUIMaybe2 = 0;
				

				unsigned int BriefGUI = (injector::ReadMemory<unsigned int>(shared::base + 0x35C5EC, true)+0x10E20);

				

				

				if (PlayerPointer) {

					Player* player = (Player*)(injector::ReadMemory<unsigned int>(shared::base + 0x35C4BC, true) + 0xEC0);

					Character* characters[40];
					unsigned j = 0x8;
					for (int i = 0; i < 40; i++) {
						unsigned int mainPointer = (injector::ReadMemory<unsigned int>(shared::base + 0x35C4BC, true) + 0x8);
						unsigned int abc = injector::ReadMemory<unsigned int>(injector::ReadMemory<unsigned int>(mainPointer, true) + j, true);
						if (abc) {
							//characters[i] = (Character*)injector::ReadMemory<unsigned int>(abc, true);
							//characters[i] = (Character*)abc;
							///	characters[i] = (Character*)(injector::ReadMemory<unsigned int>(mainPointer + j, true));

								//characters[i]->m_nCharacterControlType = 1;
								//if (player->m_nCViewPointer) {
									//characters[i]->m_nCViewPointer = player->m_nCViewPointer;
									//player->m_nCViewPointer = 0;
								//}
								//characters[i]->UpdateCView();
								//characters[i]->UpdateControl();
								//characters[i]->m_fLife = 0.0f;
								//if (characters[i]->m_nCurrentAction > 9 && characters[i]->m_nCurrentAction < 350) {
								//	characters[i]->m_nCurrentAction = 390;
								//}
							//j += 0x4;

							//ImGui::InputScalar("CPU action", ImGuiDataType_U32, &characters[i]->m_nCurrentAction);
						}
					}

					//Character* player = All::Instance.player;
					if (player) {

						ImGui::InputScalar("Player action", ImGuiDataType_U32, &player->m_nCurrentAction);
						ImGui::InputScalar("Player life", ImGuiDataType_Float, &player->m_fLife);
						ImGui::InputScalar("Player musou", ImGuiDataType_Float, &player->m_fMusou);
						ImGui::InputScalar("Player attack", ImGuiDataType_Float, &player->m_fAttackDamage);
						ImGui::InputScalar("Player speed", ImGuiDataType_Float, &player->m_fSpeed);
						ImGui::InputScalar("Player aura type", ImGuiDataType_U8, &player->m_nAuraType);

						if (ImGui::Button("Spawn"))
						{

							UnitCreateMaybe8(0, 0, 0.0);
						//	UnitCreateMaybe8(0, 0, 0.0);
						}


						//if (player->m_nCurrentAction == 321)
						//	player->m_nCurrentAction = 339;

						if (player->m_nCurrentAction > 320 && player->m_nCurrentAction < 350) {
							int abc = injector::ReadMemory<unsigned int>(shared::base + 0x35C434, true);
							int abc2 = injector::ReadMemory<unsigned int>(shared::base + 0x35C4E4, true);



							//Player* player2 = new Player();
							//player2->Init();
							//player2 = (Player*)shared::base + 0x31F4C4;
							/*int* GuiMaybe = injector::ReadMemory<int*>(shared::base + 0x35C588, true);
							int GuiMaybeInit = injector::ReadMemory<int>(shared::base + 0x35C588, true);
							int PrimSprt = injector::ReadMemory<int>(shared::base + 0x35C5EC, true);
							
							int* PrimSprtPointer = 0;
							int* GuiMaybe2 = 0;
							if (PrimSprt)
								PrimSprtPointer = injector::ReadMemory<int*>(PrimSprt+0x10530, true);
							
							if (GuiMaybeInit)
								GuiMaybe2 = injector::ReadMemory<int*>(GuiMaybeInit, true);
							float* abc3 = 0;
							float* abd = 0;
							abc3[0] = 0.0 + 1068.0;
							abd[0] = 0.0 + 24;
							//CPrimSprt* Sprite = CPrimSprtCreate(0, 0.02f);*/
							//if (PrimSprtPointer)

							//int* Time = (int*)injector::ReadMemory<int>(shared::base + 0x35C518, true);
								//TimeUp(Time);
								//LevelShow2(PrimSprtPointer, 24.0f, 325.0f,255);
								//func(GuiMaybe2, PrimSprtPointer, 1016.0,255);
								//LevelShow(GuiMaybe, PrimSprtPointer,3,1016.0,24.0,255);
						//	ImGui::InputScalar("GuiMaybe", ImGuiDataType_U32, &GuiMaybe);
							//ImGui::InputScalar("GuiMaybe", ImGuiDataType_U32, &GuiMaybe2);
							//ImGui::InputScalar("PrimSprt", ImGuiDataType_U32, &PrimSprtPointer);
							//ExpShowMain(Sprite, 12.0, injector::ReadMemory<int>(shared::base + 0x35C588,true), 120, 121);
							//if (Sprite)
								//ImGui::InputScalar("Player aura type", ImGuiDataType_U8, &Sprite->field_4);
							//Sprite->field_74 = 11;
							//Sprite->field_78 = 11;
						//	Sprite->field_78 = 8;
							//UnitCreateMaybe(shared::base + 0x35C434);
							//UnitCreateMaybe2(abc+0x90,&abc2);
							//UnitCreateMaybe3(150);
						//	UnitCreateMaybe4(injector::ReadMemory<int*>(shared::base + 0x35C4E4, true)); //works
							//UnitCreateMaybe5(injector::ReadMemory<int*>(shared::base + 0x35C4E4, true));
							//GlobalUnitCreateMaybe(injector::ReadMemory<int*>(shared::base + 0x35C434, true));
							//UnitCreateMaybe6(injector::ReadMemory<int*>(shared::base + 0x35C4E4, true));
						//	UnitCreateMaybe7(injector::ReadMemory<int*>(shared::base + 0x35C4E4, true),1);

							
							//player->CharacterIsInBlock();
							//CharacterIsInBlock(player);
							//player->m_nCurrentAction = 0;
							//player->SetPosXZ(4000, 90000);
							//player->m_nCurrentAction = 390;
							//player->Unk(1000.0f);
							//Player* player2 = new Player();
							//player2->Init();
							/*int* FreeMemory = GetFreeMemoryPointer();
							DWORD* SetMemory = SetFreeMemoryPointer(FreeMemory, 0x2F0);
							int v5;
							if (SetMemory)
							{
								v5 = SetMemory[2] & 0xF;
								if (v5)
									v5 = 16 - v5;
								SetMemory[2] += v5;
								SetMemory = (DWORD*)SetMemory[2];
							}
							if (SetMemory) {

								//CreateEnemyMaybe((int*)SetMemory);
								//VectorConstruct((int*)SetMemory, 0x2F0, 2, ((void(__thiscall*)(Character*))(shared::base + 0xEDE40))(player2), 0)
							}*/
							//ReturnSelectedChara(10,9);
							//Player* player2 = new Player();
							//player2 = (Player*)((shared::base + 0x35C4BC) + 0xEC0);
							//player2->Init();
							//Unk222();

							//player->Init();
							//player->SetAction(390, player, 1.0f, 1.0f);
							//ImGui::Text("Jump Height (%f)", player->GetJumpHeight());
						}
					}
				}

				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Battle"))
			{
				BattleInformation* Battle = (BattleInformation*)injector::ReadMemory<unsigned int>(shared::base + 0x35C430, true);

				if (Battle) {
					ImGui::InputScalar("Allied forces color", ImGuiDataType_U32, &Battle->m_nTeamSettings[0].m_nTeamColor);
					ImGui::InputScalar("Allied forces damage to", ImGuiDataType_U32, &Battle->m_nTeamSettings[0].m_nDamageToTeamId);
					//ImGui::InputScalar("Condition unit id", ImGuiDataType_U32, &Battle->m_nConditionAlliedUnitId);
					//ImGui::InputScalar("Morale", ImGuiDataType_U32, &Battle->m_nMorale);
					ImGui::InputScalar("Enemy forces color", ImGuiDataType_U32, &Battle->m_nTeamSettings[1].m_nTeamColor);
					ImGui::InputScalar("Enemy forces damage to", ImGuiDataType_U32, &Battle->m_nTeamSettings[1].m_nDamageToTeamId);
				}

				ImGui::EndTabItem();
			}

			ImGui::EndTabBar();
		}
		ImGui::End();
	}

	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());

}

void gui::SaveConfig() noexcept
{
	//CIniReader iniReader("ModMenu.ini");

	//iniReader.WriteInteger("Menu", "OpenMenuHotkey", menuKey);
	//iniReader.WriteInteger("Menu", "PauseGameWhenMenu", usesPause);
}

void gui::LoadConfig() noexcept
{
	//CIniReader iniReader("ModMenu.ini");

	//menuKey = iniReader.ReadInteger("Menu", "OpenMenuHotkey", 45);
	//usesPause = iniReader.ReadInteger("Menu", "PauseGameWhenMenu", 1) == 1;
}

// Resets gui variables
void gui::Reset() noexcept
{
	width = 900.0f;
	height = 600.0f;
	menuKey = 45;
	usesPause = true;
}

