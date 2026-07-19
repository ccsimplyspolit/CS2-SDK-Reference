#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/GameActivity_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1ae0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_GrapplingClaw_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vGrappleHookPos; // 0x1a58            
            Vector m_vInitialDir; // 0x1a64            
            Vector m_vHookDir; // 0x1a70            
            Vector m_vLastVelocity; // 0x1a7c            
            float m_flHookDistance; // 0x1a88            
            float m_flCurrentHookRetractSpeed; // 0x1a8c            
            float m_flCurrentHookLength; // 0x1a90            
            float m_flCurHookDistDelta; // 0x1a94            
            float m_flCurMomentumDistDelta; // 0x1a98            
            float m_flDecelerationRate; // 0x1a9c            
            float m_flMaxHeight; // 0x1aa0            
            float m_flInitialSpeed; // 0x1aa4            
            float m_flDT; // 0x1aa8            
            float m_flAccumDist; // 0x1aac            
            bool m_bHookAttached; // 0x1ab0            
            uint8_t _pad1ab1[0x3]; // 0x1ab1
            std::int32_t grapple_speed; // 0x1ab4            
            std::int32_t impact_damage; // 0x1ab8            
            std::int32_t land_distance; // 0x1abc            
            std::int32_t max_distance_break; // 0x1ac0            
            std::int32_t lifesteal_pct; // 0x1ac4            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1ac8            
            bool m_bDidAttack; // 0x1acc            
            bool m_bStartedAnimation; // 0x1acd            
            uint8_t _pad1ace[0x2]; // 0x1ace
            source2sdk::client::GameActivity_t m_Activity; // 0x1ad0            
            float m_flTimeLeftForActivity; // 0x1ad4            
            source2sdk::client::AttackRecord_t m_nGrappleAttackRecord; // 0x1ad8            
            uint8_t _pad1ada[0x2]; // 0x1ada
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTree;
            char m_hTree[0x4]; // 0x1adc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_GrapplingClaw_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_GrapplingClaw_Movement) == 0x1ae0);
    };
};
