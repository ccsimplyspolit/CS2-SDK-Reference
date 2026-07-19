#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTAPropCustomTexture : public source2sdk::client::C_DynamicProp
        {
        public:
            std::uint32_t m_unTeamID; // 0xd10            
            uint8_t _pad0d14[0xc]; // 0xd14
            bool m_bSetupMaterialProxy; // 0xd20            
            uint8_t _pad0d21[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAPropCustomTexture because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAPropCustomTexture) == 0xd30);
    };
};
