#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
class Class_1_2FB3CED2F6656F56;
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }

#define CLASS_1_75B65B88FAFB3689___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10CA5D10)
#define CLASS_1_75B65B88FAFB3689___C__DISPLAYCLASS6_0___TRYCREATEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x10CA6DB0)

inline static constexpr unsigned int Class_1_75B65B88FAFB3689___c__DisplayClass6_0_TypeDefinitionIndex = 63798;

class Class_1_75B65B88FAFB3689___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_2FB3CED2F6656F56* skill; // 0x10
	::Class_1_11B5C6B3FA66CD5A* effectData; // 0x18
	::RPG::Client::ChimeraDuelGameSession* session; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* __TryCreateEffect_b__0(::System::UInt32 uid)
	{
		return ((::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75B65B88FAFB3689___C__DISPLAYCLASS6_0___TRYCREATEEFFECT_B__0_OFFSET))(this, uid);
	}
};
