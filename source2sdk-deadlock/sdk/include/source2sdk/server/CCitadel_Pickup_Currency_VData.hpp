#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECurrencyType.hpp"
#include "source2sdk/server/CCitadel_Pickup_VData.hpp"

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
        // Size: 0x9f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Pickup_Currency_VData : public source2sdk::server::CCitadel_Pickup_VData
        {
        public:
            // metadata: MPropertyStartGroup "Currency"
            source2sdk::client::ECurrencyType m_Currency; // 0x9d8            
            std::int32_t m_nCurrencyAmount; // 0x9dc            
            bool m_bPlayCurrencySound; // 0x9e0            
            uint8_t _pad09e1[0x7]; // 0x9e1
            CUtlString m_strLabelName; // 0x9e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Pickup_Currency_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Pickup_Currency_VData) == 0x9f0);
    };
};
