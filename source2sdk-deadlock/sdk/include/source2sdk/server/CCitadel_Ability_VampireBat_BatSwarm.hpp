#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iBonusBats"
        // static metadata: MNetworkVarNames "int m_iBatCountOnCast"
        // static metadata: MNetworkVarNames "float m_flChannelTime"
        // static metadata: MNetworkVarNames "bool m_bPauseChannel"
        // static metadata: MNetworkVarNames "float m_flLastRemainingChannelTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatSwarm : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iBonusBats; // 0xf70            
            // metadata: MNetworkEnable
            std::int32_t m_iBatCountOnCast; // 0xf74            
            // metadata: MNetworkEnable
            float m_flChannelTime; // 0xf78            
            // metadata: MNetworkEnable
            bool m_bPauseChannel; // 0xf7c            
            uint8_t _pad0f7d[0x3]; // 0xf7d
            // metadata: MNetworkEnable
            float m_flLastRemainingChannelTime; // 0xf80            
            uint8_t _pad0f84[0xc]; // 0xf84
            source2sdk::entity2::GameTime_t m_flNextBatTime; // 0xf90            
            uint8_t _pad0f94[0xb0c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_VampireBat_BatSwarm) == 0x1aa0);
    };
};
