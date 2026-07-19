#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Size: 0x9b8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flLightScale"
        // static metadata: MNetworkVarNames "float32 m_Radius"
        #pragma pack(push, 1)
        class C_SpotlightEnd : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flLightScale; // 0x9a8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_Radius; // 0x9ac            
            uint8_t _pad09b0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SpotlightEnd because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SpotlightEnd) == 0x9b8);
    };
};
