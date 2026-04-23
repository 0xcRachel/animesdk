#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WaveSimPanel;
namespace RPG::Client::DynamicFloatingObject { class DynamicFloatingObject; }
namespace RPG::Client::DynamicFloatingObject { class WaterSimOverrideParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_83330FCCAB4A0042_METHOD_1_3617F51E36984770_OFFSET UNITYSDK_OFFSET(0xFEF8F70)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_6632971549249DA6_OFFSET UNITYSDK_OFFSET(0xFEF8D80)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_78A31E0D013CC119_OFFSET UNITYSDK_OFFSET(0xFEF9650)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_797A699EED121969_OFFSET UNITYSDK_OFFSET(0xFEF9B30)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xFEF8F20)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xFEF9530)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_A799B17DDBC2AB8A_OFFSET UNITYSDK_OFFSET(0xFEF96E0)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_B23AB3DDC5EC8245_OFFSET UNITYSDK_OFFSET(0xFEF95A0)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_DF3C54A5ADEABAF1_1_OFFSET UNITYSDK_OFFSET(0xFEF9300)
#define CLASS_1_83330FCCAB4A0042_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xFEF90D0)
#define CLASS_1_83330FCCAB4A0042__CCTOR_OFFSET UNITYSDK_OFFSET(0xFEF9D50)
#define CLASS_1_83330FCCAB4A0042__CTOR_OFFSET UNITYSDK_OFFSET(0xFEF8ED0)

inline static constexpr unsigned int Class_1_83330FCCAB4A0042_TypeDefinitionIndex = 67708;

class Class_1_83330FCCAB4A0042 : public ::System::Object
{
public:
	static ::Class_1_83330FCCAB4A0042** StaticGet_Field_1_0()
	{
		return (::Class_1_83330FCCAB4A0042**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83330FCCAB4A0042_TypeDefinitionIndex)->GetStaticField(0x6B350);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83330FCCAB4A0042_TypeDefinitionIndex)->GetStaticField(0x11CE0);
	}
	::RPG::Client::DynamicFloatingObject::WaterSimOverrideParam* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::DynamicFloatingObject::DynamicFloatingObject*>* Field_1_1; // 0x18
	::WaveSimPanel* Field_1_5; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042__CCTOR_OFFSET))();
	}

	static ::Class_1_83330FCCAB4A0042* Method_1_6632971549249DA6()
	{
		return ((::Class_1_83330FCCAB4A0042*(*)())((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_6632971549249DA6_OFFSET))();
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_3617F51E36984770()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_3617F51E36984770_OFFSET))(this);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_DF3C54A5ADEABAF1_1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_B23AB3DDC5EC8245(::RPG::Client::DynamicFloatingObject::DynamicFloatingObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DynamicFloatingObject::DynamicFloatingObject*))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_B23AB3DDC5EC8245_OFFSET))(this, a1);
	}

	::System::Void Method_1_78A31E0D013CC119(::RPG::Client::DynamicFloatingObject::DynamicFloatingObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DynamicFloatingObject::DynamicFloatingObject*))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_78A31E0D013CC119_OFFSET))(this, a1);
	}

	::System::Void Method_1_A799B17DDBC2AB8A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_A799B17DDBC2AB8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_797A699EED121969()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83330FCCAB4A0042_METHOD_1_797A699EED121969_OFFSET))(this);
	}
};
