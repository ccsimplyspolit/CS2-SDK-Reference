#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0x1790
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Drifter_BloodBlast : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x800]; // 0xf70
            source2sdk::client::ParticleIndex_t m_SandEffect; // 0x1770            
            uint8_t _pad1774[0x4]; // 0x1774
            // m_vecHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitTargets;
            char m_vecHitTargets[0x18]; // 0x1778            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Drifter_BloodBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Drifter_BloodBlast) == 0x1790);
    };
};
