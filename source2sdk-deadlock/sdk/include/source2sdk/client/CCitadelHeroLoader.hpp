#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x600
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelHeroLoader : public source2sdk::client::C_BaseEntity
        {
        public:
            CUtlSymbolLarge m_hero; // 0x5f0            
            std::int32_t m_nLoadSeq; // 0x5f8            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x5fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHeroLoader because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelHeroLoader) == 0x600);
    };
};
