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
        // Size: 0x1220
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
        class CAbility_Fathom_ReefdwellerHarpoon : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            bool m_bHitTarget; // 0xf70            
            uint8_t _pad0f71[0x3]; // 0xf71
            Vector m_vPrevPos; // 0xf74            
            // metadata: MNetworkEnable
            bool m_bBulletFlying; // 0xf80            
            // metadata: MNetworkEnable
            bool m_bHasLatchedOnce; // 0xf81            
            // metadata: MNetworkEnable
            bool m_bLatched; // 0xf82            
            uint8_t _pad0f83[0x1]; // 0xf83
            // metadata: MNetworkEnable
            Vector m_vHarpoonTarget; // 0xf84            
            // metadata: MNetworkEnable
            float m_flLatchedYaw; // 0xf90            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCloseEnoughStartTime; // 0xf94            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStuckStartTime; // 0xf98            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReelStartTime; // 0xf9c            
            uint8_t _pad0fa0[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fathom_ReefdwellerHarpoon) == 0x1220);
    };
};
