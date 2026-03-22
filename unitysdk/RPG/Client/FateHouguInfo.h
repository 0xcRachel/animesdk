#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_27;
class Class_1_FA4F4A67B1C04320_254;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::Client { class FateHouguNormalSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHOUGUINFO_ADDHOUGU_OFFSET UNITYSDK_OFFSET(0x922C610)
#define RPG_CLIENT_FATEHOUGUINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x922C330)
#define RPG_CLIENT_FATEHOUGUINFO_GET_ALLHOUGUS_OFFSET UNITYSDK_OFFSET(0x922C870)
#define RPG_CLIENT_FATEHOUGUINFO_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0x922C880)
#define RPG_CLIENT_FATEHOUGUINFO_REMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0x922C6D0)
#define RPG_CLIENT_FATEHOUGUINFO_SYNCPENDINGHOUGUSELECTACTION_OFFSET UNITYSDK_OFFSET(0x922C500)
#define RPG_CLIENT_FATEHOUGUINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x922C3A0)
#define RPG_CLIENT_FATEHOUGUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x922C2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguInfo_TypeDefinitionIndex = 50862;

	class FateHouguInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _OwnedHougus; // 0x10
		::RPG::Client::FateHouguNormalSelectAction* _SelectAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_254*>* protoHouguList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_254*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_SYNC_OFFSET))(this, protoHouguList);
		}

		::System::Void SyncPendingHouguSelectAction(::System::UInt32 actionID, ::Class_1_6E708EAB438EC183_27* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_6E708EAB438EC183_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_SYNCPENDINGHOUGUSELECTACTION_OFFSET))(this, actionID, proto);
		}

		::System::Void AddHougu(::Class_1_FA4F4A67B1C04320_254* protoHougu)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_254*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_ADDHOUGU_OFFSET))(this, protoHougu);
		}

		::System::Void RemoveHougu(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_REMOVEHOUGU_OFFSET))(this, uniqueID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_AllHougus()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_GET_ALLHOUGUS_OFFSET))(this);
		}

		::RPG::Client::FateHouguNormalSelectAction* get_SelectAction()
		{
			return ((::RPG::Client::FateHouguNormalSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO_GET_SELECTACTION_OFFSET))(this);
		}
	};
}
