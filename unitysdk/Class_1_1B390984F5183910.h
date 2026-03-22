#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCheckSetStateResult.h"
#include "unitysdk/System/Object.h"

class Class_1_09216AC83FE49B91;
class Class_1_1B390984F5183910_Class_1_F430351B57E59FB6;
namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindAttachEff; }
namespace System { class String; }

#define CLASS_1_1B390984F5183910_METHOD_1_09B333E23670E075_OFFSET UNITYSDK_OFFSET(0xD1D7670)
#define CLASS_1_1B390984F5183910_METHOD_1_AD52119E0AD66D16_OFFSET UNITYSDK_OFFSET(0xD1D7C50)
#define CLASS_1_1B390984F5183910_METHOD_1_C2FF988A219C814A_OFFSET UNITYSDK_OFFSET(0xD1D7710)
#define CLASS_1_1B390984F5183910_METHOD_1_E79FA525758F58AD_OFFSET UNITYSDK_OFFSET(0xD1D75B0)
#define CLASS_1_1B390984F5183910_METHOD_1_F2ECC1938C2C8A79_OFFSET UNITYSDK_OFFSET(0xD1D79E0)

inline static constexpr unsigned int Class_1_1B390984F5183910_TypeDefinitionIndex = 48222;

class Class_1_1B390984F5183910 : public ::System::Object
{
public:
	static ::ParticleRecorder::BackwardParticlesInfoSO* Method_1_E79FA525758F58AD(::System::String* a1)
	{
		return ((::ParticleRecorder::BackwardParticlesInfoSO*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1B390984F5183910_METHOD_1_E79FA525758F58AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_09B333E23670E075(::RPG::Client::TimeRewindCheckSetStateResult a1)
	{
		return ((::System::Void(*)(::RPG::Client::TimeRewindCheckSetStateResult))((::PBYTE)hIl2Cpp + CLASS_1_1B390984F5183910_METHOD_1_09B333E23670E075_OFFSET))(a1);
	}

	static ::System::Void Method_1_C2FF988A219C814A(::RPG::GameCore::TimeRewindAttachEff* a1, ::Class_1_09216AC83FE49B91* a2, ::RPG::GameCore::GameEntity* a3, ::Class_1_1B390984F5183910_Class_1_F430351B57E59FB6* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::TimeRewindAttachEff*, ::Class_1_09216AC83FE49B91*, ::RPG::GameCore::GameEntity*, ::Class_1_1B390984F5183910_Class_1_F430351B57E59FB6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B390984F5183910_METHOD_1_C2FF988A219C814A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F2ECC1938C2C8A79(::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* a1, ::Il2CppArray<::Class_1_09216AC83FE49B91*>*& a2, ::RPG::GameCore::GameEntity* a3, ::Class_1_1B390984F5183910_Class_1_F430351B57E59FB6* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>*, ::Il2CppArray<::Class_1_09216AC83FE49B91*>*&, ::RPG::GameCore::GameEntity*, ::Class_1_1B390984F5183910_Class_1_F430351B57E59FB6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B390984F5183910_METHOD_1_F2ECC1938C2C8A79_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_AD52119E0AD66D16(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B390984F5183910_METHOD_1_AD52119E0AD66D16_OFFSET))(a1);
	}
};
