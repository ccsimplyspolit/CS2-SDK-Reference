#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct levellist_t
        {
        public:
            CUtlString m_sMapName; // 0x0            
            CUtlString m_sLandmarkName; // 0x8            
            CEntityHandle m_hEntLandmark; // 0x10            
            VectorWS m_vecLandmarkOrigin; // 0x14            
            QAngle m_vecLandmarkAngles; // 0x20            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::levellist_t, m_sMapName) == 0x0);
        static_assert(offsetof(source2sdk::client::levellist_t, m_sLandmarkName) == 0x8);
        static_assert(offsetof(source2sdk::client::levellist_t, m_hEntLandmark) == 0x10);
        static_assert(offsetof(source2sdk::client::levellist_t, m_vecLandmarkOrigin) == 0x14);
        static_assert(offsetof(source2sdk::client::levellist_t, m_vecLandmarkAngles) == 0x20);
        
        static_assert(sizeof(source2sdk::client::levellist_t) == 0x30);
    };
};
