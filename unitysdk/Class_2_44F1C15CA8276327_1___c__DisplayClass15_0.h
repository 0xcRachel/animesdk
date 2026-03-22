#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_44F1C15CA8276327_1;
namespace RPG::GameCore { class BattleGridFightAvatarData; }

#define CLASS_2_44F1C15CA8276327_1___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x859DF20)
#define CLASS_2_44F1C15CA8276327_1___C__DISPLAYCLASS15_0___ONBIND_GRIDFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x859F2C0)

inline static constexpr unsigned int Class_2_44F1C15CA8276327_1___c__DisplayClass15_0_TypeDefinitionIndex = 57400;

class Class_2_44F1C15CA8276327_1___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_2_44F1C15CA8276327_1* __4__this; // 0x10
	::RPG::GameCore::BattleGridFightAvatarData* gridfightAvatarData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44F1C15CA8276327_1___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnBind_GridFight_b__0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_44F1C15CA8276327_1___C__DISPLAYCLASS15_0___ONBIND_GRIDFIGHT_B__0_OFFSET))(this, _);
	}
};
