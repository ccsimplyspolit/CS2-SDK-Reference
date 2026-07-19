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
        // Size: 0x970
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerHurt : public source2sdk::server::CBaseTrigger
        {
        public:
            float m_flOriginalDamage; // 0x8e8            
            float m_flDamage; // 0x8ec            
            float m_flDamageCap; // 0x8f0            
            source2sdk::entity2::GameTime_t m_flLastDmgTime; // 0x8f4            
            float m_flForgivenessDelay; // 0x8f8            
            source2sdk::client::DamageTypes_t m_bitsDamageInflict; // 0x8fc            
            std::int32_t m_damageModel; // 0x900            
            bool m_bNoDmgForce; // 0x904            
            uint8_t _pad0905[0x3]; // 0x905
            Vector m_vDamageForce; // 0x908            
            bool m_thinkAlways; // 0x914            
            uint8_t _pad0915[0x3]; // 0x915
            float m_hurtThinkPeriod; // 0x918            
            uint8_t _pad091c[0x4]; // 0x91c
            source2sdk::entity2::CEntityIOOutput m_OnHurt; // 0x920            
            source2sdk::entity2::CEntityIOOutput m_OnHurtPlayer; // 0x938            
            // m_hurtEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hurtEntities;
            char m_hurtEntities[0x18]; // 0x950            
            uint8_t _pad0968[0x8];
            
            // Datamap fields:
            // float InputSetDamage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerHurt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerHurt) == 0x970);
    };
};
