#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Billboard/BillboardIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IBubbleInfoGroupProvider; }
namespace RPG::Client { class IBubbleInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0x9D6DF70)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER_GETBUBBLEINFOPROVIDERLIST_OFFSET UNITYSDK_OFFSET(0x9D6E110)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__CREATEBUBBLEINFOPROVIDERLISTBYINDEX_OFFSET UNITYSDK_OFFSET(0x9D6E360)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D6E070)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__GETANDRECORDRANDOMSELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x9D6E160)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__RESETAVAILABLEINDICES_OFFSET UNITYSDK_OFFSET(0x9D6E460)

namespace RPG::Client
{
	inline static constexpr unsigned int RandomBubbleInfoGroupProvider_TypeDefinitionIndex = 49962;

	class RandomBubbleInfoGroupProvider : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _Weights; // 0x10
		::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>* _BubbleTalkInfoGroupList; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _AvailableIndices; // 0x20
		::RPG::Client::Billboard::BillboardIdentifier _BillboardIdentifier; // 0x28

		::System::Void _ctor(::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>* bubbleTalkInfoGroupList, ::Il2CppArray<::System::Int32>* weightList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__CTOR_OFFSET))(this, bubbleTalkInfoGroupList, weightList);
		}

		static ::RPG::Client::RandomBubbleInfoGroupProvider* Create(::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>* bubbleTalkInfoGroupList, ::Il2CppArray<::System::Int32>* weightList)
		{
			return ((::RPG::Client::RandomBubbleInfoGroupProvider*(*)(::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER_CREATE_OFFSET))(bubbleTalkInfoGroupList, weightList);
		}

		::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* GetBubbleInfoProviderList()
		{
			return ((::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER_GETBUBBLEINFOPROVIDERLIST_OFFSET))(this);
		}

		::System::Int32 _GetAndRecordRandomSelectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__GETANDRECORDRANDOMSELECTEDINDEX_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* _CreateBubbleInfoProviderListByIndex(::System::Int32 index)
		{
			return ((::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__CREATEBUBBLEINFOPROVIDERLISTBYINDEX_OFFSET))(this, index);
		}

		::System::Void _ResetAvailableIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__RESETAVAILABLEINDICES_OFFSET))(this);
		}
	};
}
