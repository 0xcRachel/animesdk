#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_3C849F91800FB7FA;
class Class_2_D5EF00F29F3F5AC8;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace RPG::GameCore { class RtBattleMode; }
namespace RPG::GameCore { class RtDamageTextConfigGroup; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C803A96D4AF08345_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF47F6D0)
#define CLASS_2_C803A96D4AF08345_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF47F7E0)
#define CLASS_2_C803A96D4AF08345_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0xF47F4C0)
#define CLASS_2_C803A96D4AF08345_METHOD_2_817EEB57AC996B67_OFFSET UNITYSDK_OFFSET(0xF47EFC0)
#define CLASS_2_C803A96D4AF08345_METHOD_2_9194DE0EC7A9DFF1_OFFSET UNITYSDK_OFFSET(0xF47F3A0)
#define CLASS_2_C803A96D4AF08345_METHOD_2_992B8012C243F93E_OFFSET UNITYSDK_OFFSET(0xF47EE80)
#define CLASS_2_C803A96D4AF08345_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0xF47F4D0)
#define CLASS_2_C803A96D4AF08345_METHOD_2_CB1E131C2DC1CD1C_OFFSET UNITYSDK_OFFSET(0xF47F070)
#define CLASS_2_C803A96D4AF08345_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0xF47EF60)
#define CLASS_2_C803A96D4AF08345_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0xF47EED0)
#define CLASS_2_C803A96D4AF08345_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xF47F5E0)
#define CLASS_2_C803A96D4AF08345__CTOR_OFFSET UNITYSDK_OFFSET(0xF47ED10)
#define CLASS_2_C803A96D4AF08345__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xF47ED60)
#define CLASS_2_C803A96D4AF08345__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xF47EE30)
#define CLASS_2_C803A96D4AF08345___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF47F980)
#define CLASS_2_C803A96D4AF08345___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF47F9E0)
#define CLASS_2_C803A96D4AF08345___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xF47F8C0)
#define CLASS_2_C803A96D4AF08345___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xF47F920)

inline static constexpr unsigned int Class_2_C803A96D4AF08345_TypeDefinitionIndex = 66087;

class Class_2_C803A96D4AF08345 : public ::RPG::Client::UIController
{
public:
	::RPG::GameCore::RtBattleMode* Field_2_0; // 0x180
	::Class_2_D5EF00F29F3F5AC8* Field_2_1; // 0x188

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_992B8012C243F93E(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_992B8012C243F93E_OFFSET))(this, a1);
	}

	::Class_2_3C849F91800FB7FA* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_3C849F91800FB7FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_817EEB57AC996B67(::RPG::GameCore::IdleLiveUiVisibleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveUiVisibleData*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_817EEB57AC996B67_OFFSET))(this, a1);
	}

	::RPG::GameCore::RtDamageTextConfigGroup* Method_2_CB1E131C2DC1CD1C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::RtDamageTextConfigGroup*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_CB1E131C2DC1CD1C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::RtDamageTextConfigGroup* Method_2_9194DE0EC7A9DFF1(::System::String* a1)
	{
		return ((::RPG::GameCore::RtDamageTextConfigGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_9194DE0EC7A9DFF1_OFFSET))(this, a1);
	}

	::Class_2_D5EF00F29F3F5AC8* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_D5EF00F29F3F5AC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
