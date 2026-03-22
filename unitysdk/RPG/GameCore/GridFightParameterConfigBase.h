#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_4_9C21F590D3D1F2AD_OFFSET UNITYSDK_OFFSET(0x16B3BA70)
#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_4_F93A74A5244732D0_OFFSET UNITYSDK_OFFSET(0x16B3BC30)
#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B3BC40)
#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B36210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParameterConfigBase_TypeDefinitionIndex = 17469;

	class GridFightParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*>*>** StaticGet__FromBinary_GridFightParameterConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightParameterConfigBase_TypeDefinitionIndex)->GetStaticField(0x2F610);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_4_9C21F590D3D1F2AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_4_9C21F590D3D1F2AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F93A74A5244732D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_4_F93A74A5244732D0_OFFSET))(a1, a2);
		}
	};
}
