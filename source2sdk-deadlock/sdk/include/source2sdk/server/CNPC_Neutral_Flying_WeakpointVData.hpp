#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_Neutral_WeakpointVData.hpp"

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
        // Size: 0x230
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Neutral_Flying_WeakpointVData : public source2sdk::server::CNPC_Neutral_WeakpointVData
        {
        public:
            float m_flFrequencyY; // 0x218            
            float m_flMinY; // 0x21c            
            float m_flMaxY; // 0x220            
            float m_flFrequencyR; // 0x224            
            float m_flOrbitRadius; // 0x228            
            float m_flOffSetScaler; // 0x22c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Neutral_Flying_WeakpointVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Neutral_Flying_WeakpointVData) == 0x230);
    };
};
