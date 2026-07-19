#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
    };
};

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
        // Size: 0x5d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_IcePath : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x500]; // 0xc0
            std::int32_t m_iShardCount; // 0x5c0            
            Vector m_vLastShardPosition; // 0x5c4            
            // m_hSurfShard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseModelEntity> m_hSurfShard;
            char m_hSurfShard[0x4]; // 0x5d0            
            uint8_t _pad05d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_IcePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_IcePath) == 0x5d8);
    };
};
