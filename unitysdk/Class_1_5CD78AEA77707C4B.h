#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_307;
class Class_0_16E4307DCC419505_560;
class Class_0_16E4307DCC419505_561;
class Class_1_06CDCC6A0A66BA0A;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_5CD78AEA77707C4B_GET_PROFILEBUILDER_OFFSET UNITYSDK_OFFSET(0x89CDAD0)
#define CLASS_1_5CD78AEA77707C4B_GET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0x89CDAF0)
#define CLASS_1_5CD78AEA77707C4B_GET_UPGRADEMAPPERS_OFFSET UNITYSDK_OFFSET(0x89CDAB0)
#define CLASS_1_5CD78AEA77707C4B_METHOD_1_8149469AB45C4061_OFFSET UNITYSDK_OFFSET(0x89CE140)
#define CLASS_1_5CD78AEA77707C4B_METHOD_1_A670639DE9EBEFCC_OFFSET UNITYSDK_OFFSET(0x89CE1E0)
#define CLASS_1_5CD78AEA77707C4B_METHOD_1_A6D2364160463E2D_OFFSET UNITYSDK_OFFSET(0x89CDC10)
#define CLASS_1_5CD78AEA77707C4B_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0x89CDB10)
#define CLASS_1_5CD78AEA77707C4B_SET_PROFILEBUILDER_OFFSET UNITYSDK_OFFSET(0x89CDAE0)
#define CLASS_1_5CD78AEA77707C4B_SET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0x89CDB00)
#define CLASS_1_5CD78AEA77707C4B_SET_UPGRADEMAPPERS_OFFSET UNITYSDK_OFFSET(0x89CDAC0)
#define CLASS_1_5CD78AEA77707C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x89CE780)

inline static constexpr unsigned int Class_1_5CD78AEA77707C4B_TypeDefinitionIndex = 49869;

class Class_1_5CD78AEA77707C4B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_560* _RuleProvider_k__BackingField; // 0x10
	::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_561*>* _UpgradeMappers_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_307* _ProfileBuilder_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_561*>* get_UpgradeMappers()
	{
		return ((::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_561*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_GET_UPGRADEMAPPERS_OFFSET))(this);
	}

	::System::Void set_UpgradeMappers(::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_561*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_561*>*))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_SET_UPGRADEMAPPERS_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_307* get_ProfileBuilder()
	{
		return ((::Class_0_16E4307DCC419505_307*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_GET_PROFILEBUILDER_OFFSET))(this);
	}

	::System::Void set_ProfileBuilder(::Class_0_16E4307DCC419505_307* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_307*))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_SET_PROFILEBUILDER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_560* get_RuleProvider()
	{
		return ((::Class_0_16E4307DCC419505_560*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_GET_RULEPROVIDER_OFFSET))(this);
	}

	::System::Void set_RuleProvider(::Class_0_16E4307DCC419505_560* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_560*))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_SET_RULEPROVIDER_OFFSET))(this, value);
	}

	::Class_1_06CDCC6A0A66BA0A* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_06CDCC6A0A66BA0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_METHOD_1_E681B6D41E5607D0_OFFSET))(this);
	}

	::System::Boolean Method_1_A6D2364160463E2D(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_METHOD_1_A6D2364160463E2D_OFFSET))(this, a1, a2);
	}

	::Class_1_090AB0EAA610410E* Method_1_A670639DE9EBEFCC(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_METHOD_1_A670639DE9EBEFCC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_561*>* Method_1_8149469AB45C4061(::RPG::Client::AvatarUpgradePart a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_561*>*(*)(::PVOID, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_METHOD_1_8149469AB45C4061_OFFSET))(this, a1);
	}
};
