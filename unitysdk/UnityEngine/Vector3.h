#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR3_ANGLEBETWEEN_OFFSET UNITYSDK_OFFSET(0x1A689C30)
#define UNITYENGINE_VECTOR3_ANGLE_OFFSET UNITYSDK_OFFSET(0x1A5613E0)
#define UNITYENGINE_VECTOR3_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A5616C0)
#define UNITYENGINE_VECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1A560ED0)
#define UNITYENGINE_VECTOR3_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1A561670)
#define UNITYENGINE_VECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0x1A561060)
#define UNITYENGINE_VECTOR3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2387A20)
#define UNITYENGINE_VECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x23879D0)
#define UNITYENGINE_VECTOR3_EXCLUDE_OFFSET UNITYSDK_OFFSET(0x1A689DA0)
#define UNITYENGINE_VECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2387970)
#define UNITYENGINE_VECTOR3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1A561820)
#define UNITYENGINE_VECTOR3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1A561840)
#define UNITYENGINE_VECTOR3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1A55B5B0)
#define UNITYENGINE_VECTOR3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x1A689C10)
#define UNITYENGINE_VECTOR3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2387870)
#define UNITYENGINE_VECTOR3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1A561860)
#define UNITYENGINE_VECTOR3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x2387B80)
#define UNITYENGINE_VECTOR3_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1A5618A0)
#define UNITYENGINE_VECTOR3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x2387AE0)
#define UNITYENGINE_VECTOR3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1A561800)
#define UNITYENGINE_VECTOR3_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1A561880)
#define UNITYENGINE_VECTOR3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1A55B1D0)
#define UNITYENGINE_VECTOR3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x2387BB0)
#define UNITYENGINE_VECTOR3_GET_UP_OFFSET UNITYSDK_OFFSET(0x1A55B3C0)
#define UNITYENGINE_VECTOR3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1A561150)
#define UNITYENGINE_VECTOR3_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1A560890)
#define UNITYENGINE_VECTOR3_LERP_OFFSET UNITYSDK_OFFSET(0x1A560840)
#define UNITYENGINE_VECTOR3_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A561120)
#define UNITYENGINE_VECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0x1A5617D0)
#define UNITYENGINE_VECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0x1A5617A0)
#define UNITYENGINE_VECTOR3_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1A5608D0)
#define UNITYENGINE_VECTOR3_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x2387A50)
#define UNITYENGINE_VECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1A561090)
#define UNITYENGINE_VECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1A55BA60)
#define UNITYENGINE_VECTOR3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1A6895B0)
#define UNITYENGINE_VECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A6895D0)
#define UNITYENGINE_VECTOR3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A689620)
#define UNITYENGINE_VECTOR3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1A689590)
#define UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1A689570)
#define UNITYENGINE_VECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1A689510)
#define UNITYENGINE_VECTOR3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1A689540)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE2_OFFSET UNITYSDK_OFFSET(0x1A5607B0)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE3_OFFSET UNITYSDK_OFFSET(0x1A5607D0)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1A5607E0)
#define UNITYENGINE_VECTOR3_ORTHONORMALIZE_OFFSET UNITYSDK_OFFSET(0x1A5607C0)
#define UNITYENGINE_VECTOR3_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x1A561340)
#define UNITYENGINE_VECTOR3_PROJECT_OFFSET UNITYSDK_OFFSET(0x1A5612A0)
#define UNITYENGINE_VECTOR3_REFLECT_OFFSET UNITYSDK_OFFSET(0x1A560FF0)
#define UNITYENGINE_VECTOR3_ROTATETOWARDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A689ED0)
#define UNITYENGINE_VECTOR3_ROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0x1A5607F0)
#define UNITYENGINE_VECTOR3_SCALE_1_OFFSET UNITYSDK_OFFSET(0x2387950)
#define UNITYENGINE_VECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0x1A560E70)
#define UNITYENGINE_VECTOR3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x23878D0)
#define UNITYENGINE_VECTOR3_SET_OFFSET UNITYSDK_OFFSET(0x6248A0)
#define UNITYENGINE_VECTOR3_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1A5614F0)
#define UNITYENGINE_VECTOR3_SLERPUNCLAMPED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A689EC0)
#define UNITYENGINE_VECTOR3_SLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1A560760)
#define UNITYENGINE_VECTOR3_SLERP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A689EB0)
#define UNITYENGINE_VECTOR3_SLERP_OFFSET UNITYSDK_OFFSET(0x1A560710)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x1A560CF0)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_2_OFFSET UNITYSDK_OFFSET(0x1A560A40)
#define UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1A5609A0)
#define UNITYENGINE_VECTOR3_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A561780)
#define UNITYENGINE_VECTOR3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x23B6FA0)
#define UNITYENGINE_VECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x23B6F90)
#define UNITYENGINE_VECTOR3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A689E40)
#define UNITYENGINE_VECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2387930)
#define UNITYENGINE_VECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x6248A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector3_TypeDefinitionIndex = 4035;

	struct alignas(4) Vector3
	{
		static ::UnityEngine::Vector3* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::UnityEngine::Vector3* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x3C);
		}
		static ::UnityEngine::Vector3* StaticGet_forwardVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::UnityEngine::Vector3* StaticGet_downVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x54);
		}
		static ::UnityEngine::Vector3* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x60);
		}
		static ::UnityEngine::Vector3* StaticGet_leftVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x6C);
		}
		static ::UnityEngine::Vector3* StaticGet_upVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x78);
		}
		static ::UnityEngine::Vector3* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x84);
		}
		static ::UnityEngine::Vector3* StaticGet_rightVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x90);
		}
		static ::UnityEngine::Vector3* StaticGet_backVector()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x9C);
		}
		// static const ::System::Single kEpsilon; // 0x0
		// static const ::System::Single kEpsilonNormalSqrt; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		UnityEngine::Vector3 operator+(const UnityEngine::Vector3& b) const
		{
			return { x + b.x, y + b.y, z + b.z };
		}

		UnityEngine::Vector3 operator-(const UnityEngine::Vector3& b) const
		{
			return { x - b.x, y - b.y, z - b.z };
		}

		UnityEngine::Vector3 operator-() const
		{
			return { -x, -y, -z };
		}

		UnityEngine::Vector3 operator*(float s) const
		{
			return { x * s, y * s, z * s };
		}

		UnityEngine::Vector3 operator/(float s) const
		{
			return { x / s, y / s, z / s };
		}

		float operator*(const UnityEngine::Vector3& b) const
		{
			return x * b.x + y * b.y + z * b.z;
		}

		bool operator==(const UnityEngine::Vector3& b) const
		{
			return x == b.x && y == b.y && z == b.z;
		}

		bool operator!=(const UnityEngine::Vector3& b) const
		{
			return x != b.x || y != b.y || z != b.z;
		}

		UnityEngine::Vector3& operator+=(const UnityEngine::Vector3& b)
		{
			x += b.x;
			y += b.y;
			z += b.z;

			return *this;
		}

		UnityEngine::Vector3& operator-=(const UnityEngine::Vector3& b)
		{
			x -= b.x;
			y -= b.y;
			z -= b.z;

			return *this;
		}

		UnityEngine::Vector3& operator*=(float s)
		{
			x *= s;
			y *= s;
			z *= s;

			return *this;
		}

		UnityEngine::Vector3& operator/=(float s)
		{
			x /= s;
			y /= s;
			z /= s;

			return *this;
		}

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3__CTOR_OFFSET))(this, x, y, z);
		}

		::System::Void _ctor_1(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3__CTOR_1_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERP_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 SlerpUnclamped(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::System::Void OrthoNormalize2(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ORTHONORMALIZE2_OFFSET))(a, b);
		}

		static ::System::Void OrthoNormalize(::UnityEngine::Vector3& normal, ::UnityEngine::Vector3& tangent)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ORTHONORMALIZE_OFFSET))(normal, tangent);
		}

		static ::System::Void OrthoNormalize3(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b, ::UnityEngine::Vector3& c)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ORTHONORMALIZE3_OFFSET))(a, b, c);
		}

		static ::System::Void OrthoNormalize_1(::UnityEngine::Vector3& normal, ::UnityEngine::Vector3& tangent, ::UnityEngine::Vector3& binormal)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ORTHONORMALIZE_1_OFFSET))(normal, tangent, binormal);
		}

		static ::UnityEngine::Vector3 RotateTowards(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::System::Single maxRadiansDelta, ::System::Single maxMagnitudeDelta)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ROTATETOWARDS_OFFSET))(current, target, maxRadiansDelta, maxMagnitudeDelta);
		}

		static ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_LERP_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 MoveTowards(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::System::Single maxDistanceDelta)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MOVETOWARDS_OFFSET))(current, target, maxDistanceDelta);
		}

		static ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::UnityEngine::Vector3& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SMOOTHDAMP_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed);
		}

		static ::UnityEngine::Vector3 SmoothDamp_1(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::UnityEngine::Vector3& currentVelocity, ::System::Single smoothTime)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SMOOTHDAMP_1_OFFSET))(current, target, currentVelocity, smoothTime);
		}

		static ::UnityEngine::Vector3 SmoothDamp_2(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::UnityEngine::Vector3& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SMOOTHDAMP_2_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Set(::System::Single newX, ::System::Single newY, ::System::Single newZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SET_OFFSET))(this, newX, newY, newZ);
		}

		static ::UnityEngine::Vector3 Scale(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SCALE_1_OFFSET))(this, scale);
		}

		static ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_CROSS_OFFSET))(lhs, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector3 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_EQUALS_1_OFFSET))(this, other);
		}

		static ::UnityEngine::Vector3 Reflect(::UnityEngine::Vector3 inDirection, ::UnityEngine::Vector3 inNormal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_REFLECT_OFFSET))(inDirection, inNormal);
		}

		static ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_NORMALIZE_OFFSET))(value);
		}

		::System::Void Normalize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_NORMALIZE_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_normalized()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_NORMALIZED_OFFSET))(this);
		}

		static ::System::Single Dot(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_DOT_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector3 Project(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 onNormal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_PROJECT_OFFSET))(vector, onNormal);
		}

		static ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_PROJECTONPLANE_OFFSET))(vector, planeNormal);
		}

		static ::System::Single Angle(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ANGLE_OFFSET))(from, to);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 axis)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SIGNEDANGLE_OFFSET))(from, to, axis);
		}

		static ::System::Single Distance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_DISTANCE_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3 ClampMagnitude(::UnityEngine::Vector3 vector, ::System::Single maxLength)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_CLAMPMAGNITUDE_OFFSET))(vector, maxLength);
		}

		static ::System::Single Magnitude(::UnityEngine::Vector3 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MAGNITUDE_OFFSET))(vector);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_MAGNITUDE_OFFSET))(this);
		}

		static ::System::Single SqrMagnitude(::UnityEngine::Vector3 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SQRMAGNITUDE_OFFSET))(vector);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Min(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MIN_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector3 Max(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_MAX_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Vector3 get_zero()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_one()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_ONE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_forward()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_FORWARD_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_back()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_BACK_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_UP_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_down()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_DOWN_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_left()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_right()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_RIGHT_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_positiveInfinity()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_POSITIVEINFINITY_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_negativeInfinity()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_NEGATIVEINFINITY_OFFSET))();
		}

		static ::UnityEngine::Vector3 op_Addition(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3 op_Subtraction(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3 op_UnaryNegation(::UnityEngine::Vector3 a)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Vector3 a, ::System::Single d)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::UnityEngine::Vector3 op_Multiply_1(::System::Single d, ::UnityEngine::Vector3 a)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::UnityEngine::Vector3 op_Division(::UnityEngine::Vector3 a, ::System::Single d)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_DIVISION_OFFSET))(a, d);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_TOSTRING_1_OFFSET))(this, format);
		}

		static ::UnityEngine::Vector3 get_fwd()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_GET_FWD_OFFSET))();
		}

		static ::System::Single AngleBetween(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ANGLEBETWEEN_OFFSET))(from, to);
		}

		static ::UnityEngine::Vector3 Exclude(::UnityEngine::Vector3 excludeThis, ::UnityEngine::Vector3 fromThat)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_EXCLUDE_OFFSET))(excludeThis, fromThat);
		}

		static ::System::Void Slerp_Injected(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b, ::System::Single t, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERP_INJECTED_OFFSET))(a, b, t, ret);
		}

		static ::System::Void SlerpUnclamped_Injected(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b, ::System::Single t, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_SLERPUNCLAMPED_INJECTED_OFFSET))(a, b, t, ret);
		}

		static ::System::Void RotateTowards_Injected(::UnityEngine::Vector3& current, ::UnityEngine::Vector3& target, ::System::Single maxRadiansDelta, ::System::Single maxMagnitudeDelta, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR3_ROTATETOWARDS_INJECTED_OFFSET))(current, target, maxRadiansDelta, maxMagnitudeDelta, ret);
		}
	};
}
