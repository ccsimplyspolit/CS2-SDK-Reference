#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x6e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Techies_MutuallyAssuredDestruction : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float radius; // 0x6a8            
            float explosion_delay; // 0x6ac            
            float max_mana_pct_as_damage; // 0x6b0            
            float base_damage; // 0x6b4            
            source2sdk::entity2::GameTime_t m_ActiveExplodeTime; // 0x6b8            
            source2sdk::entity2::GameTime_t m_PassiveExplodeTime; // 0x6bc            
            uint8_t _pad06c0[0x18]; // 0x6c0
            // m_hPassiveMAD has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPassiveMAD;
            char m_hPassiveMAD[0x4]; // 0x6d8            
            uint8_t _pad06dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Techies_MutuallyAssuredDestruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Techies_MutuallyAssuredDestruction) == 0x6e0);
    };
};
