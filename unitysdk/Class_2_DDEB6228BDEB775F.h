#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessSelectTargetStrategy.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_2_94CFB48CA2D04DBC;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DDEB6228BDEB775F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11064E50)
#define CLASS_2_DDEB6228BDEB775F_METHOD_2_27FE160831643A26_OFFSET UNITYSDK_OFFSET(0x11065D40)
#define CLASS_2_DDEB6228BDEB775F_METHOD_2_531A6A2CCD324A90_OFFSET UNITYSDK_OFFSET(0x11064E90)
#define CLASS_2_DDEB6228BDEB775F_METHOD_2_6FEC003E8ACAB370_OFFSET UNITYSDK_OFFSET(0x11065790)
#define CLASS_2_DDEB6228BDEB775F_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x11065D30)
#define CLASS_2_DDEB6228BDEB775F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11064E10)
#define CLASS_2_DDEB6228BDEB775F_METHOD_2_E580E11D6E90EAF7_OFFSET UNITYSDK_OFFSET(0x11065340)
#define CLASS_2_DDEB6228BDEB775F__CTOR_OFFSET UNITYSDK_OFFSET(0x11065D50)

inline static constexpr unsigned int Class_2_DDEB6228BDEB775F_TypeDefinitionIndex = 44187;

class Class_2_DDEB6228BDEB775F : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::Class_2_94CFB48CA2D04DBC* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDEB6228BDEB775F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDEB6228BDEB775F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDEB6228BDEB775F_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_531A6A2CCD324A90(::RPG::GameCore::ChessSelectTargetStrategy a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::ChessSelectTargetStrategy, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_DDEB6228BDEB775F_METHOD_2_531A6A2CCD324A90_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_E580E11D6E90EAF7(::RPG::GameCore::TeamType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_DDEB6228BDEB775F_METHOD_2_E580E11D6E90EAF7_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_6FEC003E8ACAB370(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_DDEB6228BDEB775F_METHOD_2_6FEC003E8ACAB370_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDEB6228BDEB775F_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_2_27FE160831643A26(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DDEB6228BDEB775F_METHOD_2_27FE160831643A26_OFFSET))(this, a1);
	}
};
