#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 226
        // Alignment: 4
        // Size: 0x4
        enum class EModifierValue : std::uint32_t
        {
            MODIFIER_VALUE_MATERIAL_OVERRIDE = 0x0,
            // MPropertyFriendlyName "ProcBuildupPercent"
            MODIFIER_VALUE_PROC_BUILDUP_PERCENTAGE = 0x1,
            // MPropertyFriendlyName "FrictionPercentage"
            MODIFIER_VALUE_FRICTION_PERCENTAGE = 0x2,
            // MPropertyFriendlyName "BaseVelocity"
            // MScriptDescription "GetModifierBaseVelocity"
            MODIFIER_VALUE_BASE_VELOCITY = 0x3,
            // MPropertyFriendlyName "MoveType"
            // MScriptDescription "GetMoveTypeOverride"
            MODIFIER_VALUE_MOVE_TYPE_OVERRIDE = 0x4,
            // MPropertyFriendlyName "TargetIdentifierOverride"
            // MScriptDescription "GetTargetIdentifierOverride"
            MODIFIER_VALUE_TARGET_IDENTIFIER_OVERRIDE = 0x5,
            // MPropertyFriendlyName "TargetIdentifierOverrideOrientation"
            // MScriptDescription "GetTargetIdentifierOverrideOrientation"
            MODIFIER_VALUE_TARGET_IDENTIFIER_OVERRIDE_ORIENTATION = 0x6,
            MODIFIER_VALUE_INCOMING_DAMAGE_PERCENTAGE = 0x7,
            // MScriptDescription "GetModifierGravityScale"
            MODIFIER_VALUE_GRAVITY_SCALE = 0x8,
            // MPropertyFriendlyName "BodyGroupChoice"
            // MScriptDescription "GetBodyGroupChoice"
            MODIFIER_VALUE_BODY_GROUP_CHOICE_OVERRIDE = 0x9,
            // MPropertyFriendlyName "Vehicle Top Speed Scale Override"
            // MScriptDescription "GetVehicleTopSpeedScale"
            MODIFIER_VALUE_VEHICLE_TOP_SPEED_SCALE = 0xa,
            MODIFIER_VALUE_OUTGOING_DAMAGE_PERCENTAGE = 0xb,
            // MScriptDescription "GetAdditionalVelocity"
            MODIFIER_VALUE_ADDITIONAL_VELOCITY = 0xc,
            // MPropertyFriendlyName "Movement Gait Override"
            // MScriptDescription "GetMovementGaitOverride"
            MODIFIER_VALUE_MOVEMENT_GAIT_OVERRIDE = 0xd,
            // MPropertyFriendlyName "Movement Gait Set Override"
            // MScriptDescription "GetMovementGaitSetOverride"
            MODIFIER_VALUE_MOVEMENT_GAIT_SET_OVERRIDE = 0xe,
            // MPropertyFriendlyName "Stance Override"
            // MScriptDescription "GetStanceOverride"
            MODIFIER_VALUE_STANCE_OVERRIDE = 0xf,
            // MPropertyDescription "Flat Melee Damage given from boons that will be scaled by all increases and multipliers"
            MODIFIER_VALUE_BASE_MELEE_DAMAGE_FROM_LEVEL = 0x10,
            // MPropertyDescription "Flat Bullet Damage given from boons that will be scaled by all increases and multipliers"
            MODIFIER_VALUE_BASE_BULLET_DAMAGE_FROM_LEVEL = 0x11,
            // MPropertyDescription "Flat Alt-fire Bullet Damage given from boons that will be scaled by all increases and multipliers"
            MODIFIER_VALUE_BASE_BULLET_DAMAGE_FROM_LEVEL_ALT_FIRE = 0x12,
            // MPropertyDescription "Bullet and Melee damage increase"
            MODIFIER_VALUE_WEAPON_DAMAGE_INCREASE = 0x13,
            // MPropertyDescription "Bullet damage increase"
            MODIFIER_VALUE_BULLET_DAMAGE_INCREASE = 0x14,
            // MPropertyDescription "Melee Damage increase"
            MODIFIER_VALUE_MELEE_DAMAGE_INCREASE = 0x15,
            // MPropertyDescription "Bullet and Melee Damage increase at close range"
            MODIFIER_VALUE_CLOSE_RANGE_WEAPON_DAMAGE_INCREASE = 0x16,
            // MPropertyDescription "Bullet Damage increase at long range"
            MODIFIER_VALUE_LONG_RANGE_BULLET_DAMAGE_INCREASE = 0x17,
            // MPropertyDescription "All damage multiplier, after increases"
            MODIFIER_VALUE_ALL_DAMAGE_MULTIPLIER = 0x18,
            // MPropertyDescription "Bullet damage multiplier, after increases"
            MODIFIER_VALUE_BULLET_DAMAGE_MULTIPLIER = 0x19,
            // MPropertyDescription "Melee damage multiplier, after increases"
            MODIFIER_VALUE_MELEE_DAMAGE_MULTIPLIER = 0x1a,
            // MPropertyDescription "Tech damage multiplier, after increases"
            MODIFIER_VALUE_TECH_DAMAGE_MULTIPLIER = 0x1b,
            // MPropertyDescription "Flat bullet damage that is added after all the scaling is done."
            MODIFIER_VALUE_FLAT_BULLET_DAMAGE_POST_SCALE = 0x1c,
            // MPropertyDescription "All damage amplification on the target"
            MODIFIER_VALUE_ALL_DAMAGE_TAKEN_INCREASE = 0x1d,
            // MPropertyDescription "Bullet damage amplification on the target"
            MODIFIER_VALUE_BULLET_DAMAGE_TAKEN_INCREASE = 0x1e,
            // MPropertyDescription "Tech damage amplification on the target"
            MODIFIER_VALUE_TECH_DAMAGE_TAKEN_INCREASE = 0x1f,
            // MPropertyDescription "Tech Resist (positive)"
            MODIFIER_VALUE_TECH_RESIST = 0x20,
            // MPropertyDescription "Tech Resist Reductions (negative)"
            MODIFIER_VALUE_TECH_RESIST_REDUCTION = 0x21,
            // MPropertyDescription "Bullet Resist (positive)"
            MODIFIER_VALUE_BULLET_ARMOR_DAMAGE_RESIST = 0x22,
            // MPropertyDescription "Bullet Resist Reductions (negative)"
            MODIFIER_VALUE_BULLET_AND_MELEE_RESIST_REDUCTION = 0x23,
            // MPropertyDescription "Bullet resist against NPC"
            MODIFIER_VALUE_BULLET_RESIST_NON_HERO = 0x24,
            // MPropertyDescription "Melee Resist (positive)"
            MODIFIER_VALUE_MELEE_RESIST = 0x25,
            // MPropertyDescription "Melee Resist Reductions (negative)"
            MODIFIER_VALUE_MELEE_RESIST_REDUCTION = 0x26,
            // MPropertyDescription "% damage reduction post armor, between 0 and -100, with -100 being 100% reduction"
            MODIFIER_VALUE_ABILITY_DAMAGE_REDUCTION_PERCENT = 0x27,
            // MPropertyDescription "% damage reduction post armor, between 0 and -100, with -100 being 100% reduction"
            MODIFIER_VALUE_BULLET_DAMAGE_REDUCTION_PERCENT = 0x28,
            // MPropertyDescription "Reduces all damage taken"
            MODIFIER_VALUE_ALL_DAMAGE_TAKEN_REDUCTION = 0x29,
            // MPropertyDescription "Scale the crit Multiplier"
            MODIFIER_VALUE_CRIT_DAMAGE_RECEIVED_SCALE = 0x2a,
            MODIFIER_VALUE_HEALTH_MAX = 0x2b,
            MODIFIER_VALUE_MAX_HEALTH_OVERRIDE = 0x2c,
            MODIFIER_VALUE_HEALTH_MAX_PERCENT = 0x2d,
            // MPropertyDescription "% on Base Health (Hero Base + Level up) not items"
            MODIFIER_VALUE_BASE_HEALTH_PERCENT = 0x2e,
            // MPropertyDescription "Base Health Increase from Level ups"
            MODIFIER_VALUE_BASE_HEALTH_FROM_LEVEL = 0x2f,
            MODIFIER_VALUE_BONUS_MAX_HEALTH_NO_SCALE = 0x30,
            MODIFIER_VALUE_HEALTH_REGEN_PER_SECOND = 0x31,
            MODIFIER_VALUE_HEALTH_REGEN_PER_SECOND_PERCENT = 0x32,
            MODIFIER_VALUE_REGEN_MAX_HEALTH_PERCENT_PER_SECOND = 0x33,
            // MPropertyDescription "Health regen applied to us from an external source (ie. not intrinsic health regen)"
            MODIFIER_VALUE_EXTERNAL_HEALTH_REGEN_PER_SECOND = 0x34,
            // MPropertyDescription "Regen that cannot be reduced by anti heal sources (IE Fountain)"
            MODIFIER_VALUE_EXTERNAL_REGEN_NO_REDUCTION = 0x35,
            MODIFIER_VALUE_EXTERNAL_HEALTH_REGEN_LOOP_SOUND_OVERRIDE = 0x36,
            MODIFIER_VALUE_OUT_OF_COMBAT_HEALTH_REGEN = 0x37,
            MODIFIER_VALUE_BARRIER_AMP_CAST_PERCENT = 0x38,
            MODIFIER_VALUE_BARRIER_AMP_RECEIVE_PERCENT = 0x39,
            MODIFIER_VALUE_HEAL_AMP_CAST_PERCENT = 0x3a,
            MODIFIER_VALUE_HEAL_AMP_RECEIVE_PERCENT = 0x3b,
            MODIFIER_VALUE_HEAL_AMP_REGEN_PERCENT = 0x3c,
            // MPropertyDescription "Reduce the effects of negative heal amp"
            MODIFIER_VALUE_HEAL_DEGEN_RESISTANCE = 0x3d,
            MODIFIER_VALUE_AMMO_CLIP_SIZE = 0x3e,
            MODIFIER_VALUE_AMMO_CLIP_SIZE_PERCENT = 0x3f,
            MODIFIER_VALUE_AMMO_CLIP_SIZE_OVERRIDE = 0x40,
            MODIFIER_VALUE_RELOAD_SPEED = 0x41,
            MODIFIER_VALUE_RELOAD_SPEED_CONSTANT = 0x42,
            // MPropertyDescription "Limit on how fast you can move (walking/sprinting/whatever)"
            MODIFIER_VALUE_MOVE_SPEED_LIMIT = 0x43,
            // MPropertyDescription "Default walking speed (non-sprint)"
            MODIFIER_VALUE_MOVEMENT_SPEED_MAX = 0x44,
            MODIFIER_VALUE_MOVEMENT_SPEED_MAX_PERCENT = 0x45,
            MODIFIER_VALUE_MOVEMENT_SPEED_WHILE_ZOOMED_PENALTY_REDUCTION_PERCENT = 0x46,
            MODIFIER_VALUE_MOVEMENT_SPEED_WHILE_SHOOTING_PENALTY_REDUCTION_PERCENT = 0x47,
            // MPropertyDescription "what abilities should use to slow enemies"
            MODIFIER_VALUE_MOVEMENT_SPEED_SLOW_PERCENT = 0x48,
            // MPropertyDescription "Abilities that weaken ground dash distance"
            MODIFIER_VALUE_MOVEMENT_GROUND_DASH_REDUCTION_PERCENT = 0x49,
            // MPropertyDescription "Abilities that boost ground dash distance"
            MODIFIER_VALUE_MOVEMENT_GROUND_DASH_INCREASE_PERCENT = 0x4a,
            MODIFIER_VALUE_AIR_MOVE_DISTANCE_INCREASE_PERCENT = 0x4b,
            // MPropertyDescription "Scale Slide speed (alters friction) to get more distance"
            MODIFIER_VALUE_MOVEMENT_SLIDE_DISTANCE_SCALE = 0x4c,
            // MPropertyDescription "Scale Slide Turn"
            MODIFIER_VALUE_MOVEMENT_SLIDE_TURN_SCALE = 0x4d,
            // MPropertyDescription "Weaken the effect of Slows"
            MODIFIER_VALUE_MOVEMENT_SLOW_RESISTANCE = 0x4e,
            MODIFIER_VALUE_BONUS_ATTACK_RANGE = 0x4f,
            MODIFIER_VALUE_BONUS_ATTACK_RANGE_PERCENT = 0x50,
            MODIFIER_VALUE_ZOOM_INCREASE_PERCENT = 0x51,
            MODIFIER_VALUE_ZOOM_POSITION = 0x52,
            MODIFIER_VALUE_WEAPON_RECOIL_REDUCTION_PERCENT = 0x53,
            MODIFIER_VALUE_SPRINT_SPEED_BONUS = 0x54,
            MODIFIER_VALUE_SPRINT_SPEED_MAX_PERCENT = 0x55,
            // MPropertyDescription "how long the player has been sprinting"
            MODIFIER_VALUE_SPRINT_DURATION = 0x56,
            MODIFIER_VALUE_SPRINT_ACCELERATION = 0x57,
            MODIFIER_VALUE_DISPLAY_SPEED_CURRENT = 0x58,
            MODIFIER_VALUE_DISPLAY_SPEED_MAX = 0x59,
            MODIFIER_VALUE_AVOID_SPELL = 0x5a,
            // MPropertyDescription "the stat version of fire rate adjustment"
            MODIFIER_VALUE_FIRE_RATE = 0x5b,
            // MPropertyDescription "the stat version of negative fire rate"
            MODIFIER_VALUE_FIRE_RATE_SLOW = 0x5c,
            // MPropertyDescription "Increase Cycle Time (Decrease FireRate)"
            MODIFIER_VALUE_CYCLE_TIME_PERCENTAGE = 0x5d,
            MODIFIER_VALUE_SPREAD_SCALE = 0x5e,
            MODIFIER_VALUE_CYCLE_TIME = 0x5f,
            MODIFIER_VALUE_AMMO_COST_REDUCTION = 0x60,
            MODIFIER_VALUE_STATUS_RESISTANCE = 0x61,
            MODIFIER_VALUE_COOLDOWN_REDUCTION_PERCENTAGE = 0x62,
            MODIFIER_VALUE_COOLDOWN_MAX_TIME = 0x63,
            MODIFIER_VALUE_COOLDOWN_BETWEEN_CHARGE_REDUCTION_PERCENTAGE = 0x64,
            MODIFIER_VALUE_ITEM_COOLDOWN_REDUCTION_PERCENTAGE = 0x65,
            MODIFIER_VALUE_BONUS_ABILITY_CHARGES = 0x66,
            MODIFIER_VALUE_BONUS_ABILITY_DURATION_PERCENTAGE = 0x67,
            MODIFIER_VALUE_ENABLE_CHARGES = 0x68,
            MODIFIER_VALUE_MELEEATTACK_SPEED = 0x69,
            MODIFIER_VALUE_MELEE_TRAVEL_DISTANCE_PERCENTAGE = 0x6a,
            MODIFIER_VALUE_PARRY_COOLDOWN_REDUCTION_FIXED = 0x6b,
            MODIFIER_VALUE_FIREARM_ACCURACY_PERCENTAGE = 0x6c,
            MODIFIER_VALUE_TURN_SIDEMOVE_PERCENTAGE = 0x6d,
            MODIFIER_VALUE_CHARGE_SPEED = 0x6e,
            MODIFIER_VALUE_TELEPORT_COOLDOWN_REDUCTION_PERCENT = 0x6f,
            MODIFIER_VALUE_FALL_SPEED_MAX = 0x70,
            MODIFIER_VALUE_AIR_SPEED_MAX = 0x71,
            MODIFIER_VALUE_BULLET_EVASION = 0x72,
            MODIFIER_VALUE_PARRY_PIERCE = 0x73,
            MODIFIER_VALUE_BULLET_SHIELD_HEALTH = 0x74,
            MODIFIER_VALUE_BULLET_SHIELD_HEALTH_MAX = 0x75,
            MODIFIER_VALUE_BULLET_SHIELD_DAMAGE_PERCENT = 0x76,
            MODIFIER_VALUE_BARRIER_HEALTH = 0x77,
            MODIFIER_VALUE_BONUS_CRIT_DAMAGE_PERCENT = 0x78,
            MODIFIER_VALUE_HEIGHT_ADVANTAGE_BONUS_BASE_DAMAGE_PERCENT = 0x79,
            MODIFIER_VALUE_BONUS_WEAPON_DAMAGE_CLOSE_RANGE_MAX_RANGE = 0x7a,
            MODIFIER_VALUE_BONUS_BULLET_DAMAGE_LONG_RANGE_MIN_RANGE = 0x7b,
            MODIFIER_VALUE_TECH_RANGE_ADDITIVE = 0x7c,
            MODIFIER_VALUE_TECH_RANGE_PERCENT = 0x7d,
            MODIFIER_VALUE_TECH_RANGE_CLAMP = 0x7e,
            MODIFIER_VALUE_TECH_RADIUS_ADDITIVE = 0x7f,
            MODIFIER_VALUE_TECH_RADIUS_PERCENT = 0x80,
            MODIFIER_VALUE_TURN_ANGLE_PER_SECOND_MAX = 0x81,
            MODIFIER_VALUE_BONUS_JUMP_VERTICAL_SPEED_PERCENT = 0x82,
            MODIFIER_VALUE_AIR_JUMPS = 0x83,
            MODIFIER_VALUE_ZIP_LINE_SPEED_ADDITIVE = 0x84,
            MODIFIER_VALUE_ZIP_LINE_SPEED_PERCENTAGE = 0x85,
            MODIFIER_VALUE_CLIMB_ROPE_SPEED_PERCENTAGE = 0x86,
            MODIFIER_VALUE_GROUND_FRICTION_PERCENTAGE = 0x87,
            MODIFIER_VALUE_GROUND_ACCELERATION_PERCENTAGE = 0x88,
            MODIFIER_VALUE_INVISIBILITY_LEVEL = 0x89,
            MODIFIER_VALUE_CLOAK_FACTOR = 0x8a,
            MODIFIER_VALUE_CLOAK_DESAT_FACTOR = 0x8b,
            MODIFIER_VALUE_PARTICLE_TINT_OVERRIDE = 0x8c,
            MODIFIER_VALUE_PARTICLE_DESAT_OVERRIDE = 0x8d,
            MODIFIER_VALUE_DIMENSION_TYPE = 0x8e,
            MODIFIER_VALUE_GAMEPLAY_TIME_SCALE_ADDITIVE = 0x8f,
            MODIFIER_VALUE_GAMEPLAY_TIME_SCALE_PERCENT = 0x90,
            MODIFIER_VALUE_ANIMATION_TIME_SCALE_ADDITIVE = 0x91,
            MODIFIER_VALUE_ANIMATION_TIME_SCALE_PERCENT = 0x92,
            // MPropertyDescription "If this is set higher than 1, we skip frame when animating for the entity"
            MODIFIER_VALUE_ANIMATION_FRAME_SKIP_RATE = 0x93,
            MODIFIER_VALUE_MOVEMENT_TIME_SCALE_ADDITIVE = 0x94,
            MODIFIER_VALUE_MOVEMENT_TIME_SCALE_PERCENT = 0x95,
            MODIFIER_VALUE_PARTICLE_TIME_SCALE_ADDITIVE = 0x96,
            MODIFIER_VALUE_PARTICLE_TIME_SCALE_PERCENT = 0x97,
            MODIFIER_VALUE_STAMINA = 0x98,
            MODIFIER_VALUE_STAMINA_REGEN_PER_SECOND_ADDITIVE = 0x99,
            MODIFIER_VALUE_STAMINA_REGEN_PER_SECOND_PERCENTAGE = 0x9a,
            MODIFIER_VALUE_WEAPON_POWER = 0x9b,
            MODIFIER_VALUE_ARMOR_POWER = 0x9c,
            MODIFIER_VALUE_TECH_POWER = 0x9d,
            MODIFIER_VALUE_TECH_POWER_PERCENT = 0x9e,
            MODIFIER_VALUE_WEAPON_POWER_PERCENT = 0x9f,
            // MPropertyDescription "Change air control by this percentage"
            MODIFIER_VALUE_AIR_CONTROL_PERCENT = 0xa0,
            // MPropertyDescription "How much more potential air acceleration to add"
            MODIFIER_VALUE_AIR_CONTROL_ACCEL_PERCENT = 0xa1,
            // MPropertyDescription "Adjust ability-spawned projectile speeds"
            MODIFIER_VALUE_ABILITY_PROJECTILE_SPEED_PERCENT = 0xa2,
            // MPropertyDescription "Adjust bullet projectile speeds"
            MODIFIER_VALUE_BONUS_BULLET_SPEED_PERCENT = 0xa3,
            MODIFIER_VALUE_BASE_BULLET_SPEED_OVERRIDE = 0xa4,
            // MPropertyDescription "called when a bullet is shot.  Return the name of a sound to play"
            MODIFIER_VALUE_BULLET_SHOOT_SOUND = 0xa5,
            // MPropertyDescription "called when a bullet is shot.  Return the name of a sound to play for friendlies"
            MODIFIER_VALUE_BULLET_SHOOT_SOUND_FRIENDLY = 0xa6,
            // MPropertyDescription "called when a bullet is shot.  Return the name of a sound to play for enemies"
            MODIFIER_VALUE_BULLET_SHOOT_SOUND_ENEMY = 0xa7,
            // MPropertyDescription "Whiz Replacement sound"
            MODIFIER_VALUE_BULLET_SHOOT_SOUND_WHIZ = 0xa8,
            // MPropertyDescription "Whiz Left to right replacement sound"
            MODIFIER_VALUE_BULLET_SHOOT_SOUND_WHIZ_LEFT_TO_RIGHT = 0xa9,
            // MPropertyDescription "Whiz Right to left replacement"
            MODIFIER_VALUE_BULLET_SHOOT_SOUND_WHIZ_RIGHT_TO_LEFT = 0xaa,
            // MPropertyDescription "called when a player fires their gun. Takes the first string returned as a tracer replacement"
            MODIFIER_VALUE_TRACER_REPLACEMENT = 0xab,
            // MPropertyDescription "called when a tracer for a gun is created on the client.  Return the name of a tracer to have it show up on top of the regular tracer"
            MODIFIER_VALUE_TRACER_ADDITIONAL = 0xac,
            // MPropertySuppressEnumerator
            // MPropertyDescription "override owner's camera target with this entity"
            MODIFIER_VALUE_CAMERA_TARGET_OVERRIDE = 0xad,
            // MPropertySuppressEnumerator
            // MPropertyDescription "An offset to apply to the root bone of the entity"
            MODIFIER_VALUE_VISUAL_ORIGIN_OFFSET = 0xae,
            // MPropertyDescription "Set a value to override spectating Speed (So we don't have to network the whole ent we're spectating)"
            MODIFIER_VALUE_SPECTATING_SPEED_OVERRIDE = 0xaf,
            MODIFIER_VALUE_WEAPON_DAMAGE_TO_NPC_INCREASE = 0xb0,
            MODIFIER_VALUE_AIR_DRAG = 0xb1,
            MODIFIER_VALUE_FALLING_DRAG = 0xb2,
            // MPropertyDescription "Ability damage against me heals the attacker"
            MODIFIER_VALUE_TECH_DAMAGE_TAKEN_HEALS_ATTACKER = 0xb3,
            // MPropertyDescription "Bullet damage against me heals the attacker"
            MODIFIER_VALUE_BULLET_DAMAGE_TAKEN_HEALS_ATTACKER = 0xb4,
            // MPropertyDescription "Tech damage I deal heals me"
            MODIFIER_VALUE_TECH_LIFESTEAL = 0xb5,
            // MPropertyDescription "Bullet damage I deal heals me"
            MODIFIER_VALUE_BULLET_LIFESTEAL = 0xb6,
            // MPropertyDescription "If set, overrides the attacker on all bullets fired"
            MODIFIER_VALUE_OVERRIDE_BULLET_ATTACKER = 0xb7,
            // MPropertyDescription "Override the sound we play when a melee attack hits an enemy"
            MODIFIER_VALUE_OVERRIDE_MELEE_HIT_SOUND = 0xb8,
            // MPropertyDescription "Override the sound we play when a melee attack hits nothing"
            MODIFIER_VALUE_OVERRIDE_MELEE_MISS_SOUND = 0xb9,
            MODIFIER_VALUE_IMBUED_BONUS_DAMAGE = 0xba,
            MODIFIER_VALUE_IMBUED_BONUS_DURATION = 0xbb,
            MODIFIER_VALUE_INTRA_BURST_SHOT_CYCLE_TIME_OVERRIDE = 0xbc,
            MODIFIER_VALUE_BONUS_BURST_SHOT_PERCENT = 0xbd,
            MODIFIER_VALUE_BONUS_BURST_SHOT_CONSTANT = 0xbe,
            MODIFIER_VALUE_SPIN_UP_RATE_OVERRIDE = 0xbf,
            MODIFIER_VALUE_SPIN_UP_DECAY_OVERRIDE = 0xc0,
            MODIFIER_VALUE_SPIN_UP_MAX_CYCLE_TIME_OVERRIDE = 0xc1,
            MODIFIER_VALUE_SPIN_UP_MAX_BURST_FIRE_COOLDOWN_OVERRIDE = 0xc2,
            MODIFIER_VALUE_SPIN_UP_SOUND_OVERRIDE = 0xc3,
            MODIFIER_VALUE_SPIN_DOWN_SOUND_OVERRIDE = 0xc4,
            MODIFIER_VALUE_SPIN_LOOP_SOUND_OVERRIDE = 0xc5,
            MODIFIER_VALUE_BONUS_CHANNEL_TIME_PERCENTAGE = 0xc6,
            MODIFIER_VALUE_ABILITY_RESOURCE_MAX_ADDITIVE = 0xc7,
            MODIFIER_VALUE_ABILITY_RESOURCE_REGEN_PER_SECOND_ADDITIVE = 0xc8,
            MODIFIER_VALUE_ABILITY_RESOURCE_REGEN_PER_SECOND_PERCENTAGE = 0xc9,
            MODIFIER_VALUE_PENDING_INCOMING_DAMAGE = 0xca,
            MODIFIER_VALUE_PENDING_INCOMING_HEAL = 0xcb,
            MODIFIER_VALUE_CAMERA_WOBBLE_INTENSITY = 0xcc,
            MODIFIER_VALUE_CAMERA_WOBBLE_SPEED = 0xcd,
            MODIFIER_VALUE_RESPAWN_TIME_ADDITIVE = 0xce,
            MODIFIER_VALUE_RESPAWN_TIME_PERCENTAGE = 0xcf,
            MODIFIER_VALUE_RESPAWN_RAMP_TIME_REDUCTION_PERCENT = 0xd0,
            MODIFIER_VALUE_BOON_COUNT = 0xd1,
            MODIFIER_VALUE_FOOTSTEP_ADDITIONAL = 0xd2,
            MODIFIER_VALUE_FOOTSTEP_OVERRIDE = 0xd3,
            MODIFIER_VALUE_MODEL_SCALE = 0xd4,
            MODIFIER_VALUE_MODEL_CHANGE = 0xd5,
            // MPropertyDescription "Effectiveness stats are base stats on heroes that give them innate bonus or deficiencies when getting certain stats from the shop"
            MODIFIER_VALUE_HERO_BULLET_LIFESTEAL_EFFECTIVENESS = 0xd6,
            // MPropertyDescription "Effectiveness stats are base stats on heroes that give them innate bonus or deficiencies when getting certain stats from the shop"
            MODIFIER_VALUE_HERO_SPIRIT_LIFESTEAL_EFFECTIVENESS = 0xd7,
            // MPropertyDescription "Override Parry FX"
            MODIFIER_VALUE_PARRY_FX_OVERRIDE = 0xd8,
            // MPropertyDescription "Switch the view to a named entity in the map"
            MODIFIER_VALUE_CAMERA_ENTITY_OVERRIDE = 0xd9,
            MODIFIER_VALUE_VISION_RADIUS = 0xda,
            MODIFIER_VALUE_MINIMAP_POSITION_OVERRIDE = 0xdb,
            MODIFIER_VALUE_HERO_CARD_OVERRIDE = 0xdc,
            // MPropertyDescription "When specified, self casts will be treated as casts on another target"
            MODIFIER_VALUE_SELFCAST_TARGET_OVERRIDE = 0xdd,
            MODIFIER_VALUE_HERO_ATTACH_PARENT = 0xde,
            MODIFIER_VALUE_DOORWAY_MINIMAP_RANGE = 0xdf,
            // MPropertySuppressEnumerator
            MODIFIER_VALUE_COUNT = 0xe0,
            // MPropertySuppressEnumerator
            MODIFIER_VALUE_INVALID = 0xff,
        };
    };
};
