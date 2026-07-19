#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x6f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vMins"
        // static metadata: MNetworkVarNames "Vector m_vMaxs"
        // static metadata: MNetworkVarNames "uint32 m_nMaxDistance"
        // static metadata: MNetworkVarNames "CUtlString m_nStackName"
        // static metadata: MNetworkVarNames "CUtlString m_nOperatorName"
        // static metadata: MNetworkVarNames "CUtlString m_nOperatorFieldName"
        // static metadata: MNetworkVarNames "uint32 m_nMusicState"
        #pragma pack(push, 1)
        class CCitadelSoundStackFieldOBB : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0xc0]; // 0x5f0
            // metadata: MNetworkEnable
            Vector m_vMins; // 0x6b0            
            // metadata: MNetworkEnable
            Vector m_vMaxs; // 0x6bc            
            // metadata: MNetworkEnable
            std::uint32_t m_nMaxDistance; // 0x6c8            
            uint8_t _pad06cc[0x4]; // 0x6cc
            // metadata: MNetworkEnable
            CUtlString m_nStackName; // 0x6d0            
            // metadata: MNetworkEnable
            CUtlString m_nOperatorName; // 0x6d8            
            // metadata: MNetworkEnable
            CUtlString m_nOperatorFieldName; // 0x6e0            
            // metadata: MNetworkEnable
            std::uint32_t m_nMusicState; // 0x6e8            
            uint8_t _pad06ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundStackFieldOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSoundStackFieldOBB) == 0x6f0);
    };
};
