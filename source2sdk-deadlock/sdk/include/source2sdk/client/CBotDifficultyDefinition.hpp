#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelBotDifficulty.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x110
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBotDifficultyDefinition
        {
        public:
            // metadata: MPropertyDescription "Difficulty Enum"
            source2sdk::client::ECitadelBotDifficulty difficulty; // 0x0            
            // metadata: MPropertyDescription "Bots get free gold over time"
            float free_gold_per_minute; // 0x4            
            // metadata: MPropertyDescription "GPM that scales with game time"
            float free_gold_per_minute_scaled; // 0x8            
            // metadata: MPropertyDescription "How much time until a takeover bot till spend gold/ap"
            float takeover_spend_currency_time; // 0xc            
            // metadata: MPropertyDescription "Are bots allowed to buy items from anywhere"
            bool allow_purchasing_anywhere; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            // metadata: MPropertyDescription "Higher values encourage bots to engage heroes over troopers when a player is within engagement range. 1.0 means heroes and troopers are equal."
            float engage_priority_hero_mult; // 0x14            
            // metadata: MPropertyDescription "Higher values encourage bots to engage human players when within engagement range.  1.0 means human players and other targets equal"
            float engage_priority_human_mult; // 0x18            
            // metadata: MPropertyDescription "Forces bots to prioritize getting last hits on enemies below this health"
            float engage_last_hit_threshold; // 0x1c            
            // metadata: MPropertyDescription "Extra distance bots are willing to engage enemies at to get last hits"
            float engage_distance_last_hit_mult; // 0x20            
            // metadata: MPropertyDescription "Extra distance bots are willing to engage heroes at"
            float engage_distance_hero_mult; // 0x24            
            // metadata: MPropertyDescription "Distance bots are willing to engage enemies at"
            float engage_distance; // 0x28            
            // metadata: MPropertyDescription "Distance bots will engage to the left or right of the target"
            float engage_lane_side_dist; // 0x2c            
            // metadata: MPropertyDescription "Distance bots will engage to the left or right of the target"
            float engage_player_side_dist; // 0x30            
            // metadata: MPropertyDescription "Distance behind creep wave midpoint where bots will prefer to be"
            float safety_distance_behind_ally_creeps; // 0x34            
            // metadata: MPropertyDescription "Distance to keep away from enemy bosses. A value of 1.0 is right outside that tower's attack range."
            float safety_distance_away_from_tower_range; // 0x38            
            // metadata: MPropertyDescription "Bots pick on a time interval"
            float choose_lane_on_interval; // 0x3c            
            // metadata: MPropertyDescription "Duration Bot prioritizes changing lanes vs fighting"
            float lane_change_duration; // 0x40            
            // metadata: MPropertyDescription "Bots try to balance lanes"
            bool choose_balanced_lanes; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            // metadata: MPropertyDescription "Desired bot miss chance"
            float attack_miss_chance; // 0x48            
            // metadata: MPropertyDescription "Bots choose a random angle in this range to offset their perfect aim"
            float attack_enemies_inaccuracy; // 0x4c            
            // metadata: MPropertyDescription "When trying to miss "
            float attack_enemies_inaccuracy_scale; // 0x50            
            // metadata: MPropertyDescription "Distance (m) to make bots even worse accuracy"
            float attack_enemies_inaccuracy_distance; // 0x54            
            // metadata: MPropertyDescription "Scale the accuracy by this amount at distance"
            float attack_enemies_inaccuracy_distance_scale; // 0x58            
            // metadata: MPropertyDescription "Scale inaccuracy by this amount when threatened"
            float attack_enemies_inaccuracy_threat_scale; // 0x5c            
            // metadata: MPropertyDescription "Bot reloads when clip is this low"
            float reload_pct; // 0x60            
            // metadata: MPropertyDescription "Citadel bots will randomly purchase available upgrades every few seconds"
            float purchase_random_upgrades; // 0x64            
            // metadata: MPropertyDescription "Citadel bots will purchase available upgrades in order every few seconds"
            float purchase_upgrades_in_order; // 0x68            
            // metadata: MPropertyDescription "Time between bot using ability"
            float use_ability_cooldown; // 0x6c            
            // metadata: MPropertyDescription "Chance to do a melee attack when within range"
            float heavy_melee_chance; // 0x70            
            // metadata: MPropertyDescription "Chance to do a melee attack when within range while reloading"
            float heavy_melee_chance_in_reload; // 0x74            
            // metadata: MPropertyDescription "Chance to parry when bot sees a melee attack"
            float parry_chance; // 0x78            
            // metadata: MPropertyDescription "Penalty to parrying when bot has no LoS"
            float parry_no_los_penalty; // 0x7c            
            // metadata: MPropertyDescription "How much parry chance goes up after each recent melee attack"
            float parry_chance_escalation; // 0x80            
            // metadata: MPropertyDescription "At what percentage of melee charge does a bot decide to parry, lower values mean the bot will parry earlier"
            float parry_melee_charge_detection_pct; // 0x84            
            // metadata: MPropertyDescription "How long to remember recent attackers"
            float max_attacker_memory; // 0x88            
            // metadata: MPropertyDescription "How long to remember recent melee attacks"
            float max_melee_attack_memory; // 0x8c            
            // metadata: MPropertyDescription "Forces bots to attack nearby enemies"
            bool jump_sometimes; // 0x90            
            // metadata: MPropertyDescription "Forces bots to attack nearby enemies"
            bool roll_after_damage; // 0x91            
            uint8_t _pad0092[0x2]; // 0x92
            // metadata: MPropertyDescription "How often bots will roll given damage conditions"
            float roll_chance; // 0x94            
            // metadata: MPropertyDescription "Roll chance amplification when low health"
            float roll_chance_lowhealth_scale; // 0x98            
            // metadata: MPropertyDescription "Time between roll attempts"
            float roll_frequency; // 0x9c            
            // metadata: MPropertyDescription "Fight the midboss"
            bool fight_midboss; // 0xa0            
            // metadata: MPropertyDescription "Fight for the idol"
            bool fight_for_idol; // 0xa1            
            uint8_t _pad00a2[0x2]; // 0xa2
            // metadata: MPropertyDescription "How many ticks between the bot performing sensing"
            std::int32_t sensing_tick_interval; // 0xa4            
            // metadata: MPropertyDescription "Seconds after a bot sees you before it can react"
            float visual_reaction_time; // 0xa8            
            // metadata: MPropertyDescription "Seconds after a bot sees you before it can react"
            float shoot_duration; // 0xac            
            // metadata: MPropertyDescription "Factor from Projectile speed to usable range"
            float projectile_range_scale; // 0xb0            
            // metadata: MPropertyDescription "Default Cast Range for abilities that don't specify"
            float ability_min_cast_range; // 0xb4            
            // metadata: MPropertyDescription "Default Enemy range to use friendly abilities"
            float ability_min_cast_range_friendly; // 0xb8            
            // metadata: MPropertyDescription "Maximum life for friendly ability to be used (prevents healing when full health)"
            float ability_friendly_life_threshold; // 0xbc            
            // metadata: MPropertyDescription "Pitch (aiming down) for bots when using a friendly ability"
            float ability_friendly_pitch; // 0xc0            
            // metadata: MPropertyDescription "How much in range before doing an ability (ie not casting on edges)"
            float ability_window_size; // 0xc4            
            // metadata: MPropertyDescription "Interval in seconds at which to spend AP randomly"
            float spend_random_ap; // 0xc8            
            // metadata: MPropertyDescription "Bonus regen all the time"
            float bonus_regen; // 0xcc            
            // metadata: MPropertyDescription "Regen when not seen by enemy players"
            float bonus_regen_outofsight; // 0xd0            
            // metadata: MPropertyDescription "Bonus run speed"
            float bonus_run_speed; // 0xd4            
            // metadata: MPropertyDescription "Radius for bots to look for better locations to path to"
            float safe_spot_target_radius; // 0xd8            
            // metadata: MPropertyDescription "Radius for bots to consider whether a position is safe"
            float safe_spot_safety_radius; // 0xdc            
            // metadata: MPropertyDescription "Distance away from target to search for an attack location"
            float enemy_hero_engage_distance; // 0xe0            
            // metadata: MPropertyDescription "Minimum number of spots to sample looking for good positioning"
            std::int32_t safe_spot_samples_min; // 0xe4            
            // metadata: MPropertyDescription "Maximum number of spots to sample looking for good positioning"
            std::int32_t safe_spot_samples_max; // 0xe8            
            // metadata: MPropertyDescription "Try to deny orbs"
            std::int32_t attempt_orb_start_time; // 0xec            
            // metadata: MPropertyDescription "Percentage of the time to look for red orbs to shoot"
            std::int32_t attempt_deny_orb_pct; // 0xf0            
            // metadata: MPropertyDescription "Percentage of the time to look for gold orbs to shoot"
            std::int32_t attempt_secure_orb_pct; // 0xf4            
            // metadata: MPropertyDescription "Range(m) to Scan for Orbs"
            float attempt_orb_range; // 0xf8            
            // metadata: MPropertyDescription "Low Health"
            float low_health; // 0xfc            
            // metadata: MPropertyDescription "When pushed against tower"
            float low_health_pushed; // 0x100            
            // metadata: MPropertyDescription "Guide bot talks about neutrals"
            bool guide_bot_neutral_info; // 0x104            
            uint8_t _pad0105[0x3]; // 0x105
            // metadata: MPropertyDescription "Min time between messages a player bot can send"
            float message_interval; // 0x108            
            // metadata: MPropertyDescription "How many frames between LOS check refreshes on the Bots?"
            std::int32_t los_check_interval; // 0x10c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, difficulty) == 0x0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, free_gold_per_minute) == 0x4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, free_gold_per_minute_scaled) == 0x8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, takeover_spend_currency_time) == 0xc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, allow_purchasing_anywhere) == 0x10);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_priority_hero_mult) == 0x14);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_priority_human_mult) == 0x18);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_last_hit_threshold) == 0x1c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_distance_last_hit_mult) == 0x20);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_distance_hero_mult) == 0x24);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_distance) == 0x28);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_lane_side_dist) == 0x2c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, engage_player_side_dist) == 0x30);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safety_distance_behind_ally_creeps) == 0x34);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safety_distance_away_from_tower_range) == 0x38);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, choose_lane_on_interval) == 0x3c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, lane_change_duration) == 0x40);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, choose_balanced_lanes) == 0x44);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_miss_chance) == 0x48);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy) == 0x4c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy_scale) == 0x50);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy_distance) == 0x54);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy_distance_scale) == 0x58);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attack_enemies_inaccuracy_threat_scale) == 0x5c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, reload_pct) == 0x60);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, purchase_random_upgrades) == 0x64);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, purchase_upgrades_in_order) == 0x68);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, use_ability_cooldown) == 0x6c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, heavy_melee_chance) == 0x70);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, heavy_melee_chance_in_reload) == 0x74);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, parry_chance) == 0x78);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, parry_no_los_penalty) == 0x7c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, parry_chance_escalation) == 0x80);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, parry_melee_charge_detection_pct) == 0x84);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, max_attacker_memory) == 0x88);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, max_melee_attack_memory) == 0x8c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, jump_sometimes) == 0x90);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, roll_after_damage) == 0x91);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, roll_chance) == 0x94);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, roll_chance_lowhealth_scale) == 0x98);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, roll_frequency) == 0x9c);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, fight_midboss) == 0xa0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, fight_for_idol) == 0xa1);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, sensing_tick_interval) == 0xa4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, visual_reaction_time) == 0xa8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, shoot_duration) == 0xac);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, projectile_range_scale) == 0xb0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_min_cast_range) == 0xb4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_min_cast_range_friendly) == 0xb8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_friendly_life_threshold) == 0xbc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_friendly_pitch) == 0xc0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, ability_window_size) == 0xc4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, spend_random_ap) == 0xc8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, bonus_regen) == 0xcc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, bonus_regen_outofsight) == 0xd0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, bonus_run_speed) == 0xd4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safe_spot_target_radius) == 0xd8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safe_spot_safety_radius) == 0xdc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, enemy_hero_engage_distance) == 0xe0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safe_spot_samples_min) == 0xe4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, safe_spot_samples_max) == 0xe8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attempt_orb_start_time) == 0xec);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attempt_deny_orb_pct) == 0xf0);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attempt_secure_orb_pct) == 0xf4);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, attempt_orb_range) == 0xf8);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, low_health) == 0xfc);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, low_health_pushed) == 0x100);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, guide_bot_neutral_info) == 0x104);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, message_interval) == 0x108);
        static_assert(offsetof(source2sdk::client::CBotDifficultyDefinition, los_check_interval) == 0x10c);
        
        static_assert(sizeof(source2sdk::client::CBotDifficultyDefinition) == 0x110);
    };
};
