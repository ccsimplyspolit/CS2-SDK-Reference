#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4b8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strGraphName"
        // static metadata: MNetworkVarNames "CUtlString m_strStateBlob"
        #pragma pack(push, 1)
        class CPulseGameBlackboard : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a0[0x8]; // 0x4a0
            // metadata: MNetworkEnable
            CUtlString m_strGraphName; // 0x4a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBlackboardStateChanged"
            CUtlString m_strStateBlob; // 0x4b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGameBlackboard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseGameBlackboard) == 0x4b8);
    };
};
