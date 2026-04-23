#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D3D14052A5904019_1;
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEREWARDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17794450)
#define RPG_CLIENT_CHESSROGUEREWARDDATA_GETLONGTERMREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1779F7F0)
#define RPG_CLIENT_CHESSROGUEREWARDDATA_GETLONGTERMREWARDQUESTSORTVALUE_OFFSET UNITYSDK_OFFSET(0x1779F9A0)
#define RPG_CLIENT_CHESSROGUEREWARDDATA_INIT_OFFSET UNITYSDK_OFFSET(0x177939B0)
#define RPG_CLIENT_CHESSROGUEREWARDDATA_ISANYLONGTERMREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1779FB60)
#define RPG_CLIENT_CHESSROGUEREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17793710)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueRewardData_TypeDefinitionIndex = 61642;

	class ChessRogueRewardData : public ::System::Object
	{
	public:
		::Class_1_D3D14052A5904019_1* LongTermInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREWARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREWARDDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREWARDDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetLongTermRewardQuestData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREWARDDATA_GETLONGTERMREWARDQUESTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLongTermRewardQuestSortValue()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREWARDDATA_GETLONGTERMREWARDQUESTSORTVALUE_OFFSET))(this);
		}

		::System::Boolean IsAnyLongTermRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEREWARDDATA_ISANYLONGTERMREWARDAVAILABLE_OFFSET))(this);
		}
	};
}
