#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int Class_1_816BD05285D3325D___O_TypeDefinitionIndex = 38321;

class Class_1_816BD05285D3325D___O : public ::System::Object
{
public:
	static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0____OnTimelineRefEnvProfileLoadFinish()
	{
		return (::RPG::Client::OnAssetOperationDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_816BD05285D3325D___O_TypeDefinitionIndex)->GetStaticField(0x45B70);
	}
};
