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
        // Size: 0xa98
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_FuncTrackTrain : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNotSaved
            std::int32_t m_nLongAxis; // 0xa88            
            // metadata: MNotSaved
            float m_flRadius; // 0xa8c            
            // metadata: MNotSaved
            float m_flLineLength; // 0xa90            
            uint8_t _pad0a94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncTrackTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncTrackTrain) == 0xa98);
    };
};
