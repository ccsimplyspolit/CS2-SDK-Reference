#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Techies_MutuallyAssuredDestruction : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float radius; // 0x580            
            float explosion_delay; // 0x584            
            float max_mana_pct_as_damage; // 0x588            
            float base_damage; // 0x58c            
            source2sdk::entity2::GameTime_t m_ActiveExplodeTime; // 0x590            
            source2sdk::entity2::GameTime_t m_PassiveExplodeTime; // 0x594            
            uint8_t _pad0598[0x18]; // 0x598
            // m_hPassiveMAD has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPassiveMAD;
            char m_hPassiveMAD[0x4]; // 0x5b0            
            uint8_t _pad05b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Techies_MutuallyAssuredDestruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Techies_MutuallyAssuredDestruction) == 0x5b8);
    };
};
