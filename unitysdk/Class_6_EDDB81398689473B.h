#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_71AAF74E84472882.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define CLASS_6_EDDB81398689473B_METHOD_6_270C3749B3F40147_OFFSET UNITYSDK_OFFSET(0xAC7E7D0)
#define CLASS_6_EDDB81398689473B_METHOD_6_67B9AC53ED5509DC_OFFSET UNITYSDK_OFFSET(0xAC7E940)
#define CLASS_6_EDDB81398689473B_METHOD_6_713D03BCAE9CCDB6_OFFSET UNITYSDK_OFFSET(0xAC7E830)
#define CLASS_6_EDDB81398689473B_METHOD_6_9E1857A4A46BBFFC_OFFSET UNITYSDK_OFFSET(0xAC7E950)
#define CLASS_6_EDDB81398689473B_METHOD_6_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xAC7E760)
#define CLASS_6_EDDB81398689473B_METHOD_6_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0xAC7E8B0)
#define CLASS_6_EDDB81398689473B_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xAC7E750)
#define CLASS_6_EDDB81398689473B__CTOR_OFFSET UNITYSDK_OFFSET(0xAC7E890)

inline static constexpr unsigned int Class_6_EDDB81398689473B_TypeDefinitionIndex = 60694;

class Class_6_EDDB81398689473B : public ::Class_5_71AAF74E84472882
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_EDDB81398689473B__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_EDDB81398689473B_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}

	::System::Single Method_6_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_EDDB81398689473B_METHOD_6_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_6_270C3749B3F40147(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_6_EDDB81398689473B_METHOD_6_270C3749B3F40147_OFFSET))(this, a1, a2);
	}

	::System::Single Method_6_713D03BCAE9CCDB6(::RPG::GameCore::FiveDimTrampolineConfig* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + CLASS_6_EDDB81398689473B_METHOD_6_713D03BCAE9CCDB6_OFFSET))(this, a1);
	}

	::System::Single Method_6_DB2B44FABAA6A6B5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_EDDB81398689473B_METHOD_6_DB2B44FABAA6A6B5_OFFSET))(this);
	}

	::System::Void Method_6_67B9AC53ED5509DC(::Struct_2_F31A7EC67A3AEEF7& P0, ::RPG::Client::LittleGame::Move::MoveState P1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_6_EDDB81398689473B_METHOD_6_67B9AC53ED5509DC_OFFSET))(this, P0, P1);
	}

	::System::Single Method_6_9E1857A4A46BBFFC(::RPG::GameCore::FiveDimTrampolineConfig* P0)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + CLASS_6_EDDB81398689473B_METHOD_6_9E1857A4A46BBFFC_OFFSET))(this, P0);
	}
};
