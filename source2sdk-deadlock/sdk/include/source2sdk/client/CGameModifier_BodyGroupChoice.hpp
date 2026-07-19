#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0xc8
        // Has VTable
        #pragma pack(push, 1)
        class CGameModifier_BodyGroupChoice : public source2sdk::client::CCitadelModifier
        {
        public:
            CUtlStringToken m_nBodyGroupName; // 0xc0            
            std::int32_t m_nBodyGroupChoice; // 0xc4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameModifier_BodyGroupChoice because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CGameModifier_BodyGroupChoice) == 0xc8);
    };
};
