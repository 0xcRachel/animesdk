#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LoadingStratageConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E96962A8A90B759E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x86B0D00)
#define CLASS_1_E96962A8A90B759E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x86B0D30)
#define CLASS_1_E96962A8A90B759E___C___SELECTLOADINGSTRATEGYBYCONDITION_B__7_0_OFFSET UNITYSDK_OFFSET(0x86B0D40)

inline static constexpr unsigned int Class_1_E96962A8A90B759E___c_TypeDefinitionIndex = 47878;

class Class_1_E96962A8A90B759E___c : public ::System::Object
{
public:
	static ::Class_1_E96962A8A90B759E___c** StaticGet___9()
	{
		return (::Class_1_E96962A8A90B759E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96962A8A90B759E___c_TypeDefinitionIndex)->GetStaticField(0x3DC50);
	}
	static ::System::Comparison_1<::RPG::GameCore::LoadingStratageConfigRow*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::LoadingStratageConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96962A8A90B759E___c_TypeDefinitionIndex)->GetStaticField(0x3DC58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96962A8A90B759E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E96962A8A90B759E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SelectLoadingStrategyByCondition_b__7_0(::RPG::GameCore::LoadingStratageConfigRow* l, ::RPG::GameCore::LoadingStratageConfigRow* r)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LoadingStratageConfigRow*, ::RPG::GameCore::LoadingStratageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E96962A8A90B759E___C___SELECTLOADINGSTRATEGYBYCONDITION_B__7_0_OFFSET))(this, l, r);
	}
};
