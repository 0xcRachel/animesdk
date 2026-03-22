#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournMiracleRow; }

#define CLASS_1_A4ED94721C8F4303_1_METHOD_1_0241D224CDD11ECF_OFFSET UNITYSDK_OFFSET(0x1119C860)
#define CLASS_1_A4ED94721C8F4303_1_METHOD_1_259B533085E399D3_1_OFFSET UNITYSDK_OFFSET(0x1119C9A0)
#define CLASS_1_A4ED94721C8F4303_1_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x1119C930)
#define CLASS_1_A4ED94721C8F4303_1_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0x1119C770)
#define CLASS_1_A4ED94721C8F4303_1_METHOD_1_78FDD6FD00E9AD90_OFFSET UNITYSDK_OFFSET(0x1119C8C0)
#define CLASS_1_A4ED94721C8F4303_1_METHOD_1_BA0FF2AC1A60C564_OFFSET UNITYSDK_OFFSET(0x1119C7F0)
#define CLASS_1_A4ED94721C8F4303_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1119C760)

inline static constexpr unsigned int Class_1_A4ED94721C8F4303_1_TypeDefinitionIndex = 53471;

class Class_1_A4ED94721C8F4303_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_1__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A4ED94721C8F4303_1* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_A4ED94721C8F4303_1*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_1_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}

	::RPG::GameCore::RogueMiracleCategory Method_1_BA0FF2AC1A60C564()
	{
		return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_1_METHOD_1_BA0FF2AC1A60C564_OFFSET))(this);
	}

	::RPG::GameCore::RogueTournMode Method_1_78FDD6FD00E9AD90()
	{
		return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_1_METHOD_1_78FDD6FD00E9AD90_OFFSET))(this);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_1_METHOD_1_259B533085E399D3_OFFSET))(this);
	}

	::System::UInt32 Method_1_259B533085E399D3_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_1_METHOD_1_259B533085E399D3_1_OFFSET))(this);
	}

	::RPG::GameCore::RogueTournMiracleRow* Method_1_0241D224CDD11ECF()
	{
		return ((::RPG::GameCore::RogueTournMiracleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_1_METHOD_1_0241D224CDD11ECF_OFFSET))(this);
	}
};
