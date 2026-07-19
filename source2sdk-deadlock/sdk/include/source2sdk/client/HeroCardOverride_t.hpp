#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x30
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct HeroCardOverride_t
        {
        public:
            CPanoramaImageName m_strIconHeroCard; // 0x0            
            CPanoramaImageName m_strIconHeroCardCritical; // 0x10            
            CPanoramaImageName m_strIconHeroCardGloat; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HeroCardOverride_t, m_strIconHeroCard) == 0x0);
        static_assert(offsetof(source2sdk::client::HeroCardOverride_t, m_strIconHeroCardCritical) == 0x10);
        static_assert(offsetof(source2sdk::client::HeroCardOverride_t, m_strIconHeroCardGloat) == 0x20);
        
        static_assert(sizeof(source2sdk::client::HeroCardOverride_t) == 0x30);
    };
};
