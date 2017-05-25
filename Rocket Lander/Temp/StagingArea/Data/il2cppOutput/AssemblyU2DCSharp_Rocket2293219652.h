#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rocket
struct  Rocket_t2293219652  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Rocket::gravity
	float ___gravity_2;
	// System.Single Rocket::rocketMass
	float ___rocketMass_3;
	// System.Single Rocket::thrustForce
	float ___thrustForce_4;
	// System.Single Rocket::turningForce
	float ___turningForce_5;
	// System.Single Rocket::fuel
	float ___fuel_6;
	// UnityEngine.Vector2 Rocket::power
	Vector2_t2243707579  ___power_7;
	// UnityEngine.UI.Text Rocket::scoreText
	Text_t356221433 * ___scoreText_10;
	// UnityEngine.UI.Text Rocket::fuelText
	Text_t356221433 * ___fuelText_11;
	// System.String Rocket::jsonString
	String_t* ___jsonString_12;
	// System.Boolean Rocket::splashOnce
	bool ___splashOnce_15;
	// System.Boolean Rocket::newGame
	bool ___newGame_16;
	// UnityEngine.Rigidbody2D Rocket::rigidbody2D
	Rigidbody2D_t502193897 * ___rigidbody2D_17;

public:
	inline static int32_t get_offset_of_gravity_2() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___gravity_2)); }
	inline float get_gravity_2() const { return ___gravity_2; }
	inline float* get_address_of_gravity_2() { return &___gravity_2; }
	inline void set_gravity_2(float value)
	{
		___gravity_2 = value;
	}

	inline static int32_t get_offset_of_rocketMass_3() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___rocketMass_3)); }
	inline float get_rocketMass_3() const { return ___rocketMass_3; }
	inline float* get_address_of_rocketMass_3() { return &___rocketMass_3; }
	inline void set_rocketMass_3(float value)
	{
		___rocketMass_3 = value;
	}

	inline static int32_t get_offset_of_thrustForce_4() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___thrustForce_4)); }
	inline float get_thrustForce_4() const { return ___thrustForce_4; }
	inline float* get_address_of_thrustForce_4() { return &___thrustForce_4; }
	inline void set_thrustForce_4(float value)
	{
		___thrustForce_4 = value;
	}

	inline static int32_t get_offset_of_turningForce_5() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___turningForce_5)); }
	inline float get_turningForce_5() const { return ___turningForce_5; }
	inline float* get_address_of_turningForce_5() { return &___turningForce_5; }
	inline void set_turningForce_5(float value)
	{
		___turningForce_5 = value;
	}

	inline static int32_t get_offset_of_fuel_6() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___fuel_6)); }
	inline float get_fuel_6() const { return ___fuel_6; }
	inline float* get_address_of_fuel_6() { return &___fuel_6; }
	inline void set_fuel_6(float value)
	{
		___fuel_6 = value;
	}

	inline static int32_t get_offset_of_power_7() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___power_7)); }
	inline Vector2_t2243707579  get_power_7() const { return ___power_7; }
	inline Vector2_t2243707579 * get_address_of_power_7() { return &___power_7; }
	inline void set_power_7(Vector2_t2243707579  value)
	{
		___power_7 = value;
	}

	inline static int32_t get_offset_of_scoreText_10() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___scoreText_10)); }
	inline Text_t356221433 * get_scoreText_10() const { return ___scoreText_10; }
	inline Text_t356221433 ** get_address_of_scoreText_10() { return &___scoreText_10; }
	inline void set_scoreText_10(Text_t356221433 * value)
	{
		___scoreText_10 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_10, value);
	}

	inline static int32_t get_offset_of_fuelText_11() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___fuelText_11)); }
	inline Text_t356221433 * get_fuelText_11() const { return ___fuelText_11; }
	inline Text_t356221433 ** get_address_of_fuelText_11() { return &___fuelText_11; }
	inline void set_fuelText_11(Text_t356221433 * value)
	{
		___fuelText_11 = value;
		Il2CppCodeGenWriteBarrier(&___fuelText_11, value);
	}

	inline static int32_t get_offset_of_jsonString_12() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___jsonString_12)); }
	inline String_t* get_jsonString_12() const { return ___jsonString_12; }
	inline String_t** get_address_of_jsonString_12() { return &___jsonString_12; }
	inline void set_jsonString_12(String_t* value)
	{
		___jsonString_12 = value;
		Il2CppCodeGenWriteBarrier(&___jsonString_12, value);
	}

	inline static int32_t get_offset_of_splashOnce_15() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___splashOnce_15)); }
	inline bool get_splashOnce_15() const { return ___splashOnce_15; }
	inline bool* get_address_of_splashOnce_15() { return &___splashOnce_15; }
	inline void set_splashOnce_15(bool value)
	{
		___splashOnce_15 = value;
	}

	inline static int32_t get_offset_of_newGame_16() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___newGame_16)); }
	inline bool get_newGame_16() const { return ___newGame_16; }
	inline bool* get_address_of_newGame_16() { return &___newGame_16; }
	inline void set_newGame_16(bool value)
	{
		___newGame_16 = value;
	}

	inline static int32_t get_offset_of_rigidbody2D_17() { return static_cast<int32_t>(offsetof(Rocket_t2293219652, ___rigidbody2D_17)); }
	inline Rigidbody2D_t502193897 * get_rigidbody2D_17() const { return ___rigidbody2D_17; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidbody2D_17() { return &___rigidbody2D_17; }
	inline void set_rigidbody2D_17(Rigidbody2D_t502193897 * value)
	{
		___rigidbody2D_17 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody2D_17, value);
	}
};

struct Rocket_t2293219652_StaticFields
{
public:
	// System.Int32 Rocket::success
	int32_t ___success_8;
	// System.Int32 Rocket::fails
	int32_t ___fails_9;
	// System.Boolean Rocket::isWasted
	bool ___isWasted_13;
	// System.Boolean Rocket::isLanding
	bool ___isLanding_14;

public:
	inline static int32_t get_offset_of_success_8() { return static_cast<int32_t>(offsetof(Rocket_t2293219652_StaticFields, ___success_8)); }
	inline int32_t get_success_8() const { return ___success_8; }
	inline int32_t* get_address_of_success_8() { return &___success_8; }
	inline void set_success_8(int32_t value)
	{
		___success_8 = value;
	}

	inline static int32_t get_offset_of_fails_9() { return static_cast<int32_t>(offsetof(Rocket_t2293219652_StaticFields, ___fails_9)); }
	inline int32_t get_fails_9() const { return ___fails_9; }
	inline int32_t* get_address_of_fails_9() { return &___fails_9; }
	inline void set_fails_9(int32_t value)
	{
		___fails_9 = value;
	}

	inline static int32_t get_offset_of_isWasted_13() { return static_cast<int32_t>(offsetof(Rocket_t2293219652_StaticFields, ___isWasted_13)); }
	inline bool get_isWasted_13() const { return ___isWasted_13; }
	inline bool* get_address_of_isWasted_13() { return &___isWasted_13; }
	inline void set_isWasted_13(bool value)
	{
		___isWasted_13 = value;
	}

	inline static int32_t get_offset_of_isLanding_14() { return static_cast<int32_t>(offsetof(Rocket_t2293219652_StaticFields, ___isLanding_14)); }
	inline bool get_isLanding_14() const { return ___isLanding_14; }
	inline bool* get_address_of_isLanding_14() { return &___isLanding_14; }
	inline void set_isLanding_14(bool value)
	{
		___isLanding_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
