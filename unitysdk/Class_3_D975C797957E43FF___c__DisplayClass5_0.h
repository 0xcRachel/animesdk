#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }

#define CLASS_3_D975C797957E43FF___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105E5700)
#define CLASS_3_D975C797957E43FF___C__DISPLAYCLASS5_0__REFRESHPOST_B__0_OFFSET UNITYSDK_OFFSET(0x105E5DC0)

inline static constexpr unsigned int Class_3_D975C797957E43FF___c__DisplayClass5_0_TypeDefinitionIndex = 59202;

class Class_3_D975C797957E43FF___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::UInt32 postID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshPost_b__0(::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + CLASS_3_D975C797957E43FF___C__DISPLAYCLASS5_0__REFRESHPOST_B__0_OFFSET))(this, x);
	}
};
