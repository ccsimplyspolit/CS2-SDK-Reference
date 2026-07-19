#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraphVariationUserData.hpp"

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
        // Size: 0x38
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_BaseNPCGraphVariationUserData : public source2sdk::client::CBaseAnimGraphVariationUserData
        {
        public:
            // m_sActionHandshakesSupported has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_sActionHandshakesSupported;
            char m_sActionHandshakesSupported[0x18]; // 0x8            
            // m_sMovementHandshakesSupported has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_sMovementHandshakesSupported;
            char m_sMovementHandshakesSupported[0x18]; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_BaseNPCGraphVariationUserData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAI_BaseNPCGraphVariationUserData) == 0x38);
    };
};
