#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNPC_NeutralSinnerSacrificeVData.hpp"

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
        // Size: 0x1908
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_NeutralSinnerSacrificeHideoutVData : public source2sdk::client::CNPC_NeutralSinnerSacrificeVData
        {
        public:
            CUtlString m_sLocHint01; // 0x18f0            
            CUtlString m_sLocHint02; // 0x18f8            
            float m_flRespawnTime; // 0x1900            
            uint8_t _pad1904[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_NeutralSinnerSacrificeHideoutVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_NeutralSinnerSacrificeHideoutVData) == 0x1908);
    };
};
