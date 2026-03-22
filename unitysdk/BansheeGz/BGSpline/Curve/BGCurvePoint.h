#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_FieldEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint_FieldsValues; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x15EDB490)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x15EDB810)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x15EDB900)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETFIELD_OFFSET UNITYSDK_OFFSET(0x15EDB9F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x15EDB3C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETINT_OFFSET UNITYSDK_OFFSET(0x15EDB560)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x15EDB720)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETVECTOR3_OFFSET UNITYSDK_OFFSET(0x15EDB630)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x15EDA170)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x15ED9E80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x15ED1780)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x15EDA700)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x15EDA410)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x15ED1610)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x15EDA9A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x15ED9670)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_OFFSET UNITYSDK_OFFSET(0x15EDD530)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15EDABF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x15ED9C60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x15ED1520)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x15ED1460)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_PRIVATEVALUESFORFIELDS_OFFSET UNITYSDK_OFFSET(0x15ECBB60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_PRIVATEFIELDADDED_OFFSET UNITYSDK_OFFSET(0x15ECAB50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_PRIVATEFIELDDELETED_OFFSET UNITYSDK_OFFSET(0x15ECD950)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETBOOL_OFFSET UNITYSDK_OFFSET(0x15EDC370)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETBOUNDS_OFFSET UNITYSDK_OFFSET(0x15EDCF40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x15EDD240)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x15ED9ED0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x15EDA460)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETFIELD_OFFSET UNITYSDK_OFFSET(0x15EDBC30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x15EDC080)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETINT_OFFSET UNITYSDK_OFFSET(0x15EDC660)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x15ED96C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETQUATERNION_OFFSET UNITYSDK_OFFSET(0x15EDCC50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETVECTOR3_OFFSET UNITYSDK_OFFSET(0x15EDC950)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x15EDA200)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x15ED9EA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x15EDA2A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x15EDA790)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x15EDA430)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x15EDA830)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x15EDA9B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15EDAC00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x15ED9DB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x15ED9690)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x15ED9E50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_PRIVATEVALUESFORFIELDS_OFFSET UNITYSDK_OFFSET(0x15ECBCE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15EDD690)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15EC1FA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15EC20F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x15ECD2B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED9600)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePoint_TypeDefinitionIndex = 27452;

	class BGCurvePoint : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum controlType; // 0x10
		::UnityEngine::Vector3 positionLocal; // 0x14
		::UnityEngine::Vector3 controlFirstLocal; // 0x20
		::UnityEngine::Vector3 controlSecondLocal; // 0x2C
		::UnityEngine::Transform* pointTransform; // 0x38
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x40
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*>* fieldsValues; // 0x48

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::UnityEngine::Vector3 position, ::System::Boolean useWorldCoordinates)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_OFFSET))(this, curve, position, useWorldCoordinates);
		}

		::System::Void _ctor_1(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::UnityEngine::Vector3 position, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum controlType, ::System::Boolean useWorldCoordinates)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_1_OFFSET))(this, curve, position, controlType, useWorldCoordinates);
		}

		::System::Void _ctor_2(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::UnityEngine::Vector3 position, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum controlType, ::UnityEngine::Vector3 controlFirst, ::UnityEngine::Vector3 controlSecond, ::System::Boolean useWorldCoordinates)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_2_OFFSET))(this, curve, position, controlType, controlFirst, controlSecond, useWorldCoordinates);
		}

		::System::Void _ctor_3(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::UnityEngine::Transform* pointTransform, ::UnityEngine::Vector3 position, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum controlType, ::UnityEngine::Vector3 controlFirst, ::UnityEngine::Vector3 controlSecond, ::System::Boolean useWorldCoordinates)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_3_OFFSET))(this, curve, pointTransform, position, controlType, controlFirst, controlSecond, useWorldCoordinates);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CURVE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* get_PrivateValuesForFields()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_PRIVATEVALUESFORFIELDS_OFFSET))(this);
		}

		::System::Void set_PrivateValuesForFields(::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_PRIVATEVALUESFORFIELDS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONLOCAL_OFFSET))(this);
		}

		::System::Void set_PositionLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_PositionLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONWORLD_OFFSET))(this);
		}

		::System::Void set_PositionWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONWORLD_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTWORLD_OFFSET))(this);
		}

		::System::Void set_ControlFirstWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTWORLD_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDWORLD_OFFSET))(this);
		}

		::System::Void set_ControlSecondWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDWORLD_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum get_ControlType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_ControlType(::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_PointTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POINTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_PointTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POINTTRANSFORM_OFFSET))(this, value);
		}

		::System::Single GetFloat(::System::String* name)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETFLOAT_OFFSET))(this, name);
		}

		::System::Boolean GetBool(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETBOOL_OFFSET))(this, name);
		}

		::System::Int32 GetInt(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETINT_OFFSET))(this, name);
		}

		::UnityEngine::Vector3 GetVector3(::System::String* name)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETVECTOR3_OFFSET))(this, name);
		}

		::UnityEngine::Quaternion GetQuaternion(::System::String* name)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETQUATERNION_OFFSET))(this, name);
		}

		::UnityEngine::Bounds GetBounds(::System::String* name)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETBOUNDS_OFFSET))(this, name);
		}

		::UnityEngine::Color GetColor(::System::String* name)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETCOLOR_OFFSET))(this, name);
		}

		::System::Object* GetField(::System::String* name, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETFIELD_OFFSET))(this, name, type);
		}

		::System::Void SetField(::System::String* name, ::System::Object* value, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETFIELD_OFFSET))(this, name, value, type);
		}

		::System::Void SetFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETFLOAT_OFFSET))(this, name, value);
		}

		::System::Void SetBool(::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETBOOL_OFFSET))(this, name, value);
		}

		::System::Void SetInt(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETINT_OFFSET))(this, name, value);
		}

		::System::Void SetVector3(::System::String* name, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETVECTOR3_OFFSET))(this, name, value);
		}

		::System::Void SetQuaternion(::System::String* name, ::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETQUATERNION_OFFSET))(this, name, value);
		}

		::System::Void SetBounds(::System::String* name, ::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETBOUNDS_OFFSET))(this, name, value);
		}

		::System::Void SetColor(::System::String* name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCOLOR_OFFSET))(this, name, value);
		}

		::UnityEngine::Vector3 Get(::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldEnum field)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_OFFSET))(this, field);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_TOSTRING_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 value, ::System::Boolean worldSpaceIsUsed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETPOSITION_OFFSET))(this, value, worldSpaceIsUsed);
		}

		::System::Void SetControlFirstLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCONTROLFIRSTLOCAL_OFFSET))(this, value);
		}

		::System::Void SetControlSecondLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCONTROLSECONDLOCAL_OFFSET))(this, value);
		}

		static ::System::Void PrivateFieldDeleted(::BansheeGz::BGSpline::Curve::BGCurvePointField* field, ::System::Int32 indexOfField, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* fieldsValues)
		{
			return ((::System::Void(*)(::BansheeGz::BGSpline::Curve::BGCurvePointField*, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_PRIVATEFIELDDELETED_OFFSET))(field, indexOfField, fieldsValues);
		}

		static ::System::Void PrivateFieldAdded(::BansheeGz::BGSpline::Curve::BGCurvePointField* field, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* fieldsValues)
		{
			return ((::System::Void(*)(::BansheeGz::BGSpline::Curve::BGCurvePointField*, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_PRIVATEFIELDADDED_OFFSET))(field, fieldsValues);
		}
	};
}
