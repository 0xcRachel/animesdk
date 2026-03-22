#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E687B98F61BD107;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_CLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0x9DCF2B0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPAREITEMDISPLAYMULTIDROP_OFFSET UNITYSDK_OFFSET(0x9DCF1C0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPAREREWARDDISPLAY_OFFSET UNITYSDK_OFFSET(0x9DCEFB0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPARESORTID_OFFSET UNITYSDK_OFFSET(0x9DCF020)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DCEF30)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9DCF370)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_LOADCOMPARECONFIG_OFFSET UNITYSDK_OFFSET(0x9DCEA20)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardDisplaySortComparer_TypeDefinitionIndex = 52251;

	class RewardDisplaySortComparer : public ::System::Object
	{
	public:
		static ::RPG::Client::RewardDisplaySortComparer** StaticGet__Instance()
		{
			return (::RPG::Client::RewardDisplaySortComparer**)Il2CppClass::FromTypeDefinitionIndex(RewardDisplaySortComparer_TypeDefinitionIndex)->GetStaticField(0x45620);
		}
		::System::Collections::Generic::List_1<::Class_1_2E687B98F61BD107*>* _RewardDisplaySortFilterGroups; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void LoadCompareConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_LOADCOMPARECONFIG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_DISPOSE_OFFSET))(this);
		}

		::System::Int32 CompareRewardDisplay(::System::UInt32 itemIDA, ::System::UInt32 itemIDB)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPAREREWARDDISPLAY_OFFSET))(this, itemIDA, itemIDB);
		}

		::System::Int32 CompareItemDisplayMultiDrop(::RPG::Client::ItemDisplayData* itemDisplayDataA, ::RPG::Client::ItemDisplayData* itemDisplayDataB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPAREITEMDISPLAYMULTIDROP_OFFSET))(this, itemDisplayDataA, itemDisplayDataB);
		}

		::System::Int32 CompareSortID(::System::UInt32 itemIDA, ::System::UInt32 itemIDB)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPARESORTID_OFFSET))(this, itemIDA, itemIDB);
		}

		static ::System::Void ClearInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_CLEARINSTANCE_OFFSET))();
		}

		static ::RPG::Client::RewardDisplaySortComparer* get_Instance()
		{
			return ((::RPG::Client::RewardDisplaySortComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_GET_INSTANCE_OFFSET))();
		}
	};
}
