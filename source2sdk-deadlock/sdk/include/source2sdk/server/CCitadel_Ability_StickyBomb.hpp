#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0x1408
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hAutoTarget"
        // static metadata: MNetworkVarNames "GameTime_t m_flHookEndTime"
        // static metadata: MNetworkVarNames "float m_flBombBonusHits"
        // static metadata: MNetworkVarNames "float m_flBombBonusKills"
        #pragma pack(push, 1)
        class CCitadel_Ability_StickyBomb : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x4]; // 0xf70
            // metadata: MNetworkEnable
            // m_hAutoTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAutoTarget;
            char m_hAutoTarget[0x4]; // 0xf74            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHookEndTime; // 0xf78            
            // metadata: MNetworkEnable
            float m_flBombBonusHits; // 0xf7c            
            // metadata: MNetworkEnable
            float m_flBombBonusKills; // 0xf80            
            uint8_t _pad0f84[0x484];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_StickyBomb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_StickyBomb) == 0x1408);
    };
};
