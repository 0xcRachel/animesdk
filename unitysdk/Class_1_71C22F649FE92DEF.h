#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhaseInitParams; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { template <typename T> class FlagSwitch_1; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_71C22F649FE92DEF_METHOD_1_083C8BE6AC9A7B8B_OFFSET UNITYSDK_OFFSET(0x10A69560)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_718EACA14AB0E64C_OFFSET UNITYSDK_OFFSET(0x10A6A240)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x10A69F00)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x10A69DD0)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x10A69470)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_BCD7D97189B4240F_OFFSET UNITYSDK_OFFSET(0x10A69EC0)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_BF3C8B6A569C81DE_OFFSET UNITYSDK_OFFSET(0x10A69C80)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x10A691F0)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_EF658AEEBB9A1A89_OFFSET UNITYSDK_OFFSET(0x10A69D30)

inline static constexpr unsigned int Class_1_71C22F649FE92DEF_TypeDefinitionIndex = 48499;

class Class_1_71C22F649FE92DEF : public ::System::Object
{
public:
	static ::RPG::Client::FlagSwitch_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::RPG::Client::FlagSwitch_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C22F649FE92DEF_TypeDefinitionIndex)->GetStaticField(0x42BE0);
	}
	static ::System::Action** StaticGet_Field_1_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C22F649FE92DEF_TypeDefinitionIndex)->GetStaticField(0x42BE8);
	}
	static ::RPG::Client::AdventurePhaseInitParams** StaticGet_Field_1_1()
	{
		return (::RPG::Client::AdventurePhaseInitParams**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C22F649FE92DEF_TypeDefinitionIndex)->GetStaticField(0x42BF0);
	}

	static ::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_9DE87B16AD0A605E_OFFSET))();
	}

	static ::System::Void Method_1_083C8BE6AC9A7B8B(::RPG::Client::BattleGamePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_083C8BE6AC9A7B8B_OFFSET))(a1);
	}

	static ::System::Void Method_1_BF3C8B6A569C81DE(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_BF3C8B6A569C81DE_OFFSET))(a1);
	}

	static ::System::Void Method_1_EF658AEEBB9A1A89(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_EF658AEEBB9A1A89_OFFSET))(a1);
	}

	static ::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_8CA05BCD86E125DF_OFFSET))();
	}

	static ::System::Void Method_1_BCD7D97189B4240F(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_BCD7D97189B4240F_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_8A4C6820E5F5715F_OFFSET))();
	}

	static ::System::Void Method_1_718EACA14AB0E64C(::System::String* a1, ::RPG::Client::IGamePhase* a2)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_718EACA14AB0E64C_OFFSET))(a1, a2);
	}
};
