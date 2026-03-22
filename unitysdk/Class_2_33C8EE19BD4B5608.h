#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::GameCore { class ShowShop; }
namespace RPG::GameCore { class TalkBehaviorRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_33C8EE19BD4B5608_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2B2DE0)
#define CLASS_2_33C8EE19BD4B5608_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xB2B3260)
#define CLASS_2_33C8EE19BD4B5608_METHOD_2_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0xB2B37D0)
#define CLASS_2_33C8EE19BD4B5608_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB2B35C0)
#define CLASS_2_33C8EE19BD4B5608_METHOD_2_B82A6C005D3ADCE3_OFFSET UNITYSDK_OFFSET(0xB2B3690)
#define CLASS_2_33C8EE19BD4B5608_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xB2B33C0)
#define CLASS_2_33C8EE19BD4B5608_METHOD_2_E8F333E43144B985_OFFSET UNITYSDK_OFFSET(0xB2B3AA0)
#define CLASS_2_33C8EE19BD4B5608_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2B2E20)
#define CLASS_2_33C8EE19BD4B5608_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2B34F0)
#define CLASS_2_33C8EE19BD4B5608_TICK_OFFSET UNITYSDK_OFFSET(0xB2B3560)
#define CLASS_2_33C8EE19BD4B5608__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B2D10)

inline static constexpr unsigned int Class_2_33C8EE19BD4B5608_TypeDefinitionIndex = 46295;

class Class_2_33C8EE19BD4B5608 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::Client::NotifyHandler* Field_2_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_6; // 0x28
	::RPG::GameCore::ShowShop* Field_2_0; // 0x30
	::RPG::Client::LuaUIController* Field_2_2; // 0x38
	::Class_1_69FF5DE516C87A66* Field_2_7; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::TalkBehaviorRow*>* Field_2_5; // 0x48
	::Il2CppArray<::System::Int32>* Field_2_4; // 0x50
	::System::Double Field_2_3; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowShop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowShop*))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_METHOD_2_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Boolean Method_2_B82A6C005D3ADCE3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_METHOD_2_B82A6C005D3ADCE3_OFFSET))(this);
	}

	::System::String* Method_2_E8F333E43144B985(::RPG::GameCore::TalkBehaviorRow* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TalkBehaviorRow*))((::PBYTE)hIl2Cpp + CLASS_2_33C8EE19BD4B5608_METHOD_2_E8F333E43144B985_OFFSET))(this, a1);
	}
};
