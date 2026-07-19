#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x968
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerHurt : public source2sdk::server::CBaseTrigger
        {
        public:
            float m_flOriginalDamage; // 0x8e0            
            float m_flDamage; // 0x8e4            
            float m_flDamageCap; // 0x8e8            
            source2sdk::entity2::GameTime_t m_flLastDmgTime; // 0x8ec            
            float m_flForgivenessDelay; // 0x8f0            
            source2sdk::client::DamageTypes_t m_bitsDamageInflict; // 0x8f4            
            std::int32_t m_damageModel; // 0x8f8            
            bool m_bNoDmgForce; // 0x8fc            
            uint8_t _pad08fd[0x3]; // 0x8fd
            Vector m_vDamageForce; // 0x900            
            bool m_thinkAlways; // 0x90c            
            uint8_t _pad090d[0x3]; // 0x90d
            float m_hurtThinkPeriod; // 0x910            
            uint8_t _pad0914[0x4]; // 0x914
            source2sdk::entity2::CEntityIOOutput m_OnHurt; // 0x918            
            source2sdk::entity2::CEntityIOOutput m_OnHurtPlayer; // 0x930            
            // m_hurtEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hurtEntities;
            char m_hurtEntities[0x18]; // 0x948            
            uint8_t _pad0960[0x8];
            
            // Datamap fields:
            // void CTriggerHurtRadiationThink; // 0x0
            // void CTriggerHurtHurtThink; // 0x0
            // void CTriggerHurtNavThink; // 0x0
            // float InputSetDamage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerHurt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerHurt) == 0x968);
    };
};
