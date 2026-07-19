#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakablePowerupDropDefinition_t.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/ECitadelRandomRollTypes.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_BreakablePropVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyGroupName "Behavior"
            // metadata: MPropertyDescription "Should this breakable break if a player rolls or dodges into it?"
            // metadata: MPropertyFriendlyName "Break On Dodge?"
            bool m_bBreakOnDodgeTouch; // 0x28            
            // metadata: MPropertyGroupName "Behavior"
            // metadata: MPropertyDescription "If checked, this breakble will stay after destroyed, rather than stop rendering. (useful for animating breakables that might want to stay in a final pose."
            // metadata: MPropertyFriendlyName "Render while dead?"
            bool m_bRenderAfterDeath; // 0x29            
            // metadata: MPropertyGroupName "Behavior"
            // metadata: MPropertyDescription "If checked, this breakble will stay solid after death. (useful for animating breakables that might want to stay in a final pose."
            // metadata: MPropertyFriendlyName "Solid while dead?"
            bool m_bSolidAfterDeath; // 0x2a            
            // metadata: MPropertyGroupName "Behavior"
            // metadata: MPropertyDescription "If checked, will fire damage events to animgraph, but will not take damage, so it can't die."
            // metadata: MPropertyFriendlyName "Is Permanent?"
            bool m_bIsPermanent; // 0x2b            
            // metadata: MPropertyGroupName "Behavior"
            // metadata: MPropertyDescription "If checked, this breakble will takes damage from Bullets."
            // metadata: MPropertyFriendlyName "Damaged by Bullets?"
            bool m_bDamagedByBullets; // 0x2c            
            // metadata: MPropertyGroupName "Behavior"
            // metadata: MPropertyDescription "If checked, this breakble will takes damage from Melee."
            // metadata: MPropertyFriendlyName "Damaged by Melee?"
            bool m_bDamagedByMelee; // 0x2d            
            // metadata: MPropertyGroupName "Behavior"
            // metadata: MPropertyDescription "If checked, this breakble will takes damage from Abilities."
            // metadata: MPropertyFriendlyName "Damaged by Abilities?"
            bool m_bDamagedByAbilities; // 0x2e            
            uint8_t _pad002f[0x1]; // 0x2f
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Model"
            // metadata: MPropertyProvidesEditContextString
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x30            
            // metadata: MPropertyFriendlyName "Damage Received AnimGraph Parameter"
            // metadata: MPropertyDescription "The animgraph parameter that's  describes how much damage the breakable has received. From 0 to 1 (no damage to dead)."
            // metadata: MPropertyAttributeEditor "AnimGraphParam()"
            CGlobalSymbol m_sAnimgraphParamDamageReceived; // 0x110            
            // metadata: MPropertyFriendlyName "On Hit AnimGraph Parameter"
            // metadata: MPropertyDescription "The animgraph parameter that is set to true when damage the breakable was hit."
            // metadata: MPropertyAttributeEditor "AnimGraphParam()"
            CGlobalSymbol m_sAnimgraphParamOnHit; // 0x118            
            // metadata: MPropertyFriendlyName "On Respawn AnimGraph Parameter"
            // metadata: MPropertyDescription "The animgraph parameter that is set to true the brekable is respawned."
            // metadata: MPropertyAttributeEditor "AnimGraphParam()"
            CGlobalSymbol m_sAnimgraphParamOnRespawn; // 0x120            
            // metadata: MPropertyGroupName "Audio"
            // metadata: MPropertyDescription "3D Sound of the prop breaking"
            CSoundEventName m_sBreakSound; // 0x128            
            CSoundEventName m_sSpawnSound; // 0x138            
            // metadata: MPropertyGroupName "Audio"
            // metadata: MPropertyDescription "3D Sound of the prop taking damage"
            CSoundEventName m_sDamageSound; // 0x148            
            CSoundEventName m_sHeavyDamageSound; // 0x158            
            // metadata: MPropertyGroupName "Audio"
            // metadata: MPropertyDescription "Hit Indicator Sound. 2D Sound played to attacker and observers to indicate a hit."
            CSoundEventName m_sHitIndicatorSound; // 0x168            
            // metadata: MPropertyGroupName "Attributes"
            // metadata: MPropertyDescription "Health"
            std::int32_t m_iHealth; // 0x178            
            // metadata: MPropertyStartGroup "Attributes"
            // metadata: MPropertyDescription "Respawn time"
            float m_flInitialSpawnTime; // 0x17c            
            float m_flRespawnTime; // 0x180            
            float m_flInitialSpawnTimeTest; // 0x184            
            float m_flRespawnTimeTest; // 0x188            
            // metadata: MPropertyDescription "Can be mantled?"
            bool m_bIsMantleable; // 0x18c            
            uint8_t _pad018d[0x3]; // 0x18d
            // metadata: MPropertyDescription "Chance for this to drop a primary reward, 0 - 100%, this rolls first"
            float m_flPrimaryDropChance; // 0x190            
            // metadata: MPropertyDescription "Category for the random roller"
            source2sdk::client::ECitadelRandomRollTypes m_eRollType; // 0x194            
            // metadata: MPropertyStartGroup "Level 1 Pickup rewards"
            // metadata: MPropertyDescription "Primary Pickups are rolled first."
            // m_vecPrimaryPickups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::BreakablePowerupDropDefinition_t> m_vecPrimaryPickups;
            char m_vecPrimaryPickups[0x18]; // 0x198            
            // metadata: MPropertyDescription "Level 2 Rewards"
            std::int32_t m_iMatchTimeMinsForLevel2Pickups; // 0x1b0            
            uint8_t _pad01b4[0x4]; // 0x1b4
            // m_vecPickups_lv2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::BreakablePowerupDropDefinition_t> m_vecPickups_lv2;
            char m_vecPickups_lv2[0x18]; // 0x1b8            
            // metadata: MPropertyDescription "Level 3 Rewards"
            std::int32_t m_iMatchTimeMinsForLevel3Pickups; // 0x1d0            
            uint8_t _pad01d4[0x4]; // 0x1d4
            // m_vecPickups_lv3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::BreakablePowerupDropDefinition_t> m_vecPickups_lv3;
            char m_vecPickups_lv3[0x18]; // 0x1d8            
            // metadata: MPropertyDescription "How many times each entry should be in the 'card deck'"
            std::int32_t m_iLootListDeckSize; // 0x1f0            
            uint8_t _pad01f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_BreakablePropVData) == 0x1f8);
    };
};
