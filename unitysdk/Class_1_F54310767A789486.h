#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;

#define CLASS_1_F54310767A789486_METHOD_1_A57B9B53C7DCA974_OFFSET UNITYSDK_OFFSET(0x17B7DAD0)
#define CLASS_1_F54310767A789486__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B7DE50)
#define CLASS_1_F54310767A789486__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7DAC0)

inline static constexpr unsigned int Class_1_F54310767A789486_TypeDefinitionIndex = 33059;

class Class_1_F54310767A789486 : public ::System::Object
{
public:
	static ::Class_1_F54310767A789486** StaticGet_Field_1_0()
	{
		return (::Class_1_F54310767A789486**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F54310767A789486_TypeDefinitionIndex)->GetStaticField(0x2B6B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F54310767A789486__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F54310767A789486__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_A57B9B53C7DCA974(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_F54310767A789486_METHOD_1_A57B9B53C7DCA974_OFFSET))(this, a1);
	}
};
