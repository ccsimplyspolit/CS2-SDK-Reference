#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"

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
        // Size: 0x918
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "string_t m_iszSoundName"
        #pragma pack(push, 1)
        class CTriggerItemShop : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x8e0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSoundName; // 0x900            
            Vector m_vAudioOffset; // 0x908            
            uint8_t _pad0914[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerItemShop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerItemShop) == 0x918);
    };
};
