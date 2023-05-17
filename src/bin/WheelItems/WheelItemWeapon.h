#pragma once
#include "WheelItem.h"
class WheelItemWeapon : public WheelItem
{
public:
	void DrawSlot(ImVec2 a_center, bool a_hovered) override;
	void DrawHighlight(ImVec2 a_center) override;
	bool IsActive(RE::TESObjectREFR::InventoryItemMap& a_inv) override;
	bool IsAvailable(RE::TESObjectREFR::InventoryItemMap& a_inv) override;
	WheelItemWeapon(RE::TESObjectWEAP* a_weapon);

	void ActivateItemLeft() override;
	void ActivateItemRight() override;

private:
	RE::TESObjectWEAP* _weapon;
	std::pair<RE::TESBoundObject*, uint32_t> getInvBoundObject(RE::TESObjectREFR::InventoryItemMap& a_inv);
	void equipItem(bool a_toRight = true);
};
