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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x628
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class C_SoundAreaEntityBase : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bDisabled; // 0x600            
            uint8_t _pad0601[0x7]; // 0x601
            // metadata: MNotSaved
            bool m_bWasEnabled; // 0x608            
            uint8_t _pad0609[0x7]; // 0x609
            CUtlSymbolLarge m_iszSoundAreaType; // 0x610            
            Vector m_vPos; // 0x618            
            uint8_t _pad0624[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundAreaEntityBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundAreaEntityBase) == 0x628);
    };
};
