#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5D7E0C66569A8717_PlaceInteractState.h"
#include "unitysdk/Class_1_B0F3B4A66A2BF7E5_OperateMode.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesJoyStickState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_61D78C3DEA410E5A;
class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client { class VirtualCursorSimulateTouchActionWrapper; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_5A45D9532BBF9EF5_GET_CURJOYSTICKSTATE_OFFSET UNITYSDK_OFFSET(0x17780620)
#define CLASS_1_5A45D9532BBF9EF5_GET_ISDRAGGINGUIITEM_OFFSET UNITYSDK_OFFSET(0x17780640)
#define CLASS_1_5A45D9532BBF9EF5_GET_ISEXPANDSELECT_OFFSET UNITYSDK_OFFSET(0x17780660)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x1777FDC0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x1777EC70)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1777F900)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x1777F1F0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0x1777EF40)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_399BAD1B5B44F145_OFFSET UNITYSDK_OFFSET(0x1777F7A0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x1777F9C0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1777F970)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_410A7B1BE5300AA8_OFFSET UNITYSDK_OFFSET(0x1777F850)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1777FE10)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_46206B56BD30B28B_OFFSET UNITYSDK_OFFSET(0x17780550)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x1777F720)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x1777EBB0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x1777E960)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_A1D8C338F14D1B57_OFFSET UNITYSDK_OFFSET(0x1777FD60)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1777F000)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x1777F6C0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x17780090)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_BCD83C07168CC893_OFFSET UNITYSDK_OFFSET(0x1777A8F0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_C8242D0340185D87_OFFSET UNITYSDK_OFFSET(0x1777F420)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_CF2323683121E2E8_OFFSET UNITYSDK_OFFSET(0x1777A650)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x1777FA10)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x17780590)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_D799715F2EF979EA_1_OFFSET UNITYSDK_OFFSET(0x17780350)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x17780250)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_DB1C15B0D797DD59_OFFSET UNITYSDK_OFFSET(0x1777FE70)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x1777F0A0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_E4DDC118595D11DF_OFFSET UNITYSDK_OFFSET(0x1777F180)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_F4D6A15EBC6DEA3E_OFFSET UNITYSDK_OFFSET(0x1777A760)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_F7214300AC6F4344_1_OFFSET UNITYSDK_OFFSET(0x177804D0)
#define CLASS_1_5A45D9532BBF9EF5_METHOD_1_F7214300AC6F4344_OFFSET UNITYSDK_OFFSET(0x17780450)
#define CLASS_1_5A45D9532BBF9EF5_SET_CURJOYSTICKSTATE_OFFSET UNITYSDK_OFFSET(0x17780630)
#define CLASS_1_5A45D9532BBF9EF5_SET_ISDRAGGINGUIITEM_OFFSET UNITYSDK_OFFSET(0x17780650)
#define CLASS_1_5A45D9532BBF9EF5_SET_ISEXPANDSELECT_OFFSET UNITYSDK_OFFSET(0x17780670)
#define CLASS_1_5A45D9532BBF9EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1777E8B0)

inline static constexpr unsigned int Class_1_5A45D9532BBF9EF5_TypeDefinitionIndex = 72290;

class Class_1_5A45D9532BBF9EF5 : public ::System::Object
{
public:
	::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* Field_1_0; // 0x10
	::RPG::Client::VirtualCursorSimulateTouchActionWrapper* Field_1_1; // 0x18
	::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* Field_1_2; // 0x20
	::Class_3_97041AE90E3B2214* Field_1_3; // 0x28
	::System::Action* Field_1_4; // 0x30
	::RPG::Common::StateMachine_1<::Class_1_5A45D9532BBF9EF5*>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState, ::Class_1_61D78C3DEA410E5A*>* Field_1_6; // 0x40
	::System::Boolean _IsExpandSelect_k__BackingField; // 0x48
	::System::Boolean _IsDraggingUIItem_k__BackingField; // 0x49
	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState _CurJoyStickState_k__BackingField; // 0x4C
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_10; // 0x50

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_050D955490C4C3D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_050D955490C4C3D0_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_E4DDC118595D11DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_E4DDC118595D11DF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C8242D0340185D87()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_C8242D0340185D87_OFFSET))(this);
	}

	::System::Boolean Method_1_4C27DE82B2DFE27A(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::Void Method_1_399BAD1B5B44F145(::Class_1_5D7E0C66569A8717_PlaceInteractState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D7E0C66569A8717_PlaceInteractState))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_399BAD1B5B44F145_OFFSET))(this, a1);
	}

	::System::Void Method_1_410A7B1BE5300AA8(::Class_1_B0F3B4A66A2BF7E5_OperateMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0F3B4A66A2BF7E5_OperateMode))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_410A7B1BE5300AA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_1_A1D8C338F14D1B57(::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* a1, ::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action_3<::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_A1D8C338F14D1B57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_DB1C15B0D797DD59(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_DB1C15B0D797DD59_OFFSET))(this, a1);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_D799715F2EF979EA_1_OFFSET))(this);
	}

	::System::Void Method_1_F7214300AC6F4344(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_F7214300AC6F4344_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7214300AC6F4344_1(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_F7214300AC6F4344_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::VirtualCursor* Method_1_CF2323683121E2E8()
	{
		return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_CF2323683121E2E8_OFFSET))(this);
	}

	::Class_3_97041AE90E3B2214* Method_1_46206B56BD30B28B()
	{
		return ((::Class_3_97041AE90E3B2214*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_46206B56BD30B28B_OFFSET))(this);
	}

	::System::Void Method_1_BCD83C07168CC893(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_BCD83C07168CC893_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState Method_1_F4D6A15EBC6DEA3E()
	{
		return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_F4D6A15EBC6DEA3E_OFFSET))(this);
	}

	::System::Void Method_1_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::Class_1_61D78C3DEA410E5A* Method_1_E14A7FCF78650419()
	{
		return ((::Class_1_61D78C3DEA410E5A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_E14A7FCF78650419_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState get_CurJoyStickState()
	{
		return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_GET_CURJOYSTICKSTATE_OFFSET))(this);
	}

	::System::Void set_CurJoyStickState(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_SET_CURJOYSTICKSTATE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDraggingUIItem()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_GET_ISDRAGGINGUIITEM_OFFSET))(this);
	}

	::System::Void set_IsDraggingUIItem(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_SET_ISDRAGGINGUIITEM_OFFSET))(this, a1);
	}

	::System::Boolean get_IsExpandSelect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_GET_ISEXPANDSELECT_OFFSET))(this);
	}

	::System::Void set_IsExpandSelect(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_SET_ISEXPANDSELECT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A45D9532BBF9EF5_METHOD_1_A6CE5DAA2387E1E2_OFFSET))(this);
	}
};
