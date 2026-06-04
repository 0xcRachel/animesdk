#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_6C3D82DF10182EDA_OFFSET UNITYSDK_OFFSET(0x195F8B70)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_9E82FA49A82B7BB9_OFFSET UNITYSDK_OFFSET(0x195F8DA0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_D0C988ECCBC93A24_OFFSET UNITYSDK_OFFSET(0x195F8C40)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_E1154336902E2E7F_OFFSET UNITYSDK_OFFSET(0x195F8E20)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x195F8BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFloorCustomBool_TypeDefinitionIndex = 19551;

	class ByCheckFloorCustomBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6C3D82DF10182EDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFloorCustomBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFloorCustomBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_6C3D82DF10182EDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0C988ECCBC93A24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_D0C988ECCBC93A24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9E82FA49A82B7BB9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_9E82FA49A82B7BB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E1154336902E2E7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_E1154336902E2E7F_OFFSET))(a1, a2);
		}
	};
}
