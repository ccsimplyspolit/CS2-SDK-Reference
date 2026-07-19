#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelProjectileTrackingParams.hpp"
#include "source2sdk/server/CitadelAbilityProjectileCreateInfo_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf8
        #pragma pack(push, 1)
        struct CitadelConfigurableTrackedAbilityProjectileCreateInfo_t : public source2sdk::server::CitadelAbilityProjectileCreateInfo_t
        {
        public:
            source2sdk::client::CCitadelProjectileTrackingParams m_TrackingParams; // 0x60            
            // m_hTrackedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrackedTarget;
            char m_hTrackedTarget[0x4]; // 0xf0            
            uint8_t _pad00f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelConfigurableTrackedAbilityProjectileCreateInfo_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CitadelConfigurableTrackedAbilityProjectileCreateInfo_t) == 0xf8);
    };
};
