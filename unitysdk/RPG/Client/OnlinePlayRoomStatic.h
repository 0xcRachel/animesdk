#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_3.h"
#include "unitysdk/System/Object.h"

class Class_1_F7366FFC3674B888;
namespace RPG::Client { class MapDef; }
namespace System { class String; }

#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_CANGOTOONLINESESSIONMODE_OFFSET UNITYSDK_OFFSET(0x143F9220)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXTWITHTIME_OFFSET UNITYSDK_OFFSET(0x143FA7B0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXT_OFFSET UNITYSDK_OFFSET(0x143F8B00)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_OFFSET UNITYSDK_OFFSET(0x143FACF0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_1_OFFSET UNITYSDK_OFFSET(0x143FAC20)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_OFFSET UNITYSDK_OFFSET(0x143FAAC0)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISONLINEPLAYROOMVISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x143F6720)
#define RPG_CLIENT_ONLINEPLAYROOMSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x143FAE60)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomStatic_TypeDefinitionIndex = 61165;

	class OnlinePlayRoomStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_OnlinePlayRoomChatGroupIconPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x248F0);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMapIconID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7470);
		}
		static ::System::UInt32* StaticGet_PlayerRoomMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7474);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomAnchorMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7478);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFloorID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x747C);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomVisitFunctionUnlockID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7480);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomMaxPlayerCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7484);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFunctionEntranceListID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7488);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x748C);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomJukeBoxMappingInfoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7490);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomDimensionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7494);
		}
		static ::System::UInt32* StaticGet_PlayerRoomEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x7498);
		}
		static ::System::UInt32* StaticGet_VisitingToastCountDownTime()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x749C);
		}
		static ::System::UInt32* StaticGet_OnlinePlayRoomFuncEntranceID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x74A0);
		}
		static ::System::UInt32* StaticGet_PlayerRoomGotoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomStatic_TypeDefinitionIndex)->GetStaticField(0x74A4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInOnlineSessionMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_OFFSET))();
		}

		static ::System::Boolean IsInOnlineSessionMap_1(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONMAP_1_OFFSET))(mapDef);
		}

		static ::System::Boolean IsInOnlineSessionFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISINONLINESESSIONFLOOR_OFFSET))();
		}

		static ::System::Boolean CanGotoOnlineSessionMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_CANGOTOONLINESESSIONMODE_OFFSET))();
		}

		static ::System::String* GetOperationRecordText(::Class_1_F7366FFC3674B888* operationRecord)
		{
			return ((::System::String*(*)(::Class_1_F7366FFC3674B888*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXT_OFFSET))(operationRecord);
		}

		static ::System::String* GetOperationRecordTextWithTime(::Enum_3_71AA90D596A09AC8_3 operationType, ::System::Int64 operationTime)
		{
			return ((::System::String*(*)(::Enum_3_71AA90D596A09AC8_3, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_GETOPERATIONRECORDTEXTWITHTIME_OFFSET))(operationType, operationTime);
		}

		static ::System::Boolean IsOnlinePlayRoomVisitFunctionUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMSTATIC_ISONLINEPLAYROOMVISITFUNCTIONUNLOCKED_OFFSET))();
		}
	};
}
