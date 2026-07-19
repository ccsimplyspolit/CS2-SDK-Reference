#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace vphysics2
    {
        struct IPhysicsJoint;
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
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct WrappedPhysicsJoint_t
        {
        public:
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsJoint* m_pJoint; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::WrappedPhysicsJoint_t, m_pJoint) == 0x0);
        
        static_assert(sizeof(source2sdk::client::WrappedPhysicsJoint_t) == 0x8);
    };
};
