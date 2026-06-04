#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DeployPuzzleBaseState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_CHANGEBASEPOINTSTATE_OFFSET UNITYSDK_OFFSET(0x170B2500)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GETSTONEPLACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x170B2DC0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_HASSTONEPLACED_OFFSET UNITYSDK_OFFSET(0x170B2DB0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0x170B2F80)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_OWNERENTITYREF_OFFSET UNITYSDK_OFFSET(0x170B32B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_PLACEDSTONEPROPID_OFFSET UNITYSDK_OFFSET(0x170B3270)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_PROPCMPT_OFFSET UNITYSDK_OFFSET(0x170B32C0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_PROPID_OFFSET UNITYSDK_OFFSET(0x170B3290)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ISINPUZZLEANSWER_OFFSET UNITYSDK_OFFSET(0x170B2FD0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONPICKUPSTONE_OFFSET UNITYSDK_OFFSET(0x170B2940)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONPLACESTONE_OFFSET UNITYSDK_OFFSET(0x170B2760)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONPUZZLEDESTROY_OFFSET UNITYSDK_OFFSET(0x170B3210)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONPUZZLEFINISHED_OFFSET UNITYSDK_OFFSET(0x170B31D0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONRESET_OFFSET UNITYSDK_OFFSET(0x170B2470)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONSWAPSTONE_OFFSET UNITYSDK_OFFSET(0x170B2B00)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x170B2D10)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_SET_PLACEDSTONEPROPID_OFFSET UNITYSDK_OFFSET(0x170B3280)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_SET_PROPID_OFFSET UNITYSDK_OFFSET(0x170B32A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x170B32E0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x170B32D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBasePoint_TypeDefinitionIndex = 73038;

	class DeployPuzzleBasePoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBasePoint_TypeDefinitionIndex)->GetStaticField(0x14340);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBasePoint_TypeDefinitionIndex)->GetStaticField(0x7B20);
		}
		::System::UInt32 _PlacedStonePropID_k__BackingField; // 0x18
		::System::UInt32 _PropID_k__BackingField; // 0x1C
		::RPG::Client::Prop::DeployPuzzleBaseState Field_5_4; // 0x20
		::RPG::Client::Prop::DeployPuzzleBoard* Field_5_5; // 0x28
		::RPG::GameCore::GameEntity* Field_5_6; // 0x30
		::RPG::GameCore::PropComponent* Field_5_7; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT__CCTOR_OFFSET))();
		}

		::System::Void OnReset(::System::UInt32 a1, ::RPG::Client::Prop::DeployPuzzleBoard* a2, ::RPG::GameCore::PropComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Prop::DeployPuzzleBoard*, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONRESET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlaceStone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONPLACESTONE_OFFSET))(this, a1);
		}

		::System::Void OnPickupStone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONPICKUPSTONE_OFFSET))(this);
		}

		::System::Void OnSwapStone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONSWAPSTONE_OFFSET))(this);
		}

		::System::Void RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_REFRESHSTATE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetStonePlaceTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GETSTONEPLACETRANSFORM_OFFSET))(this);
		}

		::System::Void ChangeBasePointState(::RPG::Client::Prop::DeployPuzzleBaseState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DeployPuzzleBaseState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_CHANGEBASEPOINTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsInPuzzleAnswer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ISINPUZZLEANSWER_OFFSET))(this);
		}

		::System::Void OnPuzzleFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONPUZZLEFINISHED_OFFSET))(this);
		}

		::System::Void OnPuzzleDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_ONPUZZLEDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_ISACTIVATE_OFFSET))(this);
		}

		::System::Boolean get_HasStonePlaced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_HASSTONEPLACED_OFFSET))(this);
		}

		::System::UInt32 get_PlacedStonePropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_PLACEDSTONEPROPID_OFFSET))(this);
		}

		::System::Void set_PlacedStonePropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_SET_PLACEDSTONEPROPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_PROPID_OFFSET))(this);
		}

		::System::Void set_PropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_SET_PROPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_OWNERENTITYREF_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* get_PropCmpt()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBASEPOINT_GET_PROPCMPT_OFFSET))(this);
		}
	};
}
