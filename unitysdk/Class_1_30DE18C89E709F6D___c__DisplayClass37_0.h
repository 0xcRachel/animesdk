#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_30DE18C89E709F6D;
class Class_1_30DE18C89E709F6D_Class_3_AE31F159F362893C;
namespace RPG::Client { class IAssetOperation; }

#define CLASS_1_30DE18C89E709F6D___C__DISPLAYCLASS37_0__ASYNCLOADDATABLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x8A5E5F0)
#define CLASS_1_30DE18C89E709F6D___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8A5A710)

inline static constexpr unsigned int Class_1_30DE18C89E709F6D___c__DisplayClass37_0_TypeDefinitionIndex = 38893;

class Class_1_30DE18C89E709F6D___c__DisplayClass37_0 : public ::System::Object
{
public:
	::Class_1_30DE18C89E709F6D_Class_3_AE31F159F362893C* cb; // 0x10
	::Class_1_30DE18C89E709F6D* __4__this; // 0x18
	::System::Int32 blockId; // 0x20
	::System::Boolean finished; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30DE18C89E709F6D___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoadDataBlock_b__0(::RPG::Client::IAssetOperation* assetOpt)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_30DE18C89E709F6D___C__DISPLAYCLASS37_0__ASYNCLOADDATABLOCK_B__0_OFFSET))(this, assetOpt);
	}
};
