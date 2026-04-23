#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

class Class_2_BD898AE9C0E88E25;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0xD053E10)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0xD053E60)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD053F40)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_57E9EA809B95083F_OFFSET UNITYSDK_OFFSET(0xD054200)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_961EF0B796786E51_OFFSET UNITYSDK_OFFSET(0xD053C00)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xD054080)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xD053FA0)
#define CLASS_1_B79AD02E7AAF11FE_METHOD_1_D8B8617C4A3A96E7_OFFSET UNITYSDK_OFFSET(0xD0542B0)
#define CLASS_1_B79AD02E7AAF11FE__CTOR_OFFSET UNITYSDK_OFFSET(0xD053E00)

inline static constexpr unsigned int Class_1_B79AD02E7AAF11FE_TypeDefinitionIndex = 61136;

class Class_1_B79AD02E7AAF11FE : public ::System::Object
{
public:
	::RPG::Client::NavMap::IMapDataSource* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_5; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::Int32 Field_1_3; // 0x28
	::RPG::GameCore::CompareType Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE__CTOR_OFFSET))(this);
	}

	static ::Class_1_B79AD02E7AAF11FE* Method_1_961EF0B796786E51(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
	{
		return ((::Class_1_B79AD02E7AAF11FE*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_961EF0B796786E51_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::Class_2_BD898AE9C0E88E25* Method_1_57E9EA809B95083F()
	{
		return ((::Class_2_BD898AE9C0E88E25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_57E9EA809B95083F_OFFSET))(this);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_D8B8617C4A3A96E7(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B79AD02E7AAF11FE_METHOD_1_D8B8617C4A3A96E7_OFFSET))(this, a1, a2);
	}
};
