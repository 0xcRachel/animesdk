#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_7863085D9949E875___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178E3680)
#define CLASS_2_7863085D9949E875___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178E36C0)
#define CLASS_2_7863085D9949E875___C__UPDATEROLE_B__4_0_OFFSET UNITYSDK_OFFSET(0x178E36D0)

inline static constexpr unsigned int Class_2_7863085D9949E875___c_TypeDefinitionIndex = 60962;

class Class_2_7863085D9949E875___c : public ::System::Object
{
public:
	static ::Class_2_7863085D9949E875___c** StaticGet___9()
	{
		return (::Class_2_7863085D9949E875___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7863085D9949E875___c_TypeDefinitionIndex)->GetStaticField(0x5AE80);
	}
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7863085D9949E875___c_TypeDefinitionIndex)->GetStaticField(0x5AE88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _UpdateRole_b__4_0(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875___C__UPDATEROLE_B__4_0_OFFSET))(this, a1);
	}
};
