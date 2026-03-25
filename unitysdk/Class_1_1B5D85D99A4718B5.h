#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerAssetLoadState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::LittleGame::FiveDim { class PhantomPlayerFrameAsset; }

#define CLASS_1_1B5D85D99A4718B5_CLEAR_OFFSET UNITYSDK_OFFSET(0x116B3FF0)
#define CLASS_1_1B5D85D99A4718B5_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x116B4130)
#define CLASS_1_1B5D85D99A4718B5_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x116B40D0)
#define CLASS_1_1B5D85D99A4718B5_METHOD_1_BB37FD5051199D6F_OFFSET UNITYSDK_OFFSET(0x116B4190)
#define CLASS_1_1B5D85D99A4718B5_METHOD_1_DAA447CA32241DBE_OFFSET UNITYSDK_OFFSET(0x116B3E90)
#define CLASS_1_1B5D85D99A4718B5_METHOD_1_E271DB75F084E674_OFFSET UNITYSDK_OFFSET(0x116B41D0)
#define CLASS_1_1B5D85D99A4718B5__CTOR_OFFSET UNITYSDK_OFFSET(0x116B4210)

inline static constexpr unsigned int Class_1_1B5D85D99A4718B5_TypeDefinitionIndex = 62569;

class Class_1_1B5D85D99A4718B5 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset* Field_1_1; // 0x10
	::RPG::Client::IAssetOperation* Field_1_0; // 0x18
	::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B5D85D99A4718B5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DAA447CA32241DBE(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_1B5D85D99A4718B5_METHOD_1_DAA447CA32241DBE_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B5D85D99A4718B5_CLEAR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset* Method_1_BB37FD5051199D6F()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B5D85D99A4718B5_METHOD_1_BB37FD5051199D6F_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B5D85D99A4718B5_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState Method_1_E271DB75F084E674()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PhantomPlayerAssetLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B5D85D99A4718B5_METHOD_1_E271DB75F084E674_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B5D85D99A4718B5_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}
};
