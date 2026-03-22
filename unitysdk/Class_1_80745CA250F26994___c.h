#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_80745CA250F26994;
class Class_2_0C58AD91B0F4D809;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_80745CA250F26994___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2C2200)
#define CLASS_1_80745CA250F26994___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C2240)
#define CLASS_1_80745CA250F26994___C___LISTENLEVELVAR_B__22_0_OFFSET UNITYSDK_OFFSET(0xB2C2270)
#define CLASS_1_80745CA250F26994___C___REGISTERLOADCALLBACK_B__16_0_OFFSET UNITYSDK_OFFSET(0xB2C2250)

inline static constexpr unsigned int Class_1_80745CA250F26994___c_TypeDefinitionIndex = 60546;

class Class_1_80745CA250F26994___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_80745CA250F26994*, ::Class_2_0C58AD91B0F4D809*>** StaticGet___9__16_0()
	{
		return (::System::Action_2<::Class_1_80745CA250F26994*, ::Class_2_0C58AD91B0F4D809*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80745CA250F26994___c_TypeDefinitionIndex)->GetStaticField(0x469B0);
	}
	static ::Class_1_80745CA250F26994___c** StaticGet___9()
	{
		return (::Class_1_80745CA250F26994___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80745CA250F26994___c_TypeDefinitionIndex)->GetStaticField(0x469B8);
	}
	static ::System::Action_3<::Class_1_80745CA250F26994*, ::System::Int32, ::System::String*>** StaticGet___9__22_0()
	{
		return (::System::Action_3<::Class_1_80745CA250F26994*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80745CA250F26994___c_TypeDefinitionIndex)->GetStaticField(0x469C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80745CA250F26994___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80745CA250F26994___C__CTOR_OFFSET))(this);
	}

	::System::Void __RegisterLoadCallback_b__16_0(::Class_1_80745CA250F26994* self, ::Class_2_0C58AD91B0F4D809* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80745CA250F26994*, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_80745CA250F26994___C___REGISTERLOADCALLBACK_B__16_0_OFFSET))(this, self, ent);
	}

	::System::Void __ListenLevelVar_b__22_0(::Class_1_80745CA250F26994* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80745CA250F26994*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_80745CA250F26994___C___LISTENLEVELVAR_B__22_0_OFFSET))(this, self, entID, varName);
	}
};
