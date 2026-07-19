#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1670
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hAutoTarget"
        // static metadata: MNetworkVarNames "GameTime_t m_flHookEndTime"
        // static metadata: MNetworkVarNames "float m_flBombBonusHits"
        // static metadata: MNetworkVarNames "float m_flBombBonusKills"
        #pragma pack(push, 1)
        class CCitadel_Ability_StickyBomb : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x4]; // 0x11d8
            // metadata: MNetworkEnable
            // m_hAutoTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAutoTarget;
            char m_hAutoTarget[0x4]; // 0x11dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHookEndTime; // 0x11e0            
            // metadata: MNetworkEnable
            float m_flBombBonusHits; // 0x11e4            
            // metadata: MNetworkEnable
            float m_flBombBonusKills; // 0x11e8            
            uint8_t _pad11ec[0x484];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_StickyBomb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_StickyBomb) == 0x1670);
    };
};
