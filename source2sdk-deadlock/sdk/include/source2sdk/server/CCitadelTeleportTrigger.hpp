#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CTriggerModifier.hpp"

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
        // Size: 0x990
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "Vector m_vExitOrigin"
        #pragma pack(push, 1)
        class CCitadelTeleportTrigger : public source2sdk::server::CTriggerModifier
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x8f0            
            // metadata: MNetworkEnable
            Vector m_vExitOrigin; // 0x910            
            uint8_t _pad091c[0x44]; // 0x91c
            CUtlSymbolLarge m_strExitPoint; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnTeleport; // 0x968            
            CUtlSymbolLarge m_strPropModel; // 0x980            
            float m_flTeleportDelay; // 0x988            
            uint8_t _pad098c[0x4];
            
            // Datamap fields:
            // void m_pEntExit; // 0x920
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTeleportTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTeleportTrigger) == 0x990);
    };
};
