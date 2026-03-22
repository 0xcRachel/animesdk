#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4D159A60491425EA_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0x85DC770)
#define CLASS_1_4D159A60491425EA_GET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0x85DC790)
#define CLASS_1_4D159A60491425EA_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0x85DC730)
#define CLASS_1_4D159A60491425EA_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0x85DC6D0)
#define CLASS_1_4D159A60491425EA_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0x85DC6F0)
#define CLASS_1_4D159A60491425EA_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0x85DC7B0)
#define CLASS_1_4D159A60491425EA_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0x85DC750)
#define CLASS_1_4D159A60491425EA_GET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0x85DC710)
#define CLASS_1_4D159A60491425EA_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x85DC8C0)
#define CLASS_1_4D159A60491425EA_METHOD_1_D42D3EA9D1FC6F96_OFFSET UNITYSDK_OFFSET(0x85DC9D0)
#define CLASS_1_4D159A60491425EA_METHOD_1_EA50D7BCEB18D89B_OFFSET UNITYSDK_OFFSET(0x85DC7D0)
#define CLASS_1_4D159A60491425EA_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0x85DC780)
#define CLASS_1_4D159A60491425EA_SET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0x85DC7A0)
#define CLASS_1_4D159A60491425EA_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0x85DC740)
#define CLASS_1_4D159A60491425EA_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0x85DC6E0)
#define CLASS_1_4D159A60491425EA_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0x85DC700)
#define CLASS_1_4D159A60491425EA_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0x85DC7C0)
#define CLASS_1_4D159A60491425EA_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0x85DC760)
#define CLASS_1_4D159A60491425EA_SET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0x85DC720)

inline static constexpr unsigned int Class_1_4D159A60491425EA_TypeDefinitionIndex = 44376;

class Class_1_4D159A60491425EA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0xA200);
	}
	static ::System::Boolean* StaticGet__GlobalClearAttackCache_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x3260);
	}
	static ::System::Boolean* StaticGet__HandleMaterialEffectRenderMaskConflict_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x3261);
	}
	static ::System::Boolean* StaticGet__NotResetHandlerForEntityInDieState_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x3262);
	}
	static ::System::Boolean* StaticGet__StrictLimboEntityDieCheck_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x3263);
	}
	static ::System::Boolean* StaticGet__InsertAbilityAfterUltraSkillEndDontTickAbility_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x3264);
	}
	static ::System::Boolean* StaticGet__SkipDamageStanceEventOnBreak_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x3265);
	}
	static ::System::Boolean* StaticGet__SelectFriendSkillWhenNoEnemy_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x3266);
	}
	static ::System::Boolean* StaticGet__DisableDamageStanceBreakDelayAddMdf_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D159A60491425EA_TypeDefinitionIndex)->GetStaticField(0x3267);
	}

	static ::System::Boolean get_InsertAbilityAfterUltraSkillEndDontTickAbility()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET))();
	}

	static ::System::Void set_InsertAbilityAfterUltraSkillEndDontTickAbility(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET))(value);
	}

	static ::System::Boolean get_NotResetHandlerForEntityInDieState()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET))();
	}

	static ::System::Void set_NotResetHandlerForEntityInDieState(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET))(value);
	}

	static ::System::Boolean get_StrictLimboEntityDieCheck()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_STRICTLIMBOENTITYDIECHECK_OFFSET))();
	}

	static ::System::Void set_StrictLimboEntityDieCheck(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_STRICTLIMBOENTITYDIECHECK_OFFSET))(value);
	}

	static ::System::Boolean get_HandleMaterialEffectRenderMaskConflict()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET))();
	}

	static ::System::Void set_HandleMaterialEffectRenderMaskConflict(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET))(value);
	}

	static ::System::Boolean get_SkipDamageStanceEventOnBreak()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET))();
	}

	static ::System::Void set_SkipDamageStanceEventOnBreak(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET))(value);
	}

	static ::System::Boolean get_DisableDamageStanceBreakDelayAddMdf()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET))();
	}

	static ::System::Void set_DisableDamageStanceBreakDelayAddMdf(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET))(value);
	}

	static ::System::Boolean get_GlobalClearAttackCache()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_GLOBALCLEARATTACKCACHE_OFFSET))();
	}

	static ::System::Void set_GlobalClearAttackCache(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_GLOBALCLEARATTACKCACHE_OFFSET))(value);
	}

	static ::System::Boolean get_SelectFriendSkillWhenNoEnemy()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET))();
	}

	static ::System::Void set_SelectFriendSkillWhenNoEnemy(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET))(value);
	}

	static ::System::Void Method_1_EA50D7BCEB18D89B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_METHOD_1_EA50D7BCEB18D89B_OFFSET))();
	}

	static ::System::Boolean Method_1_D42D3EA9D1FC6F96(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_METHOD_1_D42D3EA9D1FC6F96_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D159A60491425EA_METHOD_1_611142A6ECF0D805_OFFSET))(a1);
	}
};
