#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraphController.hpp"
#include "source2sdk/client/CBodyComponentSkeletonInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xbb0
        // Has VTable
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBodyComponentBaseAnimGraph : public source2sdk::client::CBodyComponentSkeletonInstance
        {
        public:
            source2sdk::client::CBaseAnimGraphController m_animationController; // 0x510            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponentBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBodyComponentBaseAnimGraph) == 0xbb0);
    };
};
