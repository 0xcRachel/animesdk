#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FiveDimPrototype.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_929E979D9ED7139E;
class FDRIStateOperation;
class FiveDimRenderingPanel;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIVEDIMRENDERINGITEM_AUTOCOLLECT_OFFSET UNITYSDK_OFFSET(0x153A58C0)
#define FIVEDIMRENDERINGITEM_CHANGEITEMSTATE_OFFSET UNITYSDK_OFFSET(0x15399CC0)
#define FIVEDIMRENDERINGITEM_DEBUGDITHER_OFFSET UNITYSDK_OFFSET(0x153A7D00)
#define FIVEDIMRENDERINGITEM_DEBUGSETSHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x153A7D40)
#define FIVEDIMRENDERINGITEM_DEBUGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x153A7CC0)
#define FIVEDIMRENDERINGITEM_DISABLECUSTOMDATAASSHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x153A7AC0)
#define FIVEDIMRENDERINGITEM_FORCEOPENAUTOREG_OFFSET UNITYSDK_OFFSET(0x153A5B70)
#define FIVEDIMRENDERINGITEM_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x153A5E20)
#define FIVEDIMRENDERINGITEM_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x153A5D90)
#define FIVEDIMRENDERINGITEM_METHOD_5_E855A974FE0C8866_OFFSET UNITYSDK_OFFSET(0x153A5CF0)
#define FIVEDIMRENDERINGITEM_METHOD_5_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x153A5C00)
#define FIVEDIMRENDERINGITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x153A5BB0)
#define FIVEDIMRENDERINGITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x153A5CA0)
#define FIVEDIMRENDERINGITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x153A5D40)
#define FIVEDIMRENDERINGITEM_REFRESHITEMSTATE_OFFSET UNITYSDK_OFFSET(0x15399F20)
#define FIVEDIMRENDERINGITEM_SETDITHER_OFFSET UNITYSDK_OFFSET(0x153A6C60)
#define FIVEDIMRENDERINGITEM_SETPANEL_OFFSET UNITYSDK_OFFSET(0x15399C00)
#define FIVEDIMRENDERINGITEM_SETSHADOWSTRENGTH_1_OFFSET UNITYSDK_OFFSET(0x153A7A40)
#define FIVEDIMRENDERINGITEM_SETSHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x153A7450)
#define FIVEDIMRENDERINGITEM_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x153A6A60)
#define FIVEDIMRENDERINGITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x153A7E40)
#define FIVEDIMRENDERINGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x153A7D80)

inline static constexpr unsigned int FiveDimRenderingItem_TypeDefinitionIndex = 44458;

class FiveDimRenderingItem : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_Field_5_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FiveDimRenderingItem_TypeDefinitionIndex)->GetStaticField(0x10070);
	}
	::System::Collections::Generic::List_1<::FiveDimPrototype>* PrototypeList; // 0x18
	::System::Collections::Generic::List_1<::Class_1_929E979D9ED7139E*>* RegisteredInstanceList; // 0x20
	::FiveDimRenderingPanel* panel; // 0x28
	::System::Boolean isRegisted; // 0x30
	::UnityEngine::Vector4 instanceCustomData; // 0x34
	::RPG::GameCore::FDRIStateMaskEnum DebugState; // 0x44
	::System::Boolean isDirty; // 0x48
	::System::Boolean AutoRefreshState; // 0x49
	::System::Single DebugDitherAlpha; // 0x4C
	::System::Single DebugShadowStrengthID0; // 0x50
	::System::Single DebugShadowStrengthID1; // 0x54
	::System::Single DebugShadowStrengthID2; // 0x58
	::System::Single DebugShadowStrengthID3; // 0x5C
	::System::Single DebugShadowStrengthID4; // 0x60
	::System::Single DebugShadowStrengthID5; // 0x64
	::RPG::GameCore::FDRIStateMaskEnum Field_5_16; // 0x68
	::System::Boolean Field_5_17; // 0x6C
	::System::Boolean Field_5_18; // 0x6D
	::System::Collections::Generic::List_1<::FDRIStateOperation*>* stateOperations; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM__CCTOR_OFFSET))();
	}

	::System::Void AutoCollect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_AUTOCOLLECT_OFFSET))(this);
	}

	::System::Void ForceOpenAutoReg()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_FORCEOPENAUTOREG_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_5_E855A974FE0C8866()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_METHOD_5_E855A974FE0C8866_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_ONENABLE_OFFSET))(this);
	}

	::System::Void Method_5_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_METHOD_5_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void SetPanel(::FiveDimRenderingPanel* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanel*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_SETPANEL_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_5_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_METHOD_5_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void UpdateData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_UPDATEDATA_OFFSET))(this);
	}

	::System::Void ChangeItemState(::RPG::GameCore::FDRIStateMaskEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FDRIStateMaskEnum))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_CHANGEITEMSTATE_OFFSET))(this, a1);
	}

	::System::Void RefreshItemState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_REFRESHITEMSTATE_OFFSET))(this);
	}

	::System::Void SetDither(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_SETDITHER_OFFSET))(this, a1);
	}

	::System::Void SetShadowStrength(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_SETSHADOWSTRENGTH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void SetShadowStrength_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_SETSHADOWSTRENGTH_1_OFFSET))(this, a1);
	}

	::System::Void DisableCustomDataAsShadowStrength()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_DISABLECUSTOMDATAASSHADOWSTRENGTH_OFFSET))(this);
	}

	::System::Void DebugStateChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_DEBUGSTATECHANGE_OFFSET))(this);
	}

	::System::Void DebugDither()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_DEBUGDITHER_OFFSET))(this);
	}

	::System::Void DebugSetShadowStrength()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEM_DEBUGSETSHADOWSTRENGTH_OFFSET))(this);
	}
};
