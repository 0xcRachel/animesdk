#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_6.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_61097837E1D530F4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x14AD1980)
#define CLASS_1_61097837E1D530F4_EQUALS_OFFSET UNITYSDK_OFFSET(0x14AD18A0)
#define CLASS_1_61097837E1D530F4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14AD1AB0)
#define CLASS_1_61097837E1D530F4_GET_FOURRARITYAVATARRANKLEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1870)
#define CLASS_1_61097837E1D530F4_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x14AD1740)
#define CLASS_1_61097837E1D530F4_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1750)
#define CLASS_1_61097837E1D530F4_GET_LIGHTCONELEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1830)
#define CLASS_1_61097837E1D530F4_GET_LIGHTCONEPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1850)
#define CLASS_1_61097837E1D530F4_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1770)
#define CLASS_1_61097837E1D530F4_GET_RELICSET2AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x14AD17F0)
#define CLASS_1_61097837E1D530F4_GET_RELICSET2RARITY_OFFSET UNITYSDK_OFFSET(0x14AD1810)
#define CLASS_1_61097837E1D530F4_GET_RELICSET4AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x14AD17B0)
#define CLASS_1_61097837E1D530F4_GET_RELICSET4RARITY_OFFSET UNITYSDK_OFFSET(0x14AD17D0)
#define CLASS_1_61097837E1D530F4_GET_TRACETREEKEY_OFFSET UNITYSDK_OFFSET(0x14AD1790)
#define CLASS_1_61097837E1D530F4_METHOD_1_087D47755D9D5823_1_OFFSET UNITYSDK_OFFSET(0x14AD1C20)
#define CLASS_1_61097837E1D530F4_METHOD_1_087D47755D9D5823_OFFSET UNITYSDK_OFFSET(0x14AD1B10)
#define CLASS_1_61097837E1D530F4_SET_FOURRARITYAVATARRANKLEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1880)
#define CLASS_1_61097837E1D530F4_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1760)
#define CLASS_1_61097837E1D530F4_SET_LIGHTCONELEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1840)
#define CLASS_1_61097837E1D530F4_SET_LIGHTCONEPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1860)
#define CLASS_1_61097837E1D530F4_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1780)
#define CLASS_1_61097837E1D530F4_SET_RELICSET2AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x14AD1800)
#define CLASS_1_61097837E1D530F4_SET_RELICSET2RARITY_OFFSET UNITYSDK_OFFSET(0x14AD1820)
#define CLASS_1_61097837E1D530F4_SET_RELICSET4AVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x14AD17C0)
#define CLASS_1_61097837E1D530F4_SET_RELICSET4RARITY_OFFSET UNITYSDK_OFFSET(0x14AD17E0)
#define CLASS_1_61097837E1D530F4_SET_TRACETREEKEY_OFFSET UNITYSDK_OFFSET(0x14AD17A0)
#define CLASS_1_61097837E1D530F4__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD1890)
#define CLASS_1_61097837E1D530F4___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x14AD1D40)
#define CLASS_1_61097837E1D530F4___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14AD1D50)

inline static constexpr unsigned int Class_1_61097837E1D530F4_TypeDefinitionIndex = 48604;

class Class_1_61097837E1D530F4 : public ::System::Object
{
public:
	::System::String* _TraceTreeKey_k__BackingField; // 0x10
	::System::UInt32 _RelicSet2AverageLevel_k__BackingField; // 0x18
	::RPG::GameCore::CombatPowerRelicRarityType _RelicSet4Rarity_k__BackingField; // 0x1C
	::System::UInt32 _FourRarityAvatarRankLevel_k__BackingField; // 0x20
	::System::UInt32 _LightConeLevel_k__BackingField; // 0x24
	::Struct_2_019938BC9C50B169_6 _Identifier_k__BackingField; // 0x28
	::System::UInt32 _LightConePromotionLevel_k__BackingField; // 0x2C
	::System::UInt32 _Level_k__BackingField; // 0x30
	::RPG::GameCore::CombatPowerRelicRarityType _RelicSet2Rarity_k__BackingField; // 0x34
	::System::UInt32 _RelicSet4AverageLevel_k__BackingField; // 0x38
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x3C

	::System::Void _ctor(::Struct_2_019938BC9C50B169_6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_6))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_6 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::String* get_TraceTreeKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_TRACETREEKEY_OFFSET))(this);
	}

	::System::Void set_TraceTreeKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_TRACETREEKEY_OFFSET))(this, a1);
	}

	::System::UInt32 get_RelicSet4AverageLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_RELICSET4AVERAGELEVEL_OFFSET))(this);
	}

	::System::Void set_RelicSet4AverageLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_RELICSET4AVERAGELEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::CombatPowerRelicRarityType get_RelicSet4Rarity()
	{
		return ((::RPG::GameCore::CombatPowerRelicRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_RELICSET4RARITY_OFFSET))(this);
	}

	::System::Void set_RelicSet4Rarity(::RPG::GameCore::CombatPowerRelicRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_RELICSET4RARITY_OFFSET))(this, a1);
	}

	::System::UInt32 get_RelicSet2AverageLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_RELICSET2AVERAGELEVEL_OFFSET))(this);
	}

	::System::Void set_RelicSet2AverageLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_RELICSET2AVERAGELEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::CombatPowerRelicRarityType get_RelicSet2Rarity()
	{
		return ((::RPG::GameCore::CombatPowerRelicRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_RELICSET2RARITY_OFFSET))(this);
	}

	::System::Void set_RelicSet2Rarity(::RPG::GameCore::CombatPowerRelicRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_RELICSET2RARITY_OFFSET))(this, a1);
	}

	::System::UInt32 get_LightConeLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_LIGHTCONELEVEL_OFFSET))(this);
	}

	::System::Void set_LightConeLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_LIGHTCONELEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_LightConePromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_LIGHTCONEPROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_LightConePromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_LIGHTCONEPROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_FourRarityAvatarRankLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GET_FOURRARITYAVATARRANKLEVEL_OFFSET))(this);
	}

	::System::Void set_FourRarityAvatarRankLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_SET_FOURRARITYAVATARRANKLEVEL_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_1_61097837E1D530F4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_087D47755D9D5823(::Class_1_61097837E1D530F4* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::Boolean(*)(::Class_1_61097837E1D530F4*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_METHOD_1_087D47755D9D5823_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_087D47755D9D5823_1(::Class_1_61097837E1D530F4* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::Boolean(*)(::Class_1_61097837E1D530F4*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4_METHOD_1_087D47755D9D5823_1_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61097837E1D530F4___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
