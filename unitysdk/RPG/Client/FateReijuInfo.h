#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_29;
class Class_1_E7C4009BCC22497A_21;
class Class_1_F9FBCC956DFCF137_9;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateReijuDataItem; }
namespace RPG::Client { class FateReijuSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEREIJUINFO_ADDREIJU_OFFSET UNITYSDK_OFFSET(0x9231B40)
#define RPG_CLIENT_FATEREIJUINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9233CA0)
#define RPG_CLIENT_FATEREIJUINFO_GET_ALLREIJUS_OFFSET UNITYSDK_OFFSET(0x92340C0)
#define RPG_CLIENT_FATEREIJUINFO_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0x92340D0)
#define RPG_CLIENT_FATEREIJUINFO_ISREROLLUNLOCK_OFFSET UNITYSDK_OFFSET(0x9233FD0)
#define RPG_CLIENT_FATEREIJUINFO_SYNCPENDINGREIJUSELECTACTION_OFFSET UNITYSDK_OFFSET(0x9231DF0)
#define RPG_CLIENT_FATEREIJUINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9233DF0)
#define RPG_CLIENT_FATEREIJUINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9233C50)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuInfo_TypeDefinitionIndex = 50901;

	class FateReijuInfo : public ::System::Object
	{
	public:
		::Class_1_F9FBCC956DFCF137_9* _ParamProxyFactory; // 0x10
		::RPG::Client::FateReijuSelectAction* _SelectAction; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* _OwnedReijus; // 0x20

		::System::Void _ctor(::Class_1_F9FBCC956DFCF137_9* paramProxyFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO__CTOR_OFFSET))(this, paramProxyFactory);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_29*>* protoReijuList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_29*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_SYNC_OFFSET))(this, protoReijuList);
		}

		::System::Void SyncPendingReijuSelectAction(::System::UInt32 actionID, ::Class_1_E7C4009BCC22497A_21* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_E7C4009BCC22497A_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_SYNCPENDINGREIJUSELECTACTION_OFFSET))(this, actionID, proto);
		}

		::System::Void AddReiju(::Class_1_120319518E6F6581_29* protoReiju)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_ADDREIJU_OFFSET))(this, protoReiju);
		}

		static ::System::Boolean IsRerollUnlock(::System::UInt32 difficulty)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_ISREROLLUNLOCK_OFFSET))(difficulty);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* get_AllReijus()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_GET_ALLREIJUS_OFFSET))(this);
		}

		::RPG::Client::FateReijuSelectAction* get_SelectAction()
		{
			return ((::RPG::Client::FateReijuSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUINFO_GET_SELECTACTION_OFFSET))(this);
		}
	};
}
