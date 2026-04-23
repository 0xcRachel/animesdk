#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8EC2537CFD0A41F;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_803E8F9F8C8CEA76___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFCD8E40)
#define CLASS_1_803E8F9F8C8CEA76___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFCD8E80)
#define CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET UNITYSDK_OFFSET(0xFCD8EB0)
#define CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET UNITYSDK_OFFSET(0xFCD8E90)

inline static constexpr unsigned int Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex = 58292;

class Class_1_803E8F9F8C8CEA76___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>** StaticGet___9__2_0()
	{
		return (::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x60410);
	}
	static ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>** StaticGet___9__1_0()
	{
		return (::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x60418);
	}
	static ::Class_1_803E8F9F8C8CEA76___c** StaticGet___9()
	{
		return (::Class_1_803E8F9F8C8CEA76___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803E8F9F8C8CEA76___c_TypeDefinitionIndex)->GetStaticField(0x60420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _TryTriggerPamChatHudBubble_b__1_0(::Class_1_C8EC2537CFD0A41F* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C8EC2537CFD0A41F*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET))(this, x);
	}

	::System::Boolean _TryTriggerPamChatGreeting_b__2_0(::Class_1_C8EC2537CFD0A41F* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C8EC2537CFD0A41F*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET))(this, x);
	}
};
