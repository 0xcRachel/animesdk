#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_42;
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___O_TypeDefinitionIndex = 48592;

	class VersionUpdateMgr___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_42*, ::System::Boolean>** StaticGet__0___IsPreDownloadAsset()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_42*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateMgr___O_TypeDefinitionIndex)->GetStaticField(0x373B0);
		}
	};
}
