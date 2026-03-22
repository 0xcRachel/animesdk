#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_8B5A351C6D6BAFA2;
namespace RPG::GameCore { class ChessRemoveModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9F2B1AAE7578639_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6D60F0)
#define CLASS_3_F9F2B1AAE7578639_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6D6130)
#define CLASS_3_F9F2B1AAE7578639__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D60C0)
#define CLASS_3_F9F2B1AAE7578639___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6D6420)

inline static constexpr unsigned int Class_3_F9F2B1AAE7578639_TypeDefinitionIndex = 44134;

class Class_3_F9F2B1AAE7578639 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessRemoveModifier*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_2_8B5A351C6D6BAFA2*> Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessRemoveModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessRemoveModifier*))((::PBYTE)hIl2Cpp + CLASS_3_F9F2B1AAE7578639__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9F2B1AAE7578639_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9F2B1AAE7578639_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9F2B1AAE7578639___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
