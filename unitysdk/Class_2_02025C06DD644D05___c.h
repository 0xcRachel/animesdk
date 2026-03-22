#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_764;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_02025C06DD644D05___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8471050)
#define CLASS_2_02025C06DD644D05___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8471080)
#define CLASS_2_02025C06DD644D05___C___ONBATTLECHANGEAVATARHUDPANELSHOW_B__9_0_OFFSET UNITYSDK_OFFSET(0x8471090)

inline static constexpr unsigned int Class_2_02025C06DD644D05___c_TypeDefinitionIndex = 56966;

class Class_2_02025C06DD644D05___c : public ::System::Object
{
public:
	static ::Class_2_02025C06DD644D05___c** StaticGet___9()
	{
		return (::Class_2_02025C06DD644D05___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_02025C06DD644D05___c_TypeDefinitionIndex)->GetStaticField(0x36260);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_764*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_764*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_02025C06DD644D05___c_TypeDefinitionIndex)->GetStaticField(0x36268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __OnBattleChangeAvatarHUDPanelShow_b__9_0(::Class_0_16E4307DCC419505_764* a, ::Class_0_16E4307DCC419505_764* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_764*, ::Class_0_16E4307DCC419505_764*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___C___ONBATTLECHANGEAVATARHUDPANELSHOW_B__9_0_OFFSET))(this, a, b);
	}
};
