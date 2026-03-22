#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"

#define SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CBD150)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int OpCodes_TypeDefinitionIndex = 652;

	class OpCodes : public ::System::Object
	{
	public:
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x33D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanyval()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x33D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x33E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x33E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Calli()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x33F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x33F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Constrained()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3400);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3408);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Arglist()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3410);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3418);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Callvirt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3420);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3428);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3430);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3438);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3440);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3448);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Nop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3450);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3458);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Volatile()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3460);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3468);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3470);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3478);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3480);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3488);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ret()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3490);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3498);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfinally()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_And()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x34F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3500);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3508);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3510);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3518);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Leave()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3520);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3528);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ceq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3530);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3538);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3540);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rethrow()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3548);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3550);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3558);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3560);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3568);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3570);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3578);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3580);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3588);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3590);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3598);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Clt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefixref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brtrue_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x35F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3600);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Refanytype()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3608);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3610);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3618);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3620);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Castclass()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3628);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3630);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Jmp()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3638);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldnull()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3640);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3648);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3650);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3658);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3660);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Break()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3668);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3670);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3678);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3680);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3688);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Tailcall()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3690);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Initblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3698);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Not()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Call()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mul()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Endfilter()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Rem()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x36F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3700);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3708);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3710);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3718);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3720);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3728);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldtoken()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3730);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3738);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelema()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3740);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldsflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3748);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U2_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3750);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3758);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3760);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_M1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3768);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3770);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3778);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldlen()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3780);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3788);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3790);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3798);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Pop()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stsfld()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Throw()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Neg()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bne_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x37F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3800);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3808);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3810);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3818);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3820);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3828);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox_Any()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3830);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sub_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3838);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpblk()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3840);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I4_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3848);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3850);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cgt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3858);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_U1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3860);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unbox()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3868);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Cpobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3870);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Localloc()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3878);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Xor()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3880);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Unaligned()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3888);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Or()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3890);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3898);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Mkrefany()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Starg_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shl()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_I1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x38F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3900);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix5()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3908);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3910);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3918);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3920);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_2()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3928);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Box()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3930);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ckfinite()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3938);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I1_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3940);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3948);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3950);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3958);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Brfalse_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3960);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3968);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stelem_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3970);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bgt_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3978);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Newarr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3980);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3988);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_R_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3990);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_Ovf_U8_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3998);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39A0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarga_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39A8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39B0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39B8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldarg_1()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39C0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39C8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Br_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39D0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Dup()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39D8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ble()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39E0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39E8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39F0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldind_Ref()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x39F8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Beq_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A00);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldflda()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A08);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldstr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A10);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_7()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A18);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Bge_Un_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A20);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Shr()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A28);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A30);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A38);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Switch()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A40);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Add_Ovf()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A48);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A50);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Div_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A58);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Blt_Un()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A60);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stind_R8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A68);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_3()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A70);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Conv_U4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A78);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Sizeof()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A80);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldvirtftn()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A88);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_8()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A90);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldloca()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3A98);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Readonly()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3AA0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Isinst()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3AA8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_S()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3AB0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldc_I4_4()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3AB8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Prefix6()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3AC0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Stloc_0()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3AC8);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldobj()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3AD0);
		}
		static ::System::Reflection::Emit::OpCode* StaticGet_Ldelem_I()
		{
			return (::System::Reflection::Emit::OpCode*)Il2CppClass::FromTypeDefinitionIndex(OpCodes_TypeDefinitionIndex)->GetStaticField(0x3AD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODES__CCTOR_OFFSET))();
		}
	};
}
