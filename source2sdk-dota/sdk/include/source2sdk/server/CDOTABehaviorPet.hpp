#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABehaviorCompanion.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/PetCoopStates_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x308
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorPet : public source2sdk::server::CDOTABehaviorCompanion
        {
        public:
            uint8_t _pad0180[0x10]; // 0x180
            float m_flThreatLevel; // 0x190            
            uint8_t _pad0194[0x4]; // 0x194
            source2sdk::server::CountdownTimer m_ThreatTimer; // 0x198            
            source2sdk::server::CountdownTimer m_StuckTimer; // 0x1b0            
            bool m_bHasVanished; // 0x1c8            
            uint8_t _pad01c9[0x7]; // 0x1c9
            source2sdk::server::CountdownTimer m_VanishOnThreatTimer; // 0x1d0            
            VectorWS m_vecFleeCurrentTarget; // 0x1e8            
            Vector m_vecFleeDirection; // 0x1f4            
            Vector m_vecOldFleeDirection; // 0x200            
            uint8_t _pad020c[0x4]; // 0x20c
            source2sdk::server::CountdownTimer m_FleePersistTimer; // 0x210            
            source2sdk::server::CountdownTimer m_CombatRepositionTimer; // 0x228            
            // m_hNearestEnemyHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hNearestEnemyHero;
            char m_hNearestEnemyHero[0x4]; // 0x240            
            source2sdk::entity2::GameTime_t m_flLastInWater; // 0x244            
            VectorWS m_vecHomeBasePosition; // 0x248            
            bool m_bReturnToBase; // 0x254            
            uint8_t _pad0255[0x3]; // 0x255
            source2sdk::server::CountdownTimer m_ReturnToBaseTimer; // 0x258            
            source2sdk::server::PetCoopStates_t m_nCoopTeleportState; // 0x270            
            uint8_t _pad0274[0x4]; // 0x274
            source2sdk::server::CountdownTimer m_CarryItemTimer; // 0x278            
            source2sdk::server::CountdownTimer m_PickupDelayTimer; // 0x290            
            source2sdk::server::CountdownTimer m_LevelupCheckTimer; // 0x2a8            
            source2sdk::server::CountdownTimer m_RareIdleTimer; // 0x2c0            
            bool m_bIsEmoting; // 0x2d8            
            uint8_t _pad02d9[0x3]; // 0x2d9
            // m_hEmoteTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hEmoteTarget;
            char m_hEmoteTarget[0x4]; // 0x2dc            
            source2sdk::server::CountdownTimer m_EmoteTimer; // 0x2e0            
            std::int32_t m_nEmoteActivity; // 0x2f8            
            // m_tempGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_tempGoalEntity;
            char m_tempGoalEntity[0x4]; // 0x2fc            
            bool m_bFollowingTempGoal; // 0x300            
            uint8_t _pad0301[0x3]; // 0x301
            std::int32_t m_event_dota_illusions_created; // 0x304            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABehaviorPet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorPet) == 0x308);
    };
};
