#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_2_040743E4CAE1986F_OFFSET UNITYSDK_OFFSET(0x16CA1580)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_2_F5DE34961511A6D5_OFFSET UNITYSDK_OFFSET(0x16CA1740)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA17B0)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA17A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiParameterConfigBase_TypeDefinitionIndex = 15372;

	class MiParameterConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*>*>** StaticGet__FromBinary_MiParameterConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiParameterConfigBase_TypeDefinitionIndex)->GetStaticField(0x37E10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_040743E4CAE1986F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_2_040743E4CAE1986F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F5DE34961511A6D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_2_F5DE34961511A6D5_OFFSET))(a1, a2);
		}
	};
}
