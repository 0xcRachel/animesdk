#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonOfflineCullingCellSerializeData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace Collections::Pooled { template <typename T> class PooledList_1; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B9BE90)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16B9BDD0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_METHOD_3_6528AFD77893149A_OFFSET UNITYSDK_OFFSET(0x16B9C1A0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_METHOD_3_9C5A4AA76964B563_OFFSET UNITYSDK_OFFSET(0x16B9C160)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B9C190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonOfflineCullingCellData_TypeDefinitionIndex = 16401;

	class JsonOfflineCullingCellData : public ::RPG::GameCore::JsonOfflineCullingCellSerializeData
	{
	public:
		::Collections::Pooled::PooledList_1<::RPG::GameCore::JsonOfflineCullingCellSerializeData*>* ChildData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Method_3_9C5A4AA76964B563(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_METHOD_3_9C5A4AA76964B563_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6528AFD77893149A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_METHOD_3_6528AFD77893149A_OFFSET))(a1, a2);
		}
	};
}
