#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_10E851AF668BC802___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE4E040)
#define CLASS_2_10E851AF668BC802___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFE4E080)
#define CLASS_2_10E851AF668BC802___C___GETRANDOMANIMCOMPOSITE_B__3_0_OFFSET UNITYSDK_OFFSET(0xFE4E090)

inline static constexpr unsigned int Class_2_10E851AF668BC802___c_TypeDefinitionIndex = 53118;

class Class_2_10E851AF668BC802___c : public ::System::Object
{
public:
	static ::Class_2_10E851AF668BC802___c** StaticGet___9()
	{
		return (::Class_2_10E851AF668BC802___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_10E851AF668BC802___c_TypeDefinitionIndex)->GetStaticField(0x24FB0);
	}
	static ::System::Func_2<::RPG::GameCore::PlanetFesAnimComposite*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::RPG::GameCore::PlanetFesAnimComposite*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_10E851AF668BC802___c_TypeDefinitionIndex)->GetStaticField(0x24FB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __GetRandomAnimComposite_b__3_0(::RPG::GameCore::PlanetFesAnimComposite* item)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PlanetFesAnimComposite*))((::PBYTE)hIl2Cpp + CLASS_2_10E851AF668BC802___C___GETRANDOMANIMCOMPOSITE_B__3_0_OFFSET))(this, item);
	}
};
