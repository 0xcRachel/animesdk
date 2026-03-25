#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/System/Object.h"

class Class_1_0F724F8EDC601A3C;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADINGDESCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17379440)
#define RPG_GAMECORE_LOADINGDESCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17379E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingDescRow_TypeDefinitionIndex = 12770;

	class LoadingDescRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* UnlockParam; // 0x10
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* ForceParam; // 0x18
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* LockParamForOr; // 0x20
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* ForceParamForOr; // 0x28
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* UnlockParamForOr; // 0x30
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* LockParam; // 0x38
		::RPG::Client::TextID DescTextmapID; // 0x40
		::RPG::Client::TextID TitleTextmapID; // 0x50
		::System::UInt32 MinWorldLevel; // 0x60
		::System::UInt32 MinLevel; // 0x64
		::System::UInt32 ID; // 0x68
		::System::UInt32 MaxLevel; // 0x6C
		::RPG::GameCore::LoadingDescGroup Group; // 0x70
		::System::UInt32 Weight; // 0x74
		::System::UInt32 ImageID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LoadingDescRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadingDescRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
