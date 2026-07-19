#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Elder_Titan_AncestralSpirit : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float speed; // 0x580            
            float radius; // 0x584            
            float buff_duration; // 0x588            
            float spirit_duration; // 0x58c            
            std::int32_t m_nCreepsHit; // 0x590            
            std::int32_t m_nHeroesHit; // 0x594            
            bool m_bIsReturning; // 0x598            
            uint8_t _pad0599[0x3]; // 0x599
            // m_hAncestralSpirit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAncestralSpirit;
            char m_hAncestralSpirit[0x4]; // 0x59c            
            source2sdk::client::ParticleIndex_t m_nReturnFXIndex; // 0x5a0            
            uint8_t _pad05a4[0x4]; // 0x5a4
            CUtlString m_strMoveSpiritSwapAbility; // 0x5a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_AncestralSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Elder_Titan_AncestralSpirit) == 0x5b0);
    };
};
