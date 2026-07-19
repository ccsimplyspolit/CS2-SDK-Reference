#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAttributeManager.hpp"
#include "source2sdk/client/C_EconItemView.hpp"

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
        // Size: 0x4d0
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_AttributeContainer : public source2sdk::client::CAttributeManager
        {
        public:
            source2sdk::client::C_EconItemView m_Item; // 0x50            
            std::int32_t m_iExternalItemProviderRegisteredToken; // 0x4c0            
            uint8_t _pad04c4[0x4]; // 0x4c4
            std::uint64_t m_ullRegisteredAsItemID; // 0x4c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_AttributeContainer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_AttributeContainer) == 0x4d0);
    };
};
