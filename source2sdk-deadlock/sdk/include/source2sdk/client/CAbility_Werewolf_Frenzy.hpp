#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x15f8
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Werewolf_Frenzy : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x400]; // 0x11d8
            source2sdk::client::ParticleIndex_t m_SandEffect; // 0x15d8            
            uint8_t _pad15dc[0x4]; // 0x15dc
            // m_vecHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitTargets;
            char m_vecHitTargets[0x18]; // 0x15e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Werewolf_Frenzy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Werewolf_Frenzy) == 0x15f8);
    };
};
