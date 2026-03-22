#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseBillBoardSystem_1.h"

class Class_1_867B6CE75953535A_1;
class Class_2_0C58AD91B0F4D809;
class Class_3_44EDAE37250FA2DB;

#define CLASS_2_FBE1DF30E902EB51__CTOR_OFFSET UNITYSDK_OFFSET(0x86975A0)
#define CLASS_2_FBE1DF30E902EB51__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x86976D0)

inline static constexpr unsigned int Class_2_FBE1DF30E902EB51_TypeDefinitionIndex = 60491;

class Class_2_FBE1DF30E902EB51 : public ::RPG::Client::LittleGame::FiveDim::BaseBillBoardSystem_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_1_867B6CE75953535A_1* Field_2_0; // 0x20
	::Class_3_44EDAE37250FA2DB* Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_44EDAE37250FA2DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_44EDAE37250FA2DB*))((::PBYTE)hIl2Cpp + CLASS_2_FBE1DF30E902EB51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _IsBillBoardNeedShow(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_FBE1DF30E902EB51__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
	}
};
