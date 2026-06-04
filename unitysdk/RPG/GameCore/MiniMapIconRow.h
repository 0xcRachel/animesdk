#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiniMapIconOrientationType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19699260)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTICONPATH_OFFSET UNITYSDK_OFFSET(0x19699CB0)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTMISSIONICONPATH_OFFSET UNITYSDK_OFFSET(0x19699D00)
#define RPG_GAMECORE_MINIMAPICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19699CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniMapIconRow_TypeDefinitionIndex = 11938;

	class MiniMapIconRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FiveDimBillboardIDList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* IconName; // 0x20
		::System::String* MissionIconPath; // 0x28
		::System::UInt32 ConnectID; // 0x30
		::System::UInt32 ID; // 0x34
		::System::Boolean IsShowInBillboard; // 0x38
		::System::Boolean isShowinMap; // 0x39
		::System::UInt32 CircleRange; // 0x3C
		::System::UInt32 ModelIcon; // 0x40
		::System::Boolean IsShowCornerArrow; // 0x44
		::System::Boolean IsFollowPropScale; // 0x45
		::System::Boolean IsCrossLayer; // 0x46
		::System::Boolean IsFollowMapScale; // 0x47
		::RPG::GameCore::MiniMapIconOrientationType IconOrientetionSwitch; // 0x48
		::System::UInt32 BillboardIcon; // 0x4C
		::System::UInt32 Priority; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniMapIconRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniMapIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::String* GetConnectIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_GETCONNECTICONPATH_OFFSET))(this);
		}

		::System::String* GetConnectMissionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_GETCONNECTMISSIONICONPATH_OFFSET))(this);
		}
	};
}
