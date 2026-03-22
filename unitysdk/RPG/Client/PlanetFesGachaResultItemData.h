#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5EB756264B1E13D9_2;
class Class_1_FA4F4A67B1C04320_613;

#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9AD2360)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9AD2810)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET UNITYSDK_OFFSET(0x9AD2400)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD28A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultItemData_TypeDefinitionIndex = 53055;

	class PlanetFesGachaResultItemData : public ::System::Object
	{
	public:
		::System::UInt32 ItemNum; // 0x10
		::System::UInt32 ItemID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create(::Class_1_FA4F4A67B1C04320_613* item)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_FA4F4A67B1C04320_613*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET))(item);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create_1(::Class_1_5EB756264B1E13D9_2* item)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::Class_1_5EB756264B1E13D9_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET))(item);
		}

		::System::Void Merge(::RPG::Client::PlanetFesGachaResultItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET))(this, data);
		}
	};
}
