#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterNatureType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FE94DD0247D9ECA0_METHOD_1_9A0E758B85376FD1_1_OFFSET UNITYSDK_OFFSET(0x14443000)
#define CLASS_1_FE94DD0247D9ECA0_METHOD_1_9A0E758B85376FD1_OFFSET UNITYSDK_OFFSET(0x14442F00)
#define CLASS_1_FE94DD0247D9ECA0_METHOD_1_9BF40280E0B406FF_OFFSET UNITYSDK_OFFSET(0x14442E80)
#define CLASS_1_FE94DD0247D9ECA0_METHOD_1_DEBB7291DCB11224_OFFSET UNITYSDK_OFFSET(0x14443100)
#define CLASS_1_FE94DD0247D9ECA0__CCTOR_OFFSET UNITYSDK_OFFSET(0x144431B0)

inline static constexpr unsigned int Class_1_FE94DD0247D9ECA0_TypeDefinitionIndex = 50893;

class Class_1_FE94DD0247D9ECA0 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::FixPoint>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE94DD0247D9ECA0_TypeDefinitionIndex)->GetStaticField(0x26CD0);
	}
	static ::Il2CppArray<::RPG::GameCore::FixPoint>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE94DD0247D9ECA0_TypeDefinitionIndex)->GetStaticField(0x26CD8);
	}
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE94DD0247D9ECA0_TypeDefinitionIndex)->GetStaticField(0x96A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE94DD0247D9ECA0__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::CharacterNatureType Method_1_9BF40280E0B406FF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CharacterNatureType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE94DD0247D9ECA0_METHOD_1_9BF40280E0B406FF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9A0E758B85376FD1(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + CLASS_1_FE94DD0247D9ECA0_METHOD_1_9A0E758B85376FD1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9A0E758B85376FD1_1(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + CLASS_1_FE94DD0247D9ECA0_METHOD_1_9A0E758B85376FD1_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_DEBB7291DCB11224(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + CLASS_1_FE94DD0247D9ECA0_METHOD_1_DEBB7291DCB11224_OFFSET))(a1, a2);
	}
};
