#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_ADDCATPOSITIONDATA_OFFSET UNITYSDK_OFFSET(0x9227120)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9226F60)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_GET_CATPOSITIONDATAS_OFFSET UNITYSDK_OFFSET(0x9226F50)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_SORT_OFFSET UNITYSDK_OFFSET(0x92271B0)
#define RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9227080)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceCatRankGameData_TypeDefinitionIndex = 62195;

	class CakeRaceCatRankGameData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>>* _CatPositionDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>>* get_CatPositionDatas()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::UnityEngine::Vector3>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_GET_CATPOSITIONDATAS_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRaceCatRankGameData* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRaceCatRankGameData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_CREATE_OFFSET))();
		}

		::System::Void AddCatPositionData(::System::UInt32 configID, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_ADDCATPOSITIONDATA_OFFSET))(this, configID, position);
		}

		::System::Void Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACECATRANKGAMEDATA_SORT_OFFSET))(this);
		}
	};
}
