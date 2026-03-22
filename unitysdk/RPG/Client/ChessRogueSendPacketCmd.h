#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDENHANCEROGUEBUFFCSREQ_OFFSET UNITYSDK_OFFSET(0x8EEC980)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDGETROGUEBUFFENHANCEINFOSCREQ_OFFSET UNITYSDK_OFFSET(0x8EEC8C0)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDPICKROGUEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0x8EEC540)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0x8EEC690)
#define RPG_CLIENT_CHESSROGUESENDPACKETCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x8EECA60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueSendPacketCmd_TypeDefinitionIndex = 53494;

	class ChessRogueSendPacketCmd : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD__CTOR_OFFSET))(this);
		}

		::System::Void SendPickRogueAvatarCsReq(::System::UInt32 propEntityID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Collections::Generic::List_1<::System::UInt32>* specialIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDPICKROGUEAVATARCSREQ_OFFSET))(this, propEntityID, avatarIDList, specialIDList);
		}

		::System::Void SendReviveRogueAvatarCsReq(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDREVIVEROGUEAVATARCSREQ_OFFSET))(this, avatarIDList);
		}

		::System::Void SendGetRogueBuffEnhanceInfoScReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDGETROGUEBUFFENHANCEINFOSCREQ_OFFSET))(this);
		}

		::System::Void SendEnhanceRogueBuffCsReq(::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUESENDPACKETCMD_SENDENHANCEROGUEBUFFCSREQ_OFFSET))(this, buffID);
		}
	};
}
