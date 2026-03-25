#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_2_54AE1C44DE8123D2;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1BEA1E49225DA2AF_METHOD_1_03E2B9212B4B6EAF_1_OFFSET UNITYSDK_OFFSET(0x1684D460)
#define CLASS_1_1BEA1E49225DA2AF_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x1684D420)
#define CLASS_1_1BEA1E49225DA2AF_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1684D3E0)
#define CLASS_1_1BEA1E49225DA2AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1684D4A0)

inline static constexpr unsigned int Class_1_1BEA1E49225DA2AF_TypeDefinitionIndex = 32991;

class Class_1_1BEA1E49225DA2AF : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup Field_1_0; // 0x10
	::Il2CppArray<::Class_2_54AE1C44DE8123D2*>* Field_1_4; // 0x38
	::RPG::Client::LittleGame::ETimelineControlGameLevelRotation Field_1_1; // 0x40
	::System::Boolean Field_1_3; // 0x44
	::UnityEngine::Vector3Int Field_1_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BEA1E49225DA2AF__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BEA1E49225DA2AF_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BEA1E49225DA2AF_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BEA1E49225DA2AF_METHOD_1_03E2B9212B4B6EAF_1_OFFSET))(this);
	}
};
