#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF2B522AC5DB4E39.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"

namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_05702C8DFD69655C_METHOD_2_2638827D78DE1E10_OFFSET UNITYSDK_OFFSET(0xFC72F70)
#define CLASS_2_05702C8DFD69655C_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xFC72640)
#define CLASS_2_05702C8DFD69655C_METHOD_2_40BC4761DF7E363A_OFFSET UNITYSDK_OFFSET(0x107A8EF0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_4D305933A26B2E9B_OFFSET UNITYSDK_OFFSET(0x107A8C70)
#define CLASS_2_05702C8DFD69655C_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xFC73350)
#define CLASS_2_05702C8DFD69655C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xFC732F0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_617622CFF2CAC6C7_OFFSET UNITYSDK_OFFSET(0xFC730B0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xFC725B0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_7D78C653058AFBD7_OFFSET UNITYSDK_OFFSET(0xFC72B90)
#define CLASS_2_05702C8DFD69655C_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x107A8A60)
#define CLASS_2_05702C8DFD69655C_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x107A8DE0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_A82476017E5C2C8D_OFFSET UNITYSDK_OFFSET(0x107A9390)
#define CLASS_2_05702C8DFD69655C_METHOD_2_A8D49717FC0DEBE5_OFFSET UNITYSDK_OFFSET(0xFC733B0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_B977FAFC3F3CD584_OFFSET UNITYSDK_OFFSET(0xFC731B0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_D5DC2583559A4EFC_OFFSET UNITYSDK_OFFSET(0xFC72830)
#define CLASS_2_05702C8DFD69655C_METHOD_2_DF606F1BC273FE84_1_OFFSET UNITYSDK_OFFSET(0xFC72DF0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0xFC72CC0)
#define CLASS_2_05702C8DFD69655C_METHOD_2_EBD6673C1D3E9E54_OFFSET UNITYSDK_OFFSET(0x107A9170)
#define CLASS_2_05702C8DFD69655C_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xFC72C60)
#define CLASS_2_05702C8DFD69655C_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xFC72C00)
#define CLASS_2_05702C8DFD69655C__CTOR_OFFSET UNITYSDK_OFFSET(0xFC73230)

inline static constexpr unsigned int Class_2_05702C8DFD69655C_TypeDefinitionIndex = 55095;

class Class_2_05702C8DFD69655C : public ::Class_1_BF2B522AC5DB4E39
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::RPG::GameCore::EntityTypeMask Field_2_3; // 0x28
	::System::UInt32 Field_2_1; // 0x30
	::System::Boolean Field_2_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_2_40BC4761DF7E363A(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_40BC4761DF7E363A_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBD6673C1D3E9E54(::RPG::GameCore::EntityTypeMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_EBD6673C1D3E9E54_OFFSET))(this, a1);
	}

	::System::Void Method_2_A82476017E5C2C8D(::RPG::GameCore::PreloadGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_A82476017E5C2C8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D305933A26B2E9B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_4D305933A26B2E9B_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_2_D5DC2583559A4EFC(::RPG::GameCore::PreloadGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_D5DC2583559A4EFC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D78C653058AFBD7(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_7D78C653058AFBD7_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_DF606F1BC273FE84_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2638827D78DE1E10(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_2638827D78DE1E10_OFFSET))(this, a1);
	}

	::System::Void Method_2_617622CFF2CAC6C7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_617622CFF2CAC6C7_OFFSET))(this, a1, a2);
	}

	static ::System::UInt32 Method_2_B977FAFC3F3CD584(::RPG::GameCore::EntityTypeMask a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::EntityTypeMask))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_B977FAFC3F3CD584_OFFSET))(a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_A8D49717FC0DEBE5(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + CLASS_2_05702C8DFD69655C_METHOD_2_A8D49717FC0DEBE5_OFFSET))(this, P0);
	}
};
