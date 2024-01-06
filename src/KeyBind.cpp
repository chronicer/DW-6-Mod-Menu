#include <Windows.h>
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "KeyBind.h"

// Creates hotkey, for second parameter you need to insert pointer to the key to change
void KeyBind::Hotkey(const char* label, unsigned int* k) noexcept
{
	const ImVec2 size = ImVec2(100.0f, 0.0f);
	static bool waitingforkey = false;

	ImGui::TextUnformatted(label);
	ImGui::SameLine();
	if (!waitingforkey) {
		if (ImGui::Button(KeyBind::GetStringFromKey(*k), size))
			waitingforkey = true;
	}
	else if (waitingforkey)
	{
		ImGui::Button("...", size);
		waitingforkey = !SetToPressedKey(k);
	}
}

// Checks key press passed in first parameter
bool KeyBind::IsKeyPressed(unsigned int k) noexcept
{
	if (k == KeyCodes[0])
		return false;

	return ImGui::IsKeyPressed(k, false);
}

// Returns name of key given in first parameter
const char* KeyBind::GetStringFromKey(unsigned int key) noexcept
{
	char name[128];
	auto scanCode = MapVirtualKey(key, MAPVK_VK_TO_VSC);
	switch (key)
	{
	case VK_LEFT: case VK_UP: case VK_RIGHT: case VK_DOWN:
	case VK_RCONTROL: case VK_RMENU:
	case VK_LWIN: case VK_RWIN: case VK_APPS:
	case VK_PRIOR: case VK_NEXT:
	case VK_END: case VK_HOME:
	case VK_INSERT: case VK_DELETE:
	case VK_DIVIDE:
	case VK_NUMLOCK:
		scanCode |= KF_EXTENDED;
	default:
		GetKeyNameText(scanCode << 16, (LPSTR)name, 128);
		break;
	}
	return key == 0 ? "None" : name;
}

bool KeyBind::SetToPressedKey(unsigned int *key) noexcept
{
	Sleep(20);
	for (auto& Key : KeyCodes)
	{
		if (IsKeyPressed(VK_LBUTTON) || IsKeyPressed(VK_RBUTTON) || IsKeyPressed(VK_MENU) /* unexpected random alt presses */)
			continue;

		if (IsKeyPressed(VK_ESCAPE))
		{
			*key = KeyCodes[0];
			return true;
			break;
		}

		if (IsKeyPressed(Key)) {
			*key = Key;
			return true;
			break;
		}
	}
	return false;
}