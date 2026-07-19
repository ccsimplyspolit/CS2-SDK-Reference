#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1578
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flLandedTime"
        // static metadata: MNetworkVarNames "bool m_bLanded"
        // static metadata: MNetworkVarNames "bool m_bFalling"
        // static metadata: MNetworkVarNames "bool m_bInStoneForm"
        // static metadata: MNetworkVarNames "float m_flStartHeight"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_StoneForm : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x388]; // 0x11d8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1560            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLandedTime; // 0x1564            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bLanded; // 0x1568            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bFalling; // 0x1569            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInStoneForm; // 0x156a            
            uint8_t _pad156b[0x1]; // 0x156b
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flStartHeight; // 0x156c            
            source2sdk::client::ParticleIndex_t m_nStoneFormEffect; // 0x1570            
            uint8_t _pad1574[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_StoneForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tengu_StoneForm) == 0x1578);
    };
};
