#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowNPCLeave; }

#define CLASS_1_8B709FCA740D2C22_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x89A8B30)
#define CLASS_1_8B709FCA740D2C22_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x89A8890)
#define CLASS_1_8B709FCA740D2C22__CTOR_OFFSET UNITYSDK_OFFSET(0x89A8850)

inline static constexpr unsigned int Class_1_8B709FCA740D2C22_TypeDefinitionIndex = 63858;

class Class_1_8B709FCA740D2C22 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraBattleShowNPCLeave* Field_1_1; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x18
	::RPG::Client::Promises::Promise* Field_1_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCLeave* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCLeave*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_8B709FCA740D2C22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B709FCA740D2C22_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B709FCA740D2C22_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
