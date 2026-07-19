#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimatingOverlayController.hpp"
#include "source2sdk/server/CBodyComponentSkeletonInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa20
        // Has VTable
        // Construct disallowed
        #pragma pack(push, 1)
        class CBodyComponentBaseAnimatingOverlay : public source2sdk::server::CBodyComponentSkeletonInstance
        {
        public:
            source2sdk::server::CBaseAnimatingOverlayController m_animationController; // 0x4e0            
            uint8_t _pad0a18[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponentBaseAnimatingOverlay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBodyComponentBaseAnimatingOverlay) == 0xa20);
    };
};
