#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhaseInitParams; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { template <typename T> class FlagSwitch_1; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_71C22F649FE92DEF_METHOD_1_083C8BE6AC9A7B8B_OFFSET UNITYSDK_OFFSET(0x158ADCD0)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x158AE590)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x158AD8E0)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x158AE720)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_718EACA14AB0E64C_OFFSET UNITYSDK_OFFSET(0x158AEAE0)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_94C63125CCCCB1E7_OFFSET UNITYSDK_OFFSET(0x158AE460)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x158ADBB0)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_BCD04FAF06FA4406_OFFSET UNITYSDK_OFFSET(0x158AE6E0)
#define CLASS_1_71C22F649FE92DEF_METHOD_1_EF658AEEBB9A1A89_OFFSET UNITYSDK_OFFSET(0x158AE4F0)

inline static constexpr unsigned int Class_1_71C22F649FE92DEF_TypeDefinitionIndex = 57177;

class Class_1_71C22F649FE92DEF : public ::System::Object
{
public:
	static ::RPG::Client::FlagSwitch_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::RPG::Client::FlagSwitch_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C22F649FE92DEF_TypeDefinitionIndex)->GetStaticField(0x3DD0);
	}
	static ::RPG::Client::AdventurePhaseInitParams** StaticGet_Field_1_1()
	{
		return (::RPG::Client::AdventurePhaseInitParams**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C22F649FE92DEF_TypeDefinitionIndex)->GetStaticField(0x3DD8);
	}
	static ::System::Action** StaticGet_Field_1_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C22F649FE92DEF_TypeDefinitionIndex)->GetStaticField(0x3DE0);
	}

	static ::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_4307B2A4B4A12C1A_OFFSET))();
	}

	static ::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_9FA85F81BF5EE3CA_OFFSET))();
	}

	static ::System::Void Method_1_083C8BE6AC9A7B8B(::RPG::Client::BattleGamePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_083C8BE6AC9A7B8B_OFFSET))(a1);
	}

	static ::System::Void Method_1_94C63125CCCCB1E7(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_94C63125CCCCB1E7_OFFSET))(a1);
	}

	static ::System::Void Method_1_EF658AEEBB9A1A89(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_EF658AEEBB9A1A89_OFFSET))(a1);
	}

	static ::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_3E522F4B992303E1_OFFSET))();
	}

	static ::System::Void Method_1_BCD04FAF06FA4406(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_BCD04FAF06FA4406_OFFSET))(a1);
	}

	static ::System::Void Method_1_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_585E2EA201FDE7ED_OFFSET))();
	}

	static ::System::Void Method_1_718EACA14AB0E64C(::System::String* a1, ::RPG::Client::IGamePhase* a2)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_1_71C22F649FE92DEF_METHOD_1_718EACA14AB0E64C_OFFSET))(a1, a2);
	}
};
