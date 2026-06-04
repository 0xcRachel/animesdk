#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ResidentPossessionConfig; }
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace RPG::GameCore { template <typename T> class StringMemoryDictionary_1; }
namespace System { class String; }

#define CLASS_1_B48C41A65DB3FA8A_METHOD_1_2A58D0F885E0A1EA_OFFSET UNITYSDK_OFFSET(0x1555BCE0)
#define CLASS_1_B48C41A65DB3FA8A_METHOD_1_5016E9213480853B_OFFSET UNITYSDK_OFFSET(0x1555B640)
#define CLASS_1_B48C41A65DB3FA8A_METHOD_1_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0x1555BDA0)
#define CLASS_1_B48C41A65DB3FA8A_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1555B960)
#define CLASS_1_B48C41A65DB3FA8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1555BE50)

inline static constexpr unsigned int Class_1_B48C41A65DB3FA8A_TypeDefinitionIndex = 53415;

class Class_1_B48C41A65DB3FA8A : public ::System::Object
{
public:
	static ::RPG::GameCore::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*>** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48C41A65DB3FA8A_TypeDefinitionIndex)->GetStaticField(0x686E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48C41A65DB3FA8A_TypeDefinitionIndex)->GetStaticField(0x686E8);
	}
	static ::RPG::GameCore::ResidentPossessionConfig** StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::ResidentPossessionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48C41A65DB3FA8A_TypeDefinitionIndex)->GetStaticField(0x686F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B48C41A65DB3FA8A_TypeDefinitionIndex)->GetStaticField(0x686F8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48C41A65DB3FA8A__CTOR_OFFSET))(this);
	}

	static ::Struct_2_0288E507E2813FBB Method_1_5016E9213480853B(::System::String* a1)
	{
		return ((::Struct_2_0288E507E2813FBB(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B48C41A65DB3FA8A_METHOD_1_5016E9213480853B_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>* Method_1_2A58D0F885E0A1EA(::Struct_2_0288E507E2813FBB a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*(*)(::Struct_2_0288E507E2813FBB))((::PBYTE)hIl2Cpp + CLASS_1_B48C41A65DB3FA8A_METHOD_1_2A58D0F885E0A1EA_OFFSET))(a1);
	}

	static ::System::Void Method_1_8080E22F79F246F0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48C41A65DB3FA8A_METHOD_1_8080E22F79F246F0_OFFSET))();
	}

	static ::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B48C41A65DB3FA8A_METHOD_1_EAD10B3E55E2C4C5_OFFSET))();
	}
};
