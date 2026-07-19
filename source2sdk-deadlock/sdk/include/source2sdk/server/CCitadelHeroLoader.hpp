#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x4b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelHeroLoader : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_hero; // 0x4a0            
            std::int32_t m_nLoadSeq; // 0x4a8            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x4ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHeroLoader because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelHeroLoader) == 0x4b0);
    };
};
