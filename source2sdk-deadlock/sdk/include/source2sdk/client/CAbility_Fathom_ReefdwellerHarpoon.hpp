#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1488
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bBulletFlying"
        // static metadata: MNetworkVarNames "bool m_bHasLatchedOnce"
        // static metadata: MNetworkVarNames "bool m_bLatched"
        // static metadata: MNetworkVarNames "Vector m_vHarpoonTarget"
        // static metadata: MNetworkVarNames "float m_flLatchedYaw"
        // static metadata: MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStuckStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flReelStartTime"
        #pragma pack(push, 1)
        class CAbility_Fathom_ReefdwellerHarpoon : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bHitTarget; // 0x11d8            
            uint8_t _pad11d9[0x3]; // 0x11d9
            Vector m_vPrevPos; // 0x11dc            
            // metadata: MNetworkEnable
            bool m_bBulletFlying; // 0x11e8            
            // metadata: MNetworkEnable
            bool m_bHasLatchedOnce; // 0x11e9            
            // metadata: MNetworkEnable
            bool m_bLatched; // 0x11ea            
            uint8_t _pad11eb[0x1]; // 0x11eb
            // metadata: MNetworkEnable
            Vector m_vHarpoonTarget; // 0x11ec            
            // metadata: MNetworkEnable
            float m_flLatchedYaw; // 0x11f8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCloseEnoughStartTime; // 0x11fc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStuckStartTime; // 0x1200            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReelStartTime; // 0x1204            
            uint8_t _pad1208[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fathom_ReefdwellerHarpoon) == 0x1488);
    };
};
