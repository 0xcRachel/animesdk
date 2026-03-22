#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_816BD05285D3325D;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_816BD05285D3325D___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8AAE0)
#define CLASS_1_816BD05285D3325D___C__DISPLAYCLASS11_0__PRELOADTIMELINEREFASSETS_B__0_OFFSET UNITYSDK_OFFSET(0x10B8B120)

inline static constexpr unsigned int Class_1_816BD05285D3325D___c__DisplayClass11_0_TypeDefinitionIndex = 38322;

class Class_1_816BD05285D3325D___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::String* profilePath; // 0x10
	::Class_1_816BD05285D3325D* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _PreloadTimelineRefAssets_b__0(::RPG::Client::IAssetOperation* assetOpt)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D___C__DISPLAYCLASS11_0__PRELOADTIMELINEREFASSETS_B__0_OFFSET))(this, assetOpt);
	}
};
