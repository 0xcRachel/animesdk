#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A7136A07BD64ED99;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_A7136A07BD64ED99___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EDE1F0)
#define CLASS_1_A7136A07BD64ED99___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EDE220)
#define CLASS_1_A7136A07BD64ED99___C___LISTENLEVELVARS_B__5_0_OFFSET UNITYSDK_OFFSET(0x9EDE230)
#define CLASS_1_A7136A07BD64ED99___C___LISTENSUBMISSIONSTATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x9EDE250)

inline static constexpr unsigned int Class_1_A7136A07BD64ED99___c_TypeDefinitionIndex = 60633;

class Class_1_A7136A07BD64ED99___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_A7136A07BD64ED99*, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_1_A7136A07BD64ED99*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7136A07BD64ED99___c_TypeDefinitionIndex)->GetStaticField(0x442E0);
	}
	static ::System::Action_2<::Class_1_A7136A07BD64ED99*, ::System::UInt32>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_1_A7136A07BD64ED99*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7136A07BD64ED99___c_TypeDefinitionIndex)->GetStaticField(0x442E8);
	}
	static ::Class_1_A7136A07BD64ED99___c** StaticGet___9()
	{
		return (::Class_1_A7136A07BD64ED99___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7136A07BD64ED99___c_TypeDefinitionIndex)->GetStaticField(0x442F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A7136A07BD64ED99___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7136A07BD64ED99___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVars_b__5_0(::Class_1_A7136A07BD64ED99* self, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A7136A07BD64ED99*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A7136A07BD64ED99___C___LISTENLEVELVARS_B__5_0_OFFSET))(this, self, varName);
	}

	::System::Void __ListenSubMissionState_b__6_0(::Class_1_A7136A07BD64ED99* self, ::System::UInt32 id)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A7136A07BD64ED99*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A7136A07BD64ED99___C___LISTENSUBMISSIONSTATE_B__6_0_OFFSET))(this, self, id);
	}
};
