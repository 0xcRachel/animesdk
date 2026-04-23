#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtDefenceBatchSpawnState.h"
#include "unitysdk/System/Object.h"

class Class_2_718A51E22CB71EC4;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDefenceBatchMonsterInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B0FCD89758DFAD82_METHOD_1_276F406B5CF6DD47_OFFSET UNITYSDK_OFFSET(0xACD0AE0)
#define CLASS_1_B0FCD89758DFAD82_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xACD08B0)
#define CLASS_1_B0FCD89758DFAD82_METHOD_1_C672A24954E5C183_OFFSET UNITYSDK_OFFSET(0xACD03E0)
#define CLASS_1_B0FCD89758DFAD82_METHOD_1_CBF3734CFF401F3E_OFFSET UNITYSDK_OFFSET(0xACD0300)
#define CLASS_1_B0FCD89758DFAD82_METHOD_1_F0788BE412B69697_OFFSET UNITYSDK_OFFSET(0xACD0AF0)
#define CLASS_1_B0FCD89758DFAD82__CTOR_OFFSET UNITYSDK_OFFSET(0xACD0B00)

inline static constexpr unsigned int Class_1_B0FCD89758DFAD82_TypeDefinitionIndex = 50096;

class Class_1_B0FCD89758DFAD82 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_9; // 0x10
	::RPG::GameCore::RtDefenceBatchMonsterInfo* Field_1_0; // 0x18
	::Class_2_718A51E22CB71EC4* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_B0FCD89758DFAD82*>* Field_1_3; // 0x28
	::RPG::GameCore::RtDefenceBatchSpawnState Field_1_1; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x44
	::System::Int32 Field_1_8; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0FCD89758DFAD82__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBF3734CFF401F3E(::RPG::GameCore::RtDefenceBatchMonsterInfo* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_B0FCD89758DFAD82*>* a3, ::Class_2_718A51E22CB71EC4* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDefenceBatchMonsterInfo*, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_B0FCD89758DFAD82*>*, ::Class_2_718A51E22CB71EC4*))((::PBYTE)hIl2Cpp + CLASS_1_B0FCD89758DFAD82_METHOD_1_CBF3734CFF401F3E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C672A24954E5C183(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B0FCD89758DFAD82_METHOD_1_C672A24954E5C183_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0FCD89758DFAD82_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::GameCore::RtDefenceBatchMonsterInfo* Method_1_276F406B5CF6DD47()
	{
		return ((::RPG::GameCore::RtDefenceBatchMonsterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0FCD89758DFAD82_METHOD_1_276F406B5CF6DD47_OFFSET))(this);
	}

	::RPG::GameCore::RtDefenceBatchSpawnState Method_1_F0788BE412B69697()
	{
		return ((::RPG::GameCore::RtDefenceBatchSpawnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0FCD89758DFAD82_METHOD_1_F0788BE412B69697_OFFSET))(this);
	}
};
