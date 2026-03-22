#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }

#define RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS15_0__ASYNCLOADASSET_B__0_OFFSET UNITYSDK_OFFSET(0x8E1B6D0)
#define RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8E19000)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader___c__DisplayClass15_0_TypeDefinitionIndex = 47005;

	class CachedAssetLoader___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::OnAssetOperationDelegate* handle; // 0x10
		::System::String* assetName; // 0x18
		::RPG::Client::CachedAssetLogicType logicType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AsyncLoadAsset_b__0(::RPG::Client::IAssetOperation* assetOperation)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS15_0__ASYNCLOADASSET_B__0_OFFSET))(this, assetOperation);
		}
	};
}
